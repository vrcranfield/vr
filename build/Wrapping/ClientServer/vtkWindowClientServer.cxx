// ClientServer wrapper for vtkWindow object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkWindow.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


int VTK_EXPORT vtkWindowCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkWindow *op = vtkWindow::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkWindow.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
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
    vtkWindow  *temp20;
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
    vtkWindow  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetWindowInfo",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetWindowInfo(temp0);
      return 1;
      }
    }
  if (!strcmp("SetParentInfo",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetParentInfo(temp0);
      return 1;
      }
    }
  if (!strcmp("GetPosition",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int     *temp20;
      {
      temp20 = (op)->GetPosition();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,2) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetPosition",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetPosition(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetPosition",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int    temp0[2];
    if(msg.GetArgument(0, 2, temp0, 2))
      {
      op->SetPosition(temp0);
      return 1;
      }
    }
  if (!strcmp("GetSize",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int     *temp20;
      {
      temp20 = (op)->GetSize();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,2) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetSize",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetSize(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetSize",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int    temp0[2];
    if(msg.GetArgument(0, 2, temp0, 2))
      {
      op->SetSize(temp0);
      return 1;
      }
    }
  if (!strcmp("GetScreenSize",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int     *temp20;
      {
      temp20 = (op)->GetScreenSize();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,2) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetMapped",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetMapped(temp0);
      return 1;
      }
    }
  if (!strcmp("GetMapped",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetMapped();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("MappedOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->MappedOn();
      return 1;
      }
    }
  if (!strcmp("MappedOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->MappedOff();
      return 1;
      }
    }
  if (!strcmp("SetErase",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetErase(temp0);
      return 1;
      }
    }
  if (!strcmp("GetErase",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetErase();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("EraseOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->EraseOn();
      return 1;
      }
    }
  if (!strcmp("EraseOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->EraseOff();
      return 1;
      }
    }
  if (!strcmp("SetDoubleBuffer",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetDoubleBuffer(temp0);
      return 1;
      }
    }
  if (!strcmp("GetDoubleBuffer",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetDoubleBuffer();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("DoubleBufferOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DoubleBufferOn();
      return 1;
      }
    }
  if (!strcmp("DoubleBufferOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DoubleBufferOff();
      return 1;
      }
    }
  if (!strcmp("GetWindowName",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char    *temp20;
      {
      temp20 = (op)->GetWindowName();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetWindowName",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetWindowName(temp0);
      return 1;
      }
    }
  if (!strcmp("Render",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->Render();
      return 1;
      }
    }
  if (!strcmp("GetPixelData",method) && msg.GetNumberOfArguments(0) == 8)
    {
    int      temp0;
    int      temp1;
    int      temp2;
    int      temp3;
    int      temp4;
    vtkUnsignedCharArray  *temp5;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      msg.GetArgument(0, 6, &temp4) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 7, &temp5, "vtkUnsignedCharArray"))
      {
      temp20 = (op)->GetPixelData(temp0,temp1,temp2,temp3,temp4,temp5);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetDPI",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetDPI();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetDPI",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetDPI(temp0);
      return 1;
      }
    }
  if (!strcmp("GetDPIMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetDPIMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetDPIMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetDPIMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("DetectDPI",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->DetectDPI();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetOffScreenRendering",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetOffScreenRendering(temp0);
      return 1;
      }
    }
  if (!strcmp("GetOffScreenRendering",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetOffScreenRendering();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("OffScreenRenderingOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OffScreenRenderingOn();
      return 1;
      }
    }
  if (!strcmp("OffScreenRenderingOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OffScreenRenderingOff();
      return 1;
      }
    }
  if (!strcmp("MakeCurrent",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->MakeCurrent();
      return 1;
      }
    }
  if (!strcmp("SetTileScale",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetTileScale(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetTileScale",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int    temp0[2];
    if(msg.GetArgument(0, 2, temp0, 2))
      {
      op->SetTileScale(temp0);
      return 1;
      }
    }
  if (!strcmp("GetTileScale",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int     *temp20;
      {
      temp20 = (op)->GetTileScale();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,2) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetTileScale",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTileScale(temp0);
      return 1;
      }
    }
  if (!strcmp("SetTileViewport",method) && msg.GetNumberOfArguments(0) == 6)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    double   temp3;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      op->SetTileViewport(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("SetTileViewport",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[4];
    if(msg.GetArgument(0, 2, temp0, 4))
      {
      op->SetTileViewport(temp0);
      return 1;
      }
    }
  if (!strcmp("GetTileViewport",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double  *temp20;
      {
      temp20 = (op)->GetTileViewport();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,4) << vtkClientServerStream::End;
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
  vtkmsg << "Object type: vtkWindow, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkWindow_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddCommandFunction("vtkWindow", vtkWindowCommand);
    }
}