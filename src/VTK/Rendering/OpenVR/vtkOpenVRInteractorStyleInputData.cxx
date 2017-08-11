/*=========================================================================

Program:   Visualization Toolkit
Module:    vtkOpenVRInteractorStyleInputData.cxx

Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
All rights reserved.
See Copyright.txt or http://www.kitware.com/Copyright.htm for details.

This software is distributed WITHOUT ANY WARRANTY; without even
the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
PURPOSE.  See the above copyright notice for more information.

=========================================================================*/
#include "vtkOpenVRInteractorStyleInputData.h"

#include "vtkNew.h"
#include "vtkObjectFactory.h"
#include "vtkOpenVRRenderWindow.h"
#include "vtkRenderWindow.h"
#include "vtkOpenVRRenderWindowInteractor.h"
#include "vtkRenderWindowInteractor.h"
#include "vtkOpenVROverlay.h"

#include "vtkCommand.h"
#include "vtkCallbackCommand.h"

#include "vtkOpenVRTouchPadImage.h"
#include "vtkOpenVRTouchPadPointer.h"
#include "vtkOpenVRTextFeedback.h"
#include "vtkOpenVRFieldModifier.h"
#include "vtkOpenVRInteractorStyleSwitchInput.h"

#include "vtkActor.h"
#include "vtkTextActor3D.h"
#include "vtkStdString.h"
#include "vtkOpenVRRenderer.h"
#include "vtkOpenVRCamera.h"
#include "vtkRenderer.h"

vtkStandardNewMacro(vtkOpenVRInteractorStyleInputData);

//----------------------------------------------------------------------------
vtkOpenVRInteractorStyleInputData::vtkOpenVRInteractorStyleInputData()
{
	//pointers will be constructed in inherited classes, this is an interface class.
	this->TouchPadPointer = NULL;
	this->TouchPadImage = NULL;
	this->TextFeedback = NULL;
//////	this->FieldModifier = NULL;
	this->ISSwitch = NULL;

	this->ModifyProp = false;
}

//----------------------------------------------------------------------------
vtkOpenVRInteractorStyleInputData::~vtkOpenVRInteractorStyleInputData()
{
}

//----------------------------------------------------------------------------
void vtkOpenVRInteractorStyleInputData::OnMiddleButtonDown()
{
  	//Get current renderer (if is not got already)
	if (this->Interactor)
	{
		int pointer = this->Interactor->GetPointerIndex();
		this->FindPokedRenderer(this->Interactor->GetEventPositions(pointer)[0],
		                        this->Interactor->GetEventPositions(pointer)[1]);

		vtkRenderWindowInteractor3D *vriren = vtkRenderWindowInteractor3D::SafeDownCast(this->Interactor);
		double *wpos = vriren->GetWorldEventPosition( vriren->GetPointerIndex());
		this->FindPickedActor(wpos[0], wpos[1], wpos[2]);
	}

/*
	//TestActor is a mandatory condition for me because I dont know how to get the Source from other objects.
	if (this->InteractionProp != NULL && this->InteractionProp == this->ISSwitch->GetFieldModifier()->GetTestActor())
	{
		if (this->Interactor->GetInteractorStyle()->IsA("vtkOpenVRInteractorStyleSwitchInput"))
		{
			vtkOpenVRInteractorStyleSwitchInput *ISSwitch =
				vtkOpenVRInteractorStyleSwitchInput::SafeDownCast(this->Interactor->GetInteractorStyle());
			
			ISSwitch->SetCurrentStyleToFieldSelector();
			return;
		}
	}
*/

	bool TextEmpty = false;
	if (this->TextFeedback->GetTextActor())
		TextEmpty = !bool(vtkStdString(" ").compare(this->TextFeedback->GetTextActor()->GetInput()));

	//Second Click. Already created and changes saved: can be hidden.
	if (this->TextFeedback->GetTextActor() && this->TextFeedback->GetTextRenderer() != NULL
		&& (!this->TextFeedback->GetHasUnsavedChanges() || TextEmpty))
	{
		this->TextFeedback->Reset();
		//Test:
		if (this->ModifyProp)
		{
			this->ISSwitch->GetFieldModifier()->HideTest();
		}
	}
	//Either or is not created or has changes or is not shown
	else
	{
		//First Click ever. Not created yet: create it and place it properly.
		if (!this->TextFeedback->GetTextActor())
		{
			this->TextFeedback->Init();
		}

		//First Click. Created but not shown. Check if used different renderer to previous visualization.
		if (this->CurrentRenderer != this->TextFeedback->GetTextRenderer())
		{
			if (this->TextFeedback->GetTextRenderer() != NULL && this->TextFeedback->GetTextActor())
			{
				this->TextFeedback->GetTextRenderer()->RemoveViewProp(this->TextFeedback->GetTextActor());
			}
			if (this->CurrentRenderer != 0)
			{
				this->CurrentRenderer->AddViewProp(this->TextFeedback->GetTextActor());
			}
			else
			{
				vtkWarningMacro(<< "no current renderer on the interactor style.");
			}
			this->TextFeedback->SetTextRenderer(this->CurrentRenderer);
			this->TextFeedback->SetTextIsVisible(true);
			this->TextFeedback->SetHasUnsavedChanges(false);
			////NEW:
			vtkOpenVRRenderer *ren = vtkOpenVRRenderer::SafeDownCast(this->CurrentRenderer);
			vtkOpenVRCamera *camera = vtkOpenVRCamera::SafeDownCast(ren->GetActiveCamera());
			this->TextFeedback->PlaceInScene(camera);


			//Test:
			if (this->ModifyProp)
			{
				this->ISSwitch->GetFieldModifier()->ShowTest(vtkOpenVRRenderWindowInteractor::SafeDownCast(this->Interactor));
			}
		}

	}
////NEW:
////	vtkOpenVRRenderer *ren = vtkOpenVRRenderer::SafeDownCast(this->CurrentRenderer);
////	vtkOpenVRCamera *camera = vtkOpenVRCamera::SafeDownCast(ren->GetActiveCamera());
////	this->TextFeedback->PlaceInScene(camera);

	//Render Scene
	if (this->Interactor)
	{
		this->Interactor->Render();
	}
}
/*
//----------------------------------------------------------------------------
void vtkOpenVRInteractorStyleInputData::OnMiddleButtonUp()
{
	vtkOpenVRRenderWindow* renWin = vtkOpenVRRenderWindow::SafeDownCast(this->Interactor->GetRenderWindow());
  if (!renWin)
  {
    return;
  }
  vtkOpenVROverlay *ovl = renWin->GetDashboardOverlay();
  ovl->LoadNextCameraPose();
}
*/
//----------------------------------------------------------------------------
void vtkOpenVRInteractorStyleInputData::OnTap()
{
	int x = this->Interactor->GetEventPosition()[0];
	int y = this->Interactor->GetEventPosition()[1];

	this->FindPokedRenderer(x, y);
	if (this->CurrentRenderer == NULL)
	{
		return;
	}

	vtkOpenVRRenderWindowInteractor *rwi = vtkOpenVRRenderWindowInteractor::SafeDownCast(this->Interactor);
	this->TouchPadPointer->Attach(rwi);
	this->TouchPadImage->Attach(rwi);

	this->GrabFocus(this->EventCallbackCommand);
	this->StartTap();
}

