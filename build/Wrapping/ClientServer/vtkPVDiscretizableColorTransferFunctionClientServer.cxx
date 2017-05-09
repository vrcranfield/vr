// ClientServer wrapper for vtkPVDiscretizableColorTransferFunction object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPVDiscretizableColorTransferFunction.h"
#include "vtkSystemIncludes.h"
#include "vtkStdString.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkPVDiscretizableColorTransferFunctionClientServerNewCommand(void* /*ctx*/)
{
  return vtkPVDiscretizableColorTransferFunction::New();
}


int VTK_EXPORT vtkPVDiscretizableColorTransferFunctionCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkPVDiscretizableColorTransferFunction *op = vtkPVDiscretizableColorTransferFunction::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkPVDiscretizableColorTransferFunction.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkPVDiscretizableColorTransferFunction  *temp20;
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
    vtkPVDiscretizableColorTransferFunction  *temp20;
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
    vtkPVDiscretizableColorTransferFunction  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetAnnotationsInFullSet",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkAbstractArray  *temp0;
    vtkStringArray  *temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkAbstractArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkStringArray"))
      {
      op->SetAnnotationsInFullSet(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("GetAnnotatedValuesInFullSet",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkAbstractArray  *temp20;
      {
      temp20 = (op)->GetAnnotatedValuesInFullSet();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetAnnotationsInFullSet",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkStringArray  *temp20;
      {
      temp20 = (op)->GetAnnotationsInFullSet();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetAnnotationInFullSet",method) && msg.GetNumberOfArguments(0) == 4)
    {
    char    *  temp0;
    char    *  temp1;
    vtkIdType   temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      temp20 = (op)->SetAnnotationInFullSet(vtkStdString(temp0),vtkStdString(temp1));
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ResetAnnotationsInFullSet",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ResetAnnotationsInFullSet();
      return 1;
      }
    }
  if (!strcmp("ResetActiveAnnotatedValues",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ResetActiveAnnotatedValues();
      return 1;
      }
    }
  if (!strcmp("SetActiveAnnotatedValue",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *  temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetActiveAnnotatedValue(vtkStdString(temp0));
      return 1;
      }
    }
  if (!strcmp("SetNumberOfIndexedColorsInFullSet",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetNumberOfIndexedColorsInFullSet(temp0);
      return 1;
      }
    }
  if (!strcmp("GetNumberOfIndexedColorsInFullSet",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNumberOfIndexedColorsInFullSet();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetIndexedColorInFullSet",method) && msg.GetNumberOfArguments(0) == 6)
    {
    unsigned int      temp0;
    double   temp1;
    double   temp2;
    double   temp3;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      op->SetIndexedColorInFullSet(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("SetUseActiveValues",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetUseActiveValues(temp0);
      return 1;
      }
    }
  if (!strcmp("GetUseActiveValues",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetUseActiveValues();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("UseActiveValuesOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseActiveValuesOn();
      return 1;
      }
    }
  if (!strcmp("UseActiveValuesOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseActiveValuesOff();
      return 1;
      }
    }
  if (!strcmp("Build",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->Build();
      return 1;
      }
    }

  {
    const char* commandName = "vtkDiscretizableColorTransferFunction";
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
  vtkmsg << "Object type: vtkPVDiscretizableColorTransferFunction, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkPVDiscretizableColorTransferFunction_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkPVDiscretizableColorTransferFunction", vtkPVDiscretizableColorTransferFunctionClientServerNewCommand);
    csi->AddCommandFunction("vtkPVDiscretizableColorTransferFunction", vtkPVDiscretizableColorTransferFunctionCommand);
    }
}