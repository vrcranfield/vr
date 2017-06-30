/*=========================================================================

Program:   Visualization Toolkit
Module:    vtkOpenVRInteractorStylePressDial.cxx

Copyright (c) Ventura Romero Mendo
All rights reserved.
See Copyright.txt or http://www.kitware.com/Copyright.htm for details.

This software is distributed WITHOUT ANY WARRANTY; without even
the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
PURPOSE.  See the above copyright notice for more information.

=========================================================================*/
#include "vtkOpenVRInteractorStylePressDial.h"

#include "vtkNew.h"
#include "vtkObjectFactory.h"
#include "vtkOpenVRRenderWindow.h"
#include "vtkRenderWindow.h"
#include "vtkRenderWindowInteractor.h"
#include "vtkOpenVROverlay.h"
#include <valarray>
#include "vtkRenderWindowInteractor3D.h"

#include "vtkTextActor3D.h"
#include "vtkBillboardTextActor3D.h"
#include "vtkTextProperty.h"
#include "vtkTextMapper.h"
#include "vtkRenderer.h"
#include "vtkTextSource.h"
#include "vtkOpenVRRenderer.h"
#include "vtkOpenVRRenderWindowInteractor.h"
#include "vtkOpenVRCamera.h"
#include "vtkMatrixToHomogeneousTransform.h"
#include "vtkSphereSource.h"
#include "vtkProperty.h"
#include "vtkPolyDataMapper.h"

#include "vtkOpenVRPropertyModifier.h"

#include "vtkImageActor.h"
#include "vtkImageReader2.h"
#include "vtkImageSliceMapper.h"
#include "vtkJPEGReader.h"
#include "vtkPNGReader.h"
#include "vtkImageMapper.h"
#include "vtkActor2D.h"

vtkStandardNewMacro(vtkOpenVRInteractorStylePressDial);

//----------------------------------------------------------------------------
vtkOpenVRInteractorStylePressDial::vtkOpenVRInteractorStylePressDial()
{
	//Text3D to modify Props' attributes.
	this->TextActor = NULL;
	this->TextRenderer = NULL;
	this->TextHasUnsavedChanges = false;
	this->TextDefaultMsg = true;
	this->TextIsVisible = false;

	this->FieldModifier = vtkOpenVRPropertyModifier::New();

/*
	//Images:
	//this->HasImage = true;
	this->ImgReader = vtkImageReader2::New(); 
	//this->ImgReader->SetFileName("OpenVRDashboard.jpg");
	this->ImgReader->SetFileName("..\\..\\..\\VTK\\Rendering\\OpenVR\\OpenVRDashboard.jpg");
	this->ImgReader->Update();
	this->ImgActor = NULL;		// vtkImageActor::New();
	this->ImgRenderer = NULL;
	//this->ImgMapper = this->ImgActor->GetMapper();			//vtkImageSliceMapper::New();	//Most probably, not needed.
	//system("dir & pause");
	//this->ImgActor->SetInputData(this->ImgReader->GetOutput());
	//this->imgActor->SetPosition(0., 0., 0.);
*/

/*vtkJPEGReader *reader;
vtkImageMapper *mapper;
vtkActor2D *image;
vtkRenderer *render;*/
	//https://gist.github.com/waldyrious/c3be68f0682543ee0ae2
	this->reader = vtkPNGReader::New();	//this->reader = vtkJPEGReader::New();
	//reader->SetFileName("..\\..\\..\\VTK\\Rendering\\OpenVR\\OpenVRDashboard.jpg");
	reader->SetFileName("..\\..\\..\\VTK\\Rendering\\OpenVR\\ControllerOverlay.png");
	reader->Update();

	this->mapper = vtkImageSliceMapper::New();
	mapper->SetInputData(this->reader->GetOutput());
	//mapper->SetColorWindow(255); // width of the color range to map to
	//mapper->SetColorLevel(127.5); // center of the color range to map to
	
	this->ImgActor = vtkImageActor::New();
	ImgActor->SetMapper(mapper);

	this->ImgRenderer = NULL;

	//https://www.researchgate.net/publication/45338891_A_Multimodal_Virtual_Reality_Interface_for_VTK
}