//----------------------------------------------------------------------------
void vtkOpenVRInteractorStyleInputData::OnUntap()
{
	this->TouchPadPointer->Detach();
	this->TouchPadImage->Detach();

	this->EndTap();

	if (this->Interactor)
	{
		this->ReleaseFocus();
	}
}

//----------------------------------------------------------------------------
void vtkOpenVRInteractorStyleInputData::OnMouseMove()
{
	int x = this->Interactor->GetEventPosition()[0];
	int y = this->Interactor->GetEventPosition()[1];

	switch (this->State)
	{
	case VTKIS_ROTATE:
		this->FindPokedRenderer(x, y);
		this->Rotate();
		this->InvokeEvent(vtkCommand::InteractionEvent, NULL);
		break;
	case VTKIS_DOLLY:
		this->FindPokedRenderer(x, y);
		this->Dolly();
		this->InvokeEvent(vtkCommand::InteractionEvent, NULL);
		break;
	case VTKIS_CLIP:
		this->FindPokedRenderer(x, y);
		this->Clip();
		this->InvokeEvent(vtkCommand::InteractionEvent, NULL);
		break;
	case VTKIS_TAP:
		this->FindPokedRenderer(x, y);
		vtkOpenVRRenderWindowInteractor *rwi = vtkOpenVRRenderWindowInteractor::SafeDownCast(this->Interactor);
		this->TouchPadPointer->Move(rwi);
		this->TouchPadImage->Move(rwi);
		this->TrackFinger();
		this->InvokeEvent(vtkCommand::InteractionEvent, NULL);
		break;
	}
}

//----------------------------------------------------------------------------
void vtkOpenVRInteractorStyleInputData::IncNextImage()
{
	int nextImg = this->TouchPadImage->GetNextImage();
	if (nextImg == (this->TouchPadImage->GetMaxNumImg() - 1))
	{
		this->TouchPadImage->SetNextImage(0);
	}
	else
	{
		this->TouchPadImage->SetNextImage(++nextImg);
	}
}

//----------------------------------------------------------------------------
void vtkOpenVRInteractorStyleInputData::DecNextImage()
{
	int nextImg = this->TouchPadImage->GetNextImage();
	if (nextImg == 0)
	{
		this->TouchPadImage->SetNextImage(this->TouchPadImage->GetMaxNumImg() - 1);
	}
	else
	{
		this->TouchPadImage->SetNextImage(--nextImg);
	}
}

//----------------------------------------------------------------------------
void vtkOpenVRInteractorStyleInputData::Reset()
{
	if (this->TextFeedback)
	{
		this->TextFeedback->Reset();
	}
	
	if (this->TouchPadPointer)
	{
		this->TouchPadPointer->Detach();
	}

	if (this->TouchPadImage)
	{
		this->TouchPadImage->Detach();
	}
	
	if (this->ISSwitch)
	{
		this->ISSwitch->GetFieldModifier()->HideTest();
	}
	/*if (this->FieldModifier)
	{
		this->FieldModifier->HideTest();
	}*/
}

void vtkOpenVRInteractorStyleInputData::ModifyProperty(vtkObject * obj, vtkField field, char ** value)
{
	this->ISSwitch->GetFieldModifier()->ModifyProperty(obj, field, value);
}

//----------------------------------------------------------------------------
void vtkOpenVRInteractorStyleInputData::PrintSelf(ostream& os, vtkIndent indent)
{
  this->Superclass::PrintSelf(os,indent);
}
