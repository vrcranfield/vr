set(vtkPVServerImplementationCore_LOADED 1)
set(vtkPVServerImplementationCore_DEPENDS "vtkPVClientServerCoreCore;vtkprotobuf;vtksys")
set(vtkPVServerImplementationCore_LIBRARIES "vtkPVServerImplementationCore")
set(vtkPVServerImplementationCore_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/paraview-5.3")
set(vtkPVServerImplementationCore_LIBRARY_DIRS "")
set(vtkPVServerImplementationCore_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}/bin")
set(vtkPVServerImplementationCore_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtkPVServerImplementationCoreHierarchy.txt")
set(vtkPVServerImplementationCore_KIT "")