//----------------------------------------------------------------------------
vtkOpenVRInteractorStylePressDial::~vtkOpenVRInteractorStylePressDial()
{
	//Remove Text3D
	if(this->TextActor)
	{
		this->TextActor->Delete();
	}

	//Remove Field Modifier:
	if(this->FieldModifier)
	{
		this->FieldModifier->Delete();
	}

	//Remove Image:
	this->SetTouchPadImage(false);
	/*if(this->ImgReader)
	{
		this->ImgReader->Delete();
	}*/
	/*
	if(this->ImgMapper)
	{
		this->ImgMapper->Delete();
	}
	*/
}

//----------------------------------------------------------------------------
void vtkOpenVRInteractorStylePressDial::OnRightButtonDown()
{
	if (this->TextIsVisible)
	{
		//Downcast to a 3D Interactor.
		vtkRenderWindowInteractor3D *rwi =
			static_cast<vtkRenderWindowInteractor3D *>(this->Interactor);

		float x = rwi->GetTouchPadPosition()[0];	// Values between -1 and 1.
		float y = rwi->GetTouchPadPosition()[1];

		float radius = sqrt(x*x + y*y);

		int region = int(5. * atan2(x, y) / vtkMath::Pi());		// Clockwise values, starting in (x,y) = (0,1)
		region = (x > 0) ? region : (region + 9);				// 10 regions. Integer values in range [0, 9]


		if (this->TextActor && TextDefaultMsg)
		{
			this->TextActor->SetInput("");
			TextDefaultMsg = false;
			TextHasUnsavedChanges = true;
		}

		if (radius > .6)
		{
			//Display number, which is equal to region number
			vtkErrorMacro(<< "Number pressed: " << region);	// Just for debugging purposes.

			//Actual code:
			if (this->TextActor)
			{
				vtkStdString newText = vtkVariant(this->TextActor->GetInput()).ToString() + vtkVariant(region).ToString();
				this->TextActor->SetInput(newText);
				this->TextActor->GetTextProperty()->BoldOn();
				TextHasUnsavedChanges = true;
			}
		}
		else if(radius > .2)
		{
			if (region <= 4)
			{
				vtkErrorMacro(<< "\"Validate number\" pressed. Region: " << region);	// Just for debugging purposes.

				//Actual code:
				if (this->TextActor)
				{
					vtkStdString newText = vtkVariant(this->TextActor->GetInput()).ToString();
					if (newText.compare("") == 0)
					{
						this->TextActor->SetInput(" ");		//Avoids unexpected errors
					}
					this->TextActor->GetTextProperty()->BoldOff();
					TextHasUnsavedChanges = false;
					
					//test:
					vtkSphereSource *testSource = this->FieldModifier->GetTestSource();
					this->FieldModifier->ModifyProperty(testSource, vtkField::Radius, this->TextActor->GetInput());
				}
			}
			else	// region in range [5,9]
			{
				vtkErrorMacro(<< "\"Remove last digit\" pressed. Region: " << region);	// Just for debugging purposes.

				//Actual code:
				if (this->TextActor)
				{
					vtkStdString newText = vtkVariant(this->TextActor->GetInput()).ToString();
					if (newText.length() <= 1)
					{
						this->TextActor->SetInput(" ");		//Avoids unexpected errors
						this->TextActor->GetTextProperty()->BoldOff();
						TextHasUnsavedChanges = false;
					}
					else
					{
						newText.pop_back();
						this->TextActor->SetInput(newText);
						this->TextActor->GetTextProperty()->BoldOn();
						TextHasUnsavedChanges = true;
					}
				}
			}
		}
		else
		{
			if (this->TextActor)
			{
				vtkStdString newText = vtkVariant(this->TextActor->GetInput()).ToString() + ".";
				this->TextActor->SetInput(newText);
				this->TextActor->GetTextProperty()->BoldOn();
				TextHasUnsavedChanges = true;
			}
		}
	}
}

