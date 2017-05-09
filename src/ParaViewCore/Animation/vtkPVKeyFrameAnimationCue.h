/*=========================================================================

  Program:   ParaView
  Module:    $RCSfile$

  Copyright (c) Kitware, Inc.
  All rights reserved.
  See Copyright.txt or http://www.paraview.org/HTML/Copyright.html for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/
/**
 * @class   vtkPVKeyFrameAnimationCue
 *
 * vtkPVKeyFrameAnimationCue is a specialization of vtkPVAnimationCue that uses
 * the vtkPVKeyFrameCueManipulator as the manipulator.
*/

#ifndef vtkPVKeyFrameAnimationCue_h
#define vtkPVKeyFrameAnimationCue_h

#include "vtkPVAnimationCue.h"

class vtkPVKeyFrame;
class vtkPVKeyFrameCueManipulator;

class VTKPVANIMATION_EXPORT vtkPVKeyFrameAnimationCue : public vtkPVAnimationCue
{
public:
  vtkTypeMacro(vtkPVKeyFrameAnimationCue, vtkPVAnimationCue);
  void PrintSelf(ostream& os, vtkIndent indent) VTK_OVERRIDE;

  //@{
  /**
   * Forwarded to the internal vtkPVKeyFrameCueManipulator.
   */
  int AddKeyFrame(vtkPVKeyFrame* keyframe);
  int GetLastAddedKeyFrameIndex();
  void RemoveKeyFrame(vtkPVKeyFrame*);
  void RemoveAllKeyFrames();
  //@}

protected:
  vtkPVKeyFrameAnimationCue();
  ~vtkPVKeyFrameAnimationCue();

  vtkPVKeyFrameCueManipulator* GetKeyFrameManipulator();

private:
  vtkPVKeyFrameAnimationCue(const vtkPVKeyFrameAnimationCue&) VTK_DELETE_FUNCTION;
  void operator=(const vtkPVKeyFrameAnimationCue&) VTK_DELETE_FUNCTION;
};

#endif