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
extern "C" void real_initThickenLayeredCellsPython(const char *modulename);

void initThickenLayeredCellsPython()
{
  static const char modulename[] = "ThickenLayeredCellsPython";
  real_initThickenLayeredCellsPython(modulename);
}
#endif

extern void vtkThickenLayeredCells_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT ThickenLayeredCells_Initialize(
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
    PyImport_AppendInittab("ThickenLayeredCellsPython", initThickenLayeredCellsPython);
    }

  csi->Load("ThickenLayeredCells");
#endif

  vtkThickenLayeredCells_Init(csi);

}