//----------------------------------------------------------------------------
void vtkOpenVRInteractorStylePressDial::OnRightButtonUp()
{
	// do nothing except overriding the default OnRightButtonDown behavior
}

//----------------------------------------------------------------------------
void vtkOpenVRInteractorStylePressDial::OnMiddleButtonDown()
{
	//Get current renderer (if is not got already)
	if (this->Interactor)
	{
		int pointer = this->Interactor->GetPointerIndex();
		this->FindPokedRenderer(this->Interactor->GetEventPositions(pointer)[0],
		                        this->Interactor->GetEventPositions(pointer)[1]);
	}

	bool TextEmpty = false;
	if(this->TextActor) TextEmpty = !bool(vtkStdString(" ").compare(this->TextActor->GetInput()));

	//Second Click. Already created and changes saved: can be hidden.
	if (this->TextActor && this->TextRenderer != NULL &&
		(!this->TextHasUnsavedChanges || TextEmpty))
	{

		if (this->TextRenderer != NULL && this->TextActor)
		{
			//Remove from renderer
			this->TextRenderer->RemoveViewProp(this->TextActor);
			this->TextRenderer = NULL;
			//Restore initial values
			this->TextActor->SetInput("Input data");
			this->TextDefaultMsg = true;
			this->TextIsVisible = false;
			//this->TextHasUnsavedChanges = false;

			//Test:
			this->ShowTestActor(false);
		}
	}
	//Either or is not created or has changes or is not shown
	else
	{
		//First Click ever. Not created yet: create it and place it properly.
		if (!this->TextActor)
		{
			this->TextActor = vtkTextActor3D::New();
			this->TextActor->SetInput("Input data");
			this->TextActor->PickableOff();
			this->TextActor->DragableOff();
			this->TextActor->GetTextProperty()->SetBackgroundOpacity(1.0);
		}

		//First Click. Created but not shown. Check if used different renderer to previous visualization.
		if (this->CurrentRenderer != this->TextRenderer)
		{
			if (this->TextRenderer != NULL && this->TextActor)
			{
				this->TextRenderer->RemoveViewProp(this->TextActor);
			}
			if (this->CurrentRenderer != 0)
			{
				this->CurrentRenderer->AddViewProp(this->TextActor);
			}
			else
			{
				vtkWarningMacro(<< "no current renderer on the interactor style.");
			}
			this->TextRenderer = this->CurrentRenderer;
			this->TextIsVisible = true;
			this->TextHasUnsavedChanges = false;

			//Test:
			this->ShowTestActor(true);
		}

	}
	
	vtkOpenVRRenderer *ren = vtkOpenVRRenderer::SafeDownCast(this->CurrentRenderer);
	vtkOpenVRCamera *camera = vtkOpenVRCamera::SafeDownCast(ren->GetActiveCamera());

	double *camPos = camera->GetPosition();         //Camera Position
	double *camOri = camera->GetOrientation();		//Camera Orientation: rotation in (X,Y,Z)
	
	const double d2c = 0.5;		//Text distance to camera.
	
	//3D Rotation and Translation Maths
	double cosw = cos(vtkMath::RadiansFromDegrees(camOri[1]));
	double sinw = sin(vtkMath::RadiansFromDegrees(camOri[1]));
	double projection[3] = {sinw, 0, -cosw};
	vtkMath::Normalize(projection);

	double txtPos[3];

	for (int i = 0; i < 3; i++)
		txtPos[i] = camPos[i] + projection[i] * d2c;

	//Place text
	this->TextActor->SetScale(0.01);	//Default scale is ridiculously big.
	this->TextActor->SetOrientation(0, -camOri[1], 0);
	this->TextActor->SetPosition(txtPos);

	//Render Scene
	if (this->Interactor)
	{
		this->Interactor->Render();
	}
}

//----------------------------------------------------------------------------
void vtkOpenVRInteractorStylePressDial::OnMiddleButtonUp()
{
	// do nothing except overriding the default OnMiddleButtonUp behavior
}

