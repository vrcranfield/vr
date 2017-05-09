// ClientServer wrapper for vtkBoxWidget2 object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkBoxWidget2.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkBoxWidget2ClientServerNewCommand(void* /*ctx*/)
{
  return vtkBoxWidget2::New();
}


int VTK_EXPORT vtkBoxWidget2Command(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkBoxWidget2 *op = vtkBoxWidget2::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkBoxWidget2.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkBoxWidget2  *temp20;
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
    vtkBoxWidget2  *temp20;
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
    vtkBoxWidget2  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetRepresentation",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkBoxRepresentation  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkBoxRepresentation"))
      {
      op->SetRepresentation(temp0);
      return 1;
      }
    }
  if (!strcmp("SetTranslationEnabled",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTranslationEnabled(temp0);
      return 1;
      }
    }
  if (!strcmp("GetTranslationEnabled",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetTranslationEnabled();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("TranslationEnabledOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->TranslationEnabledOn();
      return 1;
      }
    }
  if (!strcmp("TranslationEnabledOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->TranslationEnabledOff();
      return 1;
      }
    }
  if (!strcmp("SetScalingEnabled",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetScalingEnabled(temp0);
      return 1;
      }
    }
  if (!strcmp("GetScalingEnabled",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetScalingEnabled();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ScalingEnabledOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ScalingEnabledOn();
      return 1;
      }
    }
  if (!strcmp("ScalingEnabledOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ScalingEnabledOff();
      return 1;
      }
    }
  if (!strcmp("SetRotationEnabled",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetRotationEnabled(temp0);
      return 1;
      }
    }
  if (!strcmp("GetRotationEnabled",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetRotationEnabled();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("RotationEnabledOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RotationEnabledOn();
      return 1;
      }
    }
  if (!strcmp("RotationEnabledOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RotationEnabledOff();
      return 1;
      }
    }
  if (!strcmp("SetMoveFacesEnabled",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetMoveFacesEnabled(temp0);
      return 1;
      }
    }
  if (!strcmp("GetMoveFacesEnabled",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetMoveFacesEnabled();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("MoveFacesEnabledOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->MoveFacesEnabledOn();
      return 1;
      }
    }
  if (!strcmp("MoveFacesEnabledOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->MoveFacesEnabledOff();
      return 1;
      }
    }
  if (!strcmp("CreateDefaultRepresentation",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->CreateDefaultRepresentation();
      return 1;
      }
    }

  {
    const char* commandName = "vtkAbstractWidget";
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
  vtkmsg << "Object type: vtkBoxWidget2, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkBoxWidget2_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkBoxWidget2", vtkBoxWidget2ClientServerNewCommand);
    csi->AddCommandFunction("vtkBoxWidget2", vtkBoxWidget2Command);
    }
}