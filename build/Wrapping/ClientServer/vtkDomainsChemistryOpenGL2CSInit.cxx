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
extern "C" void real_initvtkDomainsChemistryOpenGL2Python(const char *modulename);

void initvtkDomainsChemistryOpenGL2Python()
{
  static const char modulename[] = "vtkDomainsChemistryOpenGL2Python";
  real_initvtkDomainsChemistryOpenGL2Python(modulename);
}
#endif

extern void vtkOpenGLMoleculeMapper_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkDomainsChemistryOpenGL2CS_Initialize(
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
    PyImport_AppendInittab("vtkDomainsChemistryOpenGL2Python", initvtkDomainsChemistryOpenGL2Python);
    }

  csi->Load("vtkDomainsChemistryOpenGL2");
#endif

  vtkOpenGLMoleculeMapper_Init(csi);

}