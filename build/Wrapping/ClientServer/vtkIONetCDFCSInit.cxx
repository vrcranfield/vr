/* #undef PARAVIEW_USE_UNIFIED_BINDINGS */
#define NO_PYTHON_BINDINGS_AVAILABLE
#ifdef NO_PYTHON_BINDINGS_AVAILABLE
#undef PARAVIEW_USE_UNIFIED_BINDINGS
#endif
#ifdef PARAVIEW_USE_UNIFIED_BINDINGS
#include "vtkPython.h"
#include "vtkPythonInterpreter.h"
#endif

#include "vtkClientServerInterpreter.h"

#ifndef PARAVIEW_BUILD_SHARED_LIBS
#define PARAVIEW_BUILD_SHARED_LIBS
#endif
#if defined(PARAVIEW_BUILD_SHARED_LIBS) && defined(_WIN32)
# define VTK_WRAP_CS_EXPORT __declspec(dllexport)
#else
# define VTK_WRAP_CS_EXPORT
#endif

#ifdef PARAVIEW_USE_UNIFIED_BINDINGS
extern "C" void real_initvtkIONetCDFPython(const char *modulename);

void initvtkIONetCDFPython()
{
  static const char modulename[] = "vtkIONetCDFPython";
  real_initvtkIONetCDFPython(modulename);
}
#endif

extern void vtkMPASReader_Init(vtkClientServerInterpreter* csi);
extern void vtkNetCDFCAMReader_Init(vtkClientServerInterpreter* csi);
extern void vtkNetCDFCFReader_Init(vtkClientServerInterpreter* csi);
extern void vtkNetCDFPOPReader_Init(vtkClientServerInterpreter* csi);
extern void vtkNetCDFReader_Init(vtkClientServerInterpreter* csi);
extern void vtkSLACParticleReader_Init(vtkClientServerInterpreter* csi);
extern void vtkSLACReader_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkIONetCDFCS_Initialize(
  vtkClientServerInterpreter *csi)
{
#ifdef PARAVIEW_USE_UNIFIED_BINDINGS
  if (!vtkPythonInterpreter::IsInitialized())
    {
    vtkPythonInterpreter::Initialize();
    }

  static bool initialized = false;

  if (!initialized)
    {
    initialized = true;
    PyImport_AppendInittab("vtkIONetCDFPython", initvtkIONetCDFPython);
    }

  csi->Load("vtkIONetCDF");
#endif

  vtkMPASReader_Init(csi);
  vtkNetCDFCAMReader_Init(csi);
  vtkNetCDFCFReader_Init(csi);
  vtkNetCDFPOPReader_Init(csi);
  vtkNetCDFReader_Init(csi);
  vtkSLACParticleReader_Init(csi);
  vtkSLACReader_Init(csi);

}