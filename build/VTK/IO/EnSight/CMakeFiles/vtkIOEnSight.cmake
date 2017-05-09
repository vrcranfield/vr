set(vtkIOEnSight_LOADED 1)
set(vtkIOEnSight_DEPENDS "vtkCommonCore;vtkCommonDataModel;vtkCommonExecutionModel")
set(vtkIOEnSight_LIBRARIES "vtkIOEnSight")
set(vtkIOEnSight_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/paraview-5.3")
set(vtkIOEnSight_LIBRARY_DIRS "")
set(vtkIOEnSight_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}/bin")
set(vtkIOEnSight_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtkIOEnSightHierarchy.txt")
set(vtkIOEnSight_KIT "vtkIO")


