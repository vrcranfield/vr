// ClientServer wrapper for vtkHyperOctreeSurfaceFilter object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkHyperOctreeSurfaceFilter.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkHyperOctreeSurfaceFilterClientServerNewCommand(void* /*ctx*/)
{
  return vtkHyperOctreeSurfaceFilter::New();
}


int VTK_EXPORT vtkHyperOctreeSurfaceFilterCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkHyperOctreeSurfaceFilter *op = vtkHyperOctreeSurfaceFilter::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkHyperOctreeSurfaceFilter.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkHyperOctreeSurfaceFilter  *temp20;
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
    vtkHyperOctreeSurfaceFilter  *temp20;
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
    vtkHyperOctreeSurfaceFilter  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetMerging",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetMerging(temp0);
      return 1;
      }
    }
  if (!strcmp("GetMerging",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetMerging();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("MergingOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->MergingOn();
      return 1;
      }
    }
  if (!strcmp("MergingOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->MergingOff();
      return 1;
      }
    }
  if (!strcmp("SetLocator",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkIncrementalPointLocator  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkIncrementalPointLocator"))
      {
      op->SetLocator(temp0);
      return 1;
      }
    }
  if (!strcmp("GetLocator",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkIncrementalPointLocator  *temp20;
      {
      temp20 = (op)->GetLocator();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetPassThroughCellIds",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetPassThroughCellIds(temp0);
      return 1;
      }
    }
  if (!strcmp("GetPassThroughCellIds",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetPassThroughCellIds();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("PassThroughCellIdsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PassThroughCellIdsOn();
      return 1;
      }
    }
  if (!strcmp("PassThroughCellIdsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PassThroughCellIdsOff();
      return 1;
      }
    }

  {
    const char* commandName = "vtkPolyDataAlgorithm";
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
  vtkmsg << "Object type: vtkHyperOctreeSurfaceFilter, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkHyperOctreeSurfaceFilter_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkHyperOctreeSurfaceFilter", vtkHyperOctreeSurfaceFilterClientServerNewCommand);
    csi->AddCommandFunction("vtkHyperOctreeSurfaceFilter", vtkHyperOctreeSurfaceFilterCommand);
    }
}
