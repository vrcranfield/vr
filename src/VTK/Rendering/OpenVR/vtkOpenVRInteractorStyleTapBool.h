/*=========================================================================

Program:   Visualization Toolkit
Module:    vtkOpenVRInteractorStyleTapBool.h

Copyright (c) Ventura Romero Mendo
All rights reserved.
See Copyright.txt or http://www.kitware.com/Copyright.htm for details.

This software is distributed WITHOUT ANY WARRANTY; without even
the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
PURPOSE.  See the above copyright notice for more information.

=========================================================================*/
/**
 * @class   vtkOpenVRInteractorStyleTapBool
 * @brief   extended from vtkOpenVRInteractorStyleInputData to override command methods on Touchpad.
 *          Divides touchpad in sections to input boolean values.
*/

#ifndef vtkOpenVRInteractorStyleTapBool_h
#define vtkOpenVRInteractorStyleTapBool_h

#include "vtkRenderingOpenVRModule.h" // For export macro
#include "vtkOpenVRInteractorStyleInputData.h"

class vtkOpenVRPropertyModifier;

class vtkImageActor;
class vtkImageSliceMapper;
class vtkImageReader2;
class vtkImageMapper3D;
class vtkActor2D;
class vtkImageMapper;
class vtkImageData;
class vtkJPEGReader;
class vtkPNGReader;

class vtkOpenVRTextFeedback;
class vtkOpenVRTouchPadImage;

class VTKRENDERINGOPENVR_EXPORT vtkOpenVRInteractorStyleTapBool : public vtkOpenVRInteractorStyleInputData
{
public:
  static vtkOpenVRInteractorStyleTapBool *New();
  vtkTypeMacro(vtkOpenVRInteractorStyleTapBool, vtkOpenVRInteractorStyleInputData);
  void PrintSelf(ostream& os, vtkIndent indent) VTK_OVERRIDE;


  //@{
  /**
  * Override Right Button (Touchpad) to input numbers.
  */
  void OnRightButtonDown() VTK_OVERRIDE;
  void OnRightButtonUp() VTK_OVERRIDE;
  //@}

  //@{
  /**
  * Override Middle Button (Grip) which will select Prop and attribute to modify.
  */
  void OnMiddleButtonDown() VTK_OVERRIDE;
  void OnMiddleButtonUp() VTK_OVERRIDE;
  //@}



protected:
  vtkOpenVRInteractorStyleTapBool();
  ~vtkOpenVRInteractorStyleTapBool() VTK_OVERRIDE;

  //Text3D to modify Props' attributes.
//	vtkOpenVRTextFeedback *TextFeedback;

  vtkOpenVRPropertyModifier *FieldModifier;
  //Used along with vtkOpenVRPropertyModifier:
  virtual void ShowTestActor(bool on);

	//Images
//  vtkOpenVRTouchPadImage *TouchPadImage;

private:
  vtkOpenVRInteractorStyleTapBool(const vtkOpenVRInteractorStyleTapBool&) VTK_DELETE_FUNCTION;  // Not implemented.
  void operator=(const vtkOpenVRInteractorStyleTapBool&) VTK_DELETE_FUNCTION;  // Not implemented.
};

#endif