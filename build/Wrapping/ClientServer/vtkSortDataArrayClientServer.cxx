// ClientServer wrapper for vtkSortDataArray object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkSortDataArray.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkSortDataArrayClientServerNewCommand(void* /*ctx*/)
{
  return vtkSortDataArray::New();
}


int VTK_EXPORT vtkSortDataArrayCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkSortDataArray *op = vtkSortDataArray::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkSortDataArray.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkSortDataArray  *temp20;
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
    vtkSortDataArray  *temp20;
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
    vtkSortDataArray  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Sort",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkIdList  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkIdList"))
      {
      op->Sort(temp0);
      return 1;
      }
    }
  if (!strcmp("Sort",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkAbstractArray  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkAbstractArray"))
      {
      op->Sort(temp0);
      return 1;
      }
    }
  if (!strcmp("Sort",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkIdList  *temp0;
    int      temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkIdList") &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->Sort(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("Sort",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkAbstractArray  *temp0;
    int      temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkAbstractArray") &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->Sort(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("Sort",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkAbstractArray  *temp0;
    vtkAbstractArray  *temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkAbstractArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkAbstractArray"))
      {
      op->Sort(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("Sort",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkAbstractArray  *temp0;
    vtkIdList  *temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkAbstractArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkIdList"))
      {
      op->Sort(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("Sort",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkAbstractArray  *temp0;
    vtkAbstractArray  *temp1;
    int      temp2;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkAbstractArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkAbstractArray") &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->Sort(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("Sort",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkAbstractArray  *temp0;
    vtkIdList  *temp1;
    int      temp2;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkAbstractArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkIdList") &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->Sort(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SortArrayByComponent",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkAbstractArray  *temp0;
    int      temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkAbstractArray") &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SortArrayByComponent(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SortArrayByComponent",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkAbstractArray  *temp0;
    int      temp1;
    int      temp2;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkAbstractArray") &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SortArrayByComponent(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("ShuffleIdList",method) && msg.GetNumberOfArguments(0) == 7)
    {
    vtkClientServerStreamDataArg<vtkIdType > temp0(msg, 0, 2);
    vtkIdType   temp1;
    vtkIdList  *temp2;
    vtkClientServerStreamDataArg<vtkIdType > temp3(msg, 0, 5);
    int      temp4;
    if(temp0 &&
      msg.GetArgument(0, 3, &temp1) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkIdList") &&
      temp3 &&
      msg.GetArgument(0, 6, &temp4))
      {
      op->ShuffleIdList(temp0,temp1,temp2,temp3,temp4);
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
  vtkmsg << "Object type: vtkSortDataArray, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkSortDataArray_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkSortDataArray", vtkSortDataArrayClientServerNewCommand);
    csi->AddCommandFunction("vtkSortDataArray", vtkSortDataArrayCommand);
    }
}