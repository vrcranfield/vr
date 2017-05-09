// ClientServer wrapper for vtkImplicitPlaneRepresentation object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkImplicitPlaneRepresentation.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkImplicitPlaneRepresentationClientServerNewCommand(void* /*ctx*/)
{
  return vtkImplicitPlaneRepresentation::New();
}


int VTK_EXPORT vtkImplicitPlaneRepresentationCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkImplicitPlaneRepresentation *op = vtkImplicitPlaneRepresentation::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkImplicitPlaneRepresentation.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkImplicitPlaneRepresentation  *temp20;
      {
      temp20 = (op)->New();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetClassName",method) && msg.GetNumberOfArguments(0) == 2)
    {
    const char    *temp20;
      {
      temp20 = (op)->GetClassName();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("IsA",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->IsA(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("NewInstance",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkImplicitPlaneRepresentation  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SafeDownCast",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkObject  *temp0;
    vtkImplicitPlaneRepresentation  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetOrigin",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetOrigin(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetOrigin",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->SetOrigin(temp0);
      return 1;
      }
    }
  if (!strcmp("GetOrigin",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double  *temp20;
      {
      temp20 = (op)->GetOrigin();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,3) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetOrigin",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->GetOrigin(temp0);
      return 1;
      }
    }
  if (!strcmp("SetNormal",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetNormal(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetNormal",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->SetNormal(temp0);
      return 1;
      }
    }
  if (!strcmp("SetNormalToCamera",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetNormalToCamera();
      return 1;
      }
    }
  if (!strcmp("GetNormal",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double  *temp20;
      {
      temp20 = (op)->GetNormal();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,3) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetNormal",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->GetNormal(temp0);
      return 1;
      }
    }
  if (!strcmp("SetNormalToXAxis",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetNormalToXAxis(temp0);
      return 1;
      }
    }
  if (!strcmp("GetNormalToXAxis",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNormalToXAxis();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("NormalToXAxisOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->NormalToXAxisOn();
      return 1;
      }
    }
  if (!strcmp("NormalToXAxisOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->NormalToXAxisOff();
      return 1;
      }
    }
  if (!strcmp("SetNormalToYAxis",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetNormalToYAxis(temp0);
      return 1;
      }
    }
  if (!strcmp("GetNormalToYAxis",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNormalToYAxis();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("NormalToYAxisOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->NormalToYAxisOn();
      return 1;
      }
    }
  if (!strcmp("NormalToYAxisOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->NormalToYAxisOff();
      return 1;
      }
    }
  if (!strcmp("SetNormalToZAxis",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetNormalToZAxis(temp0);
      return 1;
      }
    }
  if (!strcmp("GetNormalToZAxis",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNormalToZAxis();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("NormalToZAxisOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->NormalToZAxisOn();
      return 1;
      }
    }
  if (!strcmp("NormalToZAxisOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->NormalToZAxisOff();
      return 1;
      }
    }
  if (!strcmp("SetLockNormalToCamera",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetLockNormalToCamera(temp0);
      return 1;
      }
    }
  if (!strcmp("GetLockNormalToCamera",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetLockNormalToCamera();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("LockNormalToCameraOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->LockNormalToCameraOn();
      return 1;
      }
    }
  if (!strcmp("LockNormalToCameraOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->LockNormalToCameraOff();
      return 1;
      }
    }
  if (!strcmp("SetTubing",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTubing(temp0);
      return 1;
      }
    }
  if (!strcmp("GetTubing",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetTubing();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("TubingOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->TubingOn();
      return 1;
      }
    }
  if (!strcmp("TubingOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->TubingOff();
      return 1;
      }
    }
  if (!strcmp("SetDrawPlane",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetDrawPlane(temp0);
      return 1;
      }
    }
  if (!strcmp("GetDrawPlane",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetDrawPlane();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("DrawPlaneOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DrawPlaneOn();
      return 1;
      }
    }
  if (!strcmp("DrawPlaneOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DrawPlaneOff();
      return 1;
      }
    }
  if (!strcmp("SetOutlineTranslation",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetOutlineTranslation(temp0);
      return 1;
      }
    }
  if (!strcmp("GetOutlineTranslation",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetOutlineTranslation();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("OutlineTranslationOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OutlineTranslationOn();
      return 1;
      }
    }
  if (!strcmp("OutlineTranslationOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OutlineTranslationOff();
      return 1;
      }
    }
  if (!strcmp("SetOutsideBounds",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetOutsideBounds(temp0);
      return 1;
      }
    }
  if (!strcmp("GetOutsideBounds",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetOutsideBounds();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("OutsideBoundsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OutsideBoundsOn();
      return 1;
      }
    }
  if (!strcmp("OutsideBoundsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OutsideBoundsOff();
      return 1;
      }
    }
  if (!strcmp("SetWidgetBounds",method) && msg.GetNumberOfArguments(0) == 8)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    double   temp3;
    double   temp4;
    double   temp5;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      msg.GetArgument(0, 6, &temp4) &&
      msg.GetArgument(0, 7, &temp5))
      {
      op->SetWidgetBounds(temp0,temp1,temp2,temp3,temp4,temp5);
      return 1;
      }
    }
  if (!strcmp("SetWidgetBounds",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[6];
    if(msg.GetArgument(0, 2, temp0, 6))
      {
      op->SetWidgetBounds(temp0);
      return 1;
      }
    }
  if (!strcmp("GetWidgetBounds",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double  *temp20;
      {
      temp20 = (op)->GetWidgetBounds();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,6) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetConstrainToWidgetBounds",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetConstrainToWidgetBounds(temp0);
      return 1;
      }
    }
  if (!strcmp("GetConstrainToWidgetBounds",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetConstrainToWidgetBounds();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ConstrainToWidgetBoundsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ConstrainToWidgetBoundsOn();
      return 1;
      }
    }
  if (!strcmp("ConstrainToWidgetBoundsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ConstrainToWidgetBoundsOff();
      return 1;
      }
    }
  if (!strcmp("SetScaleEnabled",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetScaleEnabled(temp0);
      return 1;
      }
    }
  if (!strcmp("GetScaleEnabled",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetScaleEnabled();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ScaleEnabledOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ScaleEnabledOn();
      return 1;
      }
    }
  if (!strcmp("ScaleEnabledOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ScaleEnabledOff();
      return 1;
      }
    }
  if (!strcmp("GetPolyData",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkPolyData  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPolyData"))
      {
      op->GetPolyData(temp0);
      return 1;
      }
    }
  if (!strcmp("GetPolyDataAlgorithm",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkPolyDataAlgorithm  *temp20;
      {
      temp20 = (op)->GetPolyDataAlgorithm();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetPlane",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkPlane  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPlane"))
      {
      op->GetPlane(temp0);
      return 1;
      }
    }
  if (!strcmp("SetPlane",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkPlane  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPlane"))
      {
      op->SetPlane(temp0);
      return 1;
      }
    }
  if (!strcmp("UpdatePlacement",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UpdatePlacement();
      return 1;
      }
    }
  if (!strcmp("GetNormalProperty",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkProperty  *temp20;
      {
      temp20 = (op)->GetNormalProperty();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetSelectedNormalProperty",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkProperty  *temp20;
      {
      temp20 = (op)->GetSelectedNormalProperty();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetPlaneProperty",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkProperty  *temp20;
      {
      temp20 = (op)->GetPlaneProperty();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetSelectedPlaneProperty",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkProperty  *temp20;
      {
      temp20 = (op)->GetSelectedPlaneProperty();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetOutlineProperty",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkProperty  *temp20;
      {
      temp20 = (op)->GetOutlineProperty();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetSelectedOutlineProperty",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkProperty  *temp20;
      {
      temp20 = (op)->GetSelectedOutlineProperty();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetEdgesProperty",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkProperty  *temp20;
      {
      temp20 = (op)->GetEdgesProperty();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetEdgeColor",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkLookupTable  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkLookupTable"))
      {
      op->SetEdgeColor(temp0);
      return 1;
      }
    }
  if (!strcmp("SetEdgeColor",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetEdgeColor(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetEdgeColor",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->SetEdgeColor(temp0);
      return 1;
      }
    }
  if (!strcmp("SetBumpDistance",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetBumpDistance(temp0);
      return 1;
      }
    }
  if (!strcmp("GetBumpDistanceMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetBumpDistanceMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetBumpDistanceMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetBumpDistanceMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetBumpDistance",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetBumpDistance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("BumpPlane",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    double   temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->BumpPlane(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("PushPlane",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->PushPlane(temp0);
      return 1;
      }
    }
  if (!strcmp("ComputeInteractionState",method) && msg.GetNumberOfArguments(0) == 5)
    {
    int      temp0;
    int      temp1;
    int      temp2;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      temp20 = (op)->ComputeInteractionState(temp0,temp1,temp2);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("PlaceWidget",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[6];
    if(msg.GetArgument(0, 2, temp0, 6))
      {
      op->PlaceWidget(temp0);
      return 1;
      }
    }
  if (!strcmp("BuildRepresentation",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->BuildRepresentation();
      return 1;
      }
    }
  if (!strcmp("StartWidgetInteraction",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[2];
    if(msg.GetArgument(0, 2, temp0, 2))
      {
      op->StartWidgetInteraction(temp0);
      return 1;
      }
    }
  if (!strcmp("WidgetInteraction",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[2];
    if(msg.GetArgument(0, 2, temp0, 2))
      {
      op->WidgetInteraction(temp0);
      return 1;
      }
    }
  if (!strcmp("EndWidgetInteraction",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[2];
    if(msg.GetArgument(0, 2, temp0, 2))
      {
      op->EndWidgetInteraction(temp0);
      return 1;
      }
    }
  if (!strcmp("GetBounds",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double  *temp20;
      {
      temp20 = (op)->GetBounds();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,6) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetActors",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkPropCollection  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPropCollection"))
      {
      op->GetActors(temp0);
      return 1;
      }
    }
  if (!strcmp("ReleaseGraphicsResources",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkWindow  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkWindow"))
      {
      op->ReleaseGraphicsResources(temp0);
      return 1;
      }
    }
  if (!strcmp("RenderOpaqueGeometry",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkViewport  *temp0;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkViewport"))
      {
      temp20 = (op)->RenderOpaqueGeometry(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("RenderTranslucentPolygonalGeometry",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkViewport  *temp0;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkViewport"))
      {
      temp20 = (op)->RenderTranslucentPolygonalGeometry(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("HasTranslucentPolygonalGeometry",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->HasTranslucentPolygonalGeometry();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetInteractionState",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetInteractionState(temp0);
      return 1;
      }
    }
  if (!strcmp("GetInteractionStateMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetInteractionStateMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetInteractionStateMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetInteractionStateMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetRepresentationState",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetRepresentationState(temp0);
      return 1;
      }
    }
  if (!strcmp("GetRepresentationState",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetRepresentationState();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }

  {
    const char* commandName = "vtkWidgetRepresentation";
    if (arlu->HasCommandFunction(commandName) &&
        arlu->CallCommandFunction(commandName, op, method, msg, resultStream)) { return 1; }
  }
  if(resultStream.GetNumberOfMessages() > 0 &&
     resultStream.GetCommand(0) == vtkClientServerStream::Error &&
     resultStream.GetNumberOfArguments(0) > 1)
    {
    /* A superclass wrapper prepared a special message. */
    return 0;
    }
  vtkOStrStreamWrapper vtkmsg;
  vtkmsg << "Object type: vtkImplicitPlaneRepresentation, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkImplicitPlaneRepresentation_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkImplicitPlaneRepresentation", vtkImplicitPlaneRepresentationClientServerNewCommand);
    csi->AddCommandFunction("vtkImplicitPlaneRepresentation", vtkImplicitPlaneRepresentationCommand);
    }
}