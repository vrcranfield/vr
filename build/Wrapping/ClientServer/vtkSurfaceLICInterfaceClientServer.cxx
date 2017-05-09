// ClientServer wrapper for vtkSurfaceLICInterface object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkSurfaceLICInterface.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkSurfaceLICInterfaceClientServerNewCommand(void* /*ctx*/)
{
  return vtkSurfaceLICInterface::New();
}


int VTK_EXPORT vtkSurfaceLICInterfaceCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkSurfaceLICInterface *op = vtkSurfaceLICInterface::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkSurfaceLICInterface.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkSurfaceLICInterface  *temp20;
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
    vtkSurfaceLICInterface  *temp20;
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
    vtkSurfaceLICInterface  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetNumberOfSteps",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetNumberOfSteps(temp0);
      return 1;
      }
    }
  if (!strcmp("GetNumberOfSteps",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNumberOfSteps();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetStepSize",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetStepSize(temp0);
      return 1;
      }
    }
  if (!strcmp("GetStepSize",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetStepSize();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetNormalizeVectors",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetNormalizeVectors(temp0);
      return 1;
      }
    }
  if (!strcmp("NormalizeVectorsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->NormalizeVectorsOn();
      return 1;
      }
    }
  if (!strcmp("NormalizeVectorsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->NormalizeVectorsOff();
      return 1;
      }
    }
  if (!strcmp("GetNormalizeVectors",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNormalizeVectors();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetMaskOnSurface",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetMaskOnSurface(temp0);
      return 1;
      }
    }
  if (!strcmp("MaskOnSurfaceOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->MaskOnSurfaceOn();
      return 1;
      }
    }
  if (!strcmp("MaskOnSurfaceOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->MaskOnSurfaceOff();
      return 1;
      }
    }
  if (!strcmp("GetMaskOnSurface",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetMaskOnSurface();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetMaskThreshold",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetMaskThreshold(temp0);
      return 1;
      }
    }
  if (!strcmp("GetMaskThreshold",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetMaskThreshold();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetMaskColor",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkClientServerStreamDataArg<double > temp0(msg, 0, 2);
    if(temp0)
      {
      op->SetMaskColor(temp0);
      return 1;
      }
    }
  if (!strcmp("SetMaskColor",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetMaskColor(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("GetMaskColor",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double  *temp20;
      {
      temp20 = (op)->GetMaskColor();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,3) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetMaskIntensity",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetMaskIntensity(temp0);
      return 1;
      }
    }
  if (!strcmp("GetMaskIntensity",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetMaskIntensity();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetEnhancedLIC",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetEnhancedLIC(temp0);
      return 1;
      }
    }
  if (!strcmp("GetEnhancedLIC",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetEnhancedLIC();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("EnhancedLICOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->EnhancedLICOn();
      return 1;
      }
    }
  if (!strcmp("EnhancedLICOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->EnhancedLICOff();
      return 1;
      }
    }
  if (!strcmp("SetEnhanceContrast",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetEnhanceContrast(temp0);
      return 1;
      }
    }
  if (!strcmp("GetEnhanceContrast",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetEnhanceContrast();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetLowLICContrastEnhancementFactor",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetLowLICContrastEnhancementFactor();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetHighLICContrastEnhancementFactor",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetHighLICContrastEnhancementFactor();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetLowLICContrastEnhancementFactor",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetLowLICContrastEnhancementFactor(temp0);
      return 1;
      }
    }
  if (!strcmp("SetHighLICContrastEnhancementFactor",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetHighLICContrastEnhancementFactor(temp0);
      return 1;
      }
    }
  if (!strcmp("GetLowColorContrastEnhancementFactor",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetLowColorContrastEnhancementFactor();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetHighColorContrastEnhancementFactor",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetHighColorContrastEnhancementFactor();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetLowColorContrastEnhancementFactor",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetLowColorContrastEnhancementFactor(temp0);
      return 1;
      }
    }
  if (!strcmp("SetHighColorContrastEnhancementFactor",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetHighColorContrastEnhancementFactor(temp0);
      return 1;
      }
    }
  if (!strcmp("SetAntiAlias",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetAntiAlias(temp0);
      return 1;
      }
    }
  if (!strcmp("AntiAliasOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->AntiAliasOn();
      return 1;
      }
    }
  if (!strcmp("AntiAliasOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->AntiAliasOff();
      return 1;
      }
    }
  if (!strcmp("GetAntiAlias",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetAntiAlias();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetColorMode",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetColorMode(temp0);
      return 1;
      }
    }
  if (!strcmp("GetColorMode",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetColorMode();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetLICIntensity",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetLICIntensity(temp0);
      return 1;
      }
    }
  if (!strcmp("GetLICIntensity",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetLICIntensity();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetMapModeBias",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetMapModeBias(temp0);
      return 1;
      }
    }
  if (!strcmp("GetMapModeBias",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetMapModeBias();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetNoiseDataSet",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkImageData  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkImageData"))
      {
      op->SetNoiseDataSet(temp0);
      return 1;
      }
    }
  if (!strcmp("GetNoiseDataSet",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkImageData  *temp20;
      {
      temp20 = (op)->GetNoiseDataSet();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetGenerateNoiseTexture",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetGenerateNoiseTexture(temp0);
      return 1;
      }
    }
  if (!strcmp("GetGenerateNoiseTexture",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetGenerateNoiseTexture();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetNoiseType",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetNoiseType(temp0);
      return 1;
      }
    }
  if (!strcmp("GetNoiseType",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNoiseType();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetNoiseTextureSize",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetNoiseTextureSize(temp0);
      return 1;
      }
    }
  if (!strcmp("GetNoiseTextureSize",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNoiseTextureSize();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetNoiseGrainSize",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetNoiseGrainSize(temp0);
      return 1;
      }
    }
  if (!strcmp("GetNoiseGrainSize",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNoiseGrainSize();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetMinNoiseValue",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetMinNoiseValue(temp0);
      return 1;
      }
    }
  if (!strcmp("SetMaxNoiseValue",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetMaxNoiseValue(temp0);
      return 1;
      }
    }
  if (!strcmp("GetMinNoiseValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetMinNoiseValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetMaxNoiseValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetMaxNoiseValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetNumberOfNoiseLevels",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetNumberOfNoiseLevels(temp0);
      return 1;
      }
    }
  if (!strcmp("GetNumberOfNoiseLevels",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNumberOfNoiseLevels();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetImpulseNoiseProbability",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetImpulseNoiseProbability(temp0);
      return 1;
      }
    }
  if (!strcmp("GetImpulseNoiseProbability",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetImpulseNoiseProbability();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetImpulseNoiseBackgroundValue",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetImpulseNoiseBackgroundValue(temp0);
      return 1;
      }
    }
  if (!strcmp("GetImpulseNoiseBackgroundValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetImpulseNoiseBackgroundValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetNoiseGeneratorSeed",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetNoiseGeneratorSeed(temp0);
      return 1;
      }
    }
  if (!strcmp("GetNoiseGeneratorSeed",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNoiseGeneratorSeed();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetCompositeStrategy",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetCompositeStrategy(temp0);
      return 1;
      }
    }
  if (!strcmp("GetCompositeStrategy",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetCompositeStrategy();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("IsSupported",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkRenderWindow  *temp0;
    bool   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkRenderWindow"))
      {
      temp20 = (op)->IsSupported(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("WriteTimerLog",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->WriteTimerLog(temp0);
      return 1;
      }
    }
  if (!strcmp("ShallowCopy",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkSurfaceLICInterface  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkSurfaceLICInterface"))
      {
      op->ShallowCopy(temp0);
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
  if (!strcmp("CanRenderSurfaceLIC",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkActor  *temp0;
    bool   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkActor"))
      {
      temp20 = (op)->CanRenderSurfaceLIC(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ValidateContext",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkRenderer  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkRenderer"))
      {
      op->ValidateContext(temp0);
      return 1;
      }
    }
  if (!strcmp("CreateCommunicator",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    vtkPainterCommunicator  *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->CreateCommunicator(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("CreateCommunicator",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkRenderer  *temp0;
    vtkActor  *temp1;
    vtkDataObject  *temp2;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkRenderer") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkActor") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkDataObject"))
      {
      op->CreateCommunicator(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("GetCommunicator",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkPainterCommunicator  *temp20;
      {
      temp20 = (op)->GetCommunicator();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("UpdateCommunicator",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkRenderer  *temp0;
    vtkActor  *temp1;
    vtkDataObject  *temp2;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkRenderer") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkActor") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkDataObject"))
      {
      op->UpdateCommunicator(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetHasVectors",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetHasVectors(temp0);
      return 1;
      }
    }
  if (!strcmp("GetHasVectors",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetHasVectors();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("InitializeResources",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->InitializeResources();
      return 1;
      }
    }
  if (!strcmp("PrepareForGeometry",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PrepareForGeometry();
      return 1;
      }
    }
  if (!strcmp("CompletedGeometry",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->CompletedGeometry();
      return 1;
      }
    }
  if (!strcmp("GatherVectors",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GatherVectors();
      return 1;
      }
    }
  if (!strcmp("ApplyLIC",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ApplyLIC();
      return 1;
      }
    }
  if (!strcmp("CombineColorsAndLIC",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->CombineColorsAndLIC();
      return 1;
      }
    }
  if (!strcmp("CopyToScreen",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->CopyToScreen();
      return 1;
      }
    }
  if (!strcmp("SetEnable",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetEnable(temp0);
      return 1;
      }
    }
  if (!strcmp("GetEnable",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetEnable();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("EnableOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->EnableOn();
      return 1;
      }
    }
  if (!strcmp("EnableOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->EnableOff();
      return 1;
      }
    }

  {
    const char* commandName = "vtkObject";
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
  vtkmsg << "Object type: vtkSurfaceLICInterface, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkSurfaceLICInterface_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkSurfaceLICInterface", vtkSurfaceLICInterfaceClientServerNewCommand);
    csi->AddCommandFunction("vtkSurfaceLICInterface", vtkSurfaceLICInterfaceCommand);
    }
}