void vtkOpenVRInteractorStylePressDial::SetTouchPadImage(bool activate)
{
	//current renderer
	if (this->Interactor)
	{
		int pointer = this->Interactor->GetPointerIndex();
		this->FindPokedRenderer(this->Interactor->GetEventPositions(pointer)[0],
			this->Interactor->GetEventPositions(pointer)[1]);
	}

	//to disable it
	if (!activate)
	{
		if (this->ImgRenderer != NULL && this->ImgActor)
		{
			this->ImgRenderer->RemoveActor(this->ImgActor);
			this->ImgRenderer = NULL;
		}
	}
	//to enable it
	else
	{
		//check if it is already active
		if (!this->ImgActor)
		{
			//create and place in coordinates.
			this->ImgActor = vtkImageActor::New();		//this->ImgActor = vtkActor2D::New();	//->working
			//this->ImgActor->SetInputData(this->ImgReader->GetOutput());
			this->ImgActor->GetMapper()->SetInputConnection(this->ImgReader->GetOutputPort());

			//this->ImgMapper = this->ImgActor->GetMapper();
			//this->ImgMapper->SetInputData(this->ImgReader->GetOutput());


			this->ImgActor->PickableOff();
			this->ImgActor->DragableOff();
			//this->PointerActor->SetMapper(this->PointerMapper);
			//this->PointerActor->GetProperty()->SetColor(this->PointerColor);
			//this->PointerActor->GetProperty()->SetAmbient(1.0);
			//this->PointerActor->GetProperty()->SetDiffuse(0.0);
		}

		//check if used different renderer to previous visualization
		if (this->CurrentRenderer != this->ImgRenderer)
		{
			if (this->ImgRenderer != NULL && this->ImgActor)
			{
				this->ImgRenderer->RemoveActor(this->ImgActor);
			}
			if (this->CurrentRenderer != 0)
			{
				this->CurrentRenderer->AddActor(this->ImgActor);
			}
			else
			{
				vtkWarningMacro(<< "no current renderer on the interactor style.");
			}
			this->ImgRenderer = this->CurrentRenderer;
		}

		vtkOpenVRRenderWindowInteractor *rwi =
			static_cast<vtkOpenVRRenderWindowInteractor *>(this->Interactor);
		vtkOpenVRRenderer *ren = vtkOpenVRRenderer::SafeDownCast(this->CurrentRenderer);
		vtkOpenVRCamera *camera = vtkOpenVRCamera::SafeDownCast(ren->GetActiveCamera());

		//Get world information
		double wscale = camera->GetDistance();                                 //Scale
		double *wpos = rwi->GetWorldEventPosition(rwi->GetPointerIndex());     //Position





		double *wori = rwi->GetWorldEventOrientation(rwi->GetPointerIndex());  //Orientation
		wori[0] = vtkMath::RadiansFromDegrees(wori[0]);
		vtkErrorMacro(<< "(" << wori[0] << ", " << wori[1] << ", " << wori[2] << ", " << wori[3] << ")");

		//Playground:
		double rotMat[3][3];
		vtkMath::QuaternionToMatrix3x3(wori, rotMat);
		vtkErrorMacro(<< "rotMat");
		vtkErrorMacro(<< "(" << rotMat[0][0] << ", " << rotMat[0][1] << ", " << rotMat[0][2] << ")");
		vtkErrorMacro(<< "(" << rotMat[1][0] << ", " << rotMat[1][1] << ", " << rotMat[1][2] << ")");
		vtkErrorMacro(<< "(" << rotMat[2][0] << ", " << rotMat[2][1] << ", " << rotMat[2][2] << ")");

		//Euler angles: ->Not Working
		/*double rotEuler[3];
		rotEuler[0] = atan2(2 * (wori[0] * wori[1] + wori[2] * wori[3]), 1 - 2 * (wori[1] * wori[1] + wori[2] * wori[2]));
		rotEuler[1] = asin(2 * (wori[0] * wori[2] - wori[3] * wori[1]));
		rotEuler[2] = atan2(2 * (wori[0] * wori[3] + wori[1] * wori[2]), 1 - 2 * (wori[2] * wori[2] + wori[3] * wori[3]));
		*/

		//RotMat to Euler: -> Not working
		/*double rotEuler[3];
		rotEuler[0] = atan2(rotMat[2][1], rotMat[2][2]);
		rotEuler[1] = atan2(-rotMat[2][0], sqrt(rotMat[2][1]*rotMat[2][1]+rotMat[2][2]*rotMat[2][2]));
		rotEuler[2] = atan2(rotMat[1][0], rotMat[0][0]);*/

		//I want extrinsic (original axis always) in this order: ZXY.
		//Lets try:
		/*double rotEuler[3];
		rotEuler[0] = atan2(-rotMat[1][2], rotMat[2][2]);
		rotEuler[1] = asin(rotMat[0][2]);
		rotEuler[2] = atan2(-rotMat[0][1], rotMat[0][0]);*/

		//birdys notes:
		double r11 = -2 * (wori[1] * wori[3] - wori[0] * wori[2]);
		double r12 = wori[0] * wori[0] + wori[1]* wori[1] - wori[2]* wori[2] - wori[3]* wori[3];
		double r21 = 2 * (wori[1] * wori[2] + wori[0] * wori[3]);
		double r31 = -2 * (wori[2] * wori[3] - wori[0] * wori[1]);
		double r32 = wori[0]* wori[0] - wori[1]* wori[1] + wori[2]* wori[2] - wori[3]* wori[3];
		double rotEuler[3];
		rotEuler[0] = atan2(r31, r32);
		rotEuler[1] = asin(r21);
		rotEuler[2] = atan2(r11, r12);

			

		//http://answers.unity3d.com/questions/1145948/split-quaternion-into-multiple-angle-axis-rotation.html






        //Get/Set touchpad information
		const double r = 0.02;	//Touchpad radius
		const double d = 0.05;	// Distance from center of controller to center of touchpad
		float *tpos = rwi->GetTouchPadPosition();
		//this->Pointer->SetRadius(.0075*wscale);	//Pointer radius

        //3D Rotation and Translation Maths
		double cosw = cos(wori[0]);	// (vtkMath::RadiansFromDegrees(wori[0]));
		double sinw = sin(wori[0]);	// (vtkMath::RadiansFromDegrees(wori[0]));
		double ptrpos[3];
		double imgPos[3];

		//Will place a corner (lower left?) of the image in the center of the touchpad.
		imgPos[0] = wpos[0] + wscale*(d - r*tpos[1]) * (wori[1] * wori[3] * (1 - cosw) + wori[2] * sinw);
		imgPos[1] = wpos[1] + wscale*(d - r*tpos[1]) * (wori[2] * wori[3] * (1 - cosw) - wori[1] * sinw);
		imgPos[2] = wpos[2] + wscale*(d - r*tpos[1]) * (cosw + wori[3] * wori[3] * (1 - cosw));

			

		//Transformation matrix (X' = R � T � X)
		//ptrpos = controller position + translate to touchpad
		/*ptrpos[0] = wpos[0] + wscale*((d - r*tpos[1]) * (wori[1] * wori[3] * (1 - cosw) + wori[2] * sinw) + r*tpos[0] * (cosw + wori[1] * wori[1] * (1 - cosw)));
		ptrpos[1] = wpos[1] + wscale*((d - r*tpos[1]) * (wori[2] * wori[3] * (1 - cosw) - wori[1] * sinw) + r*tpos[0] * (wori[1] * wori[2] * (1 - cosw) + wori[3] * sinw));
		ptrpos[2] = wpos[2] + wscale*((d - r*tpos[1]) * (cosw + wori[3] * wori[3] * (1 - cosw)) + r*tpos[0] * (wori[1] * wori[3] * (1 - cosw) - wori[2] * sinw));*/
		/*ptrpos[0] = imgPos[0] + wscale*(r*tpos[0] * (cosw + wori[1] * wori[1] * (1 - cosw)));
		ptrpos[1] = imgPos[1] + wscale*(r*tpos[0] * (wori[1] * wori[2] * (1 - cosw) + wori[3] * sinw));
		ptrpos[2] = imgPos[2] + wscale*(r*tpos[0] * (wori[1] * wori[3] * (1 - cosw) - wori[2] * sinw));*/
		
		double *imgCenter = this->ImgActor->GetMapper()->GetCenter();	//x-y img coordinates. (returns: (pixels-1)/2.0)
		//vtkErrorMacro(<< "(" << imgCenter[0] << ", " << imgCenter[1] << ")");
		this->ImgActor->SetPosition(imgPos);
		this->ImgActor->SetScale(0.0002);
		
		//this->ImgActor->SetOrientation(wori[1], wori[2], wori[3]);
		this->ImgActor->SetOrientation(vtkMath::DegreesFromRadians(rotEuler[0]), vtkMath::DegreesFromRadians(rotEuler[1]), vtkMath::DegreesFromRadians(rotEuler[2]));
	}
	
	
	
	if (this->Interactor)
	{
		this->Interactor->Render();
	}
}

//----------------------------------------------------------------------------
void vtkOpenVRInteractorStylePressDial::ShowTestActor(bool on)
{
	//Get prop data:
	vtkSphereSource *testSource = this->FieldModifier->GetTestSource();
	vtkRenderer *testRenderer = this->FieldModifier->GetTestRenderer();
	vtkPolyDataMapper *testMapper = this->FieldModifier->GetTestMapper();
	vtkActor *testActor = this->FieldModifier->GetTestActor();


		//current renderer
		if (this->Interactor)
		{
			int pointer = this->Interactor->GetPointerIndex();
			this->FindPokedRenderer(this->Interactor->GetEventPositions(pointer)[0],
				this->Interactor->GetEventPositions(pointer)[1]);
		}

	//to disable it
	if (!on)
	{
		if (testRenderer != NULL && testActor)
		{
			testRenderer->RemoveActor(testActor);
			this->FieldModifier->SetTestRenderer(NULL);
		}
	}
	//to enable it
	else
	{
		//check if it is already active
		if (!testActor)
		{
			//create and place in coordinates.
			testSource->SetPhiResolution(50);
			testSource->SetThetaResolution(50);
			testActor = vtkActor::New();
			this->FieldModifier->SetTestActor(testActor);
			testActor->PickableOff();
			testActor->DragableOff();
			testActor->SetMapper(testMapper);
			testActor->GetProperty()->SetAmbient(1.0);
			testActor->GetProperty()->SetDiffuse(0.0);
		}

		//check if used different renderer to previous visualization
		if (this->CurrentRenderer != testRenderer)
		{
			if (testRenderer != NULL && testActor)
			{
				testRenderer->RemoveActor(testActor);
			}
			if (this->CurrentRenderer != 0)
			{
				this->CurrentRenderer->AddActor(testActor);
			}
			else
			{
				vtkWarningMacro(<< "no current renderer on the interactor style.");
			}
			this->FieldModifier->SetTestRenderer(this->CurrentRenderer);
		}

		vtkOpenVRRenderWindowInteractor *rwi =
			static_cast<vtkOpenVRRenderWindowInteractor *>(this->Interactor);
		vtkOpenVRRenderer *ren = vtkOpenVRRenderer::SafeDownCast(this->CurrentRenderer);
		vtkOpenVRCamera *camera = vtkOpenVRCamera::SafeDownCast(ren->GetActiveCamera());

		double wscale = camera->GetDistance();                                 //Scale
		this->Pointer->SetRadius(.01*wscale);	//Pointer radius

		this->Pointer->SetCenter(0.,0.,0.);
	}

	if (this->Interactor)
	{
		this->Interactor->Render();
	}
}

//----------------------------------------------------------------------------
void vtkOpenVRInteractorStylePressDial::PrintSelf(ostream& os, vtkIndent indent)
{
	this->Superclass::PrintSelf(os,indent);
}
