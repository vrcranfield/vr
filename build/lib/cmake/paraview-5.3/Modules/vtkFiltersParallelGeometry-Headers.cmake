set(vtkFiltersParallelGeometry_HEADERS_LOADED 1)
set(vtkFiltersParallelGeometry_HEADERS "vtkPDataSetGhostGenerator;vtkPStructuredGridConnectivity;vtkPStructuredGridGhostDataGenerator;vtkPUniformGridGhostDataGenerator;vtkPUnstructuredGridGhostCellsGenerator;vtkPUnstructuredGridConnectivity;vtkPUnstructuredGridGhostDataGenerator")

foreach(header ${vtkFiltersParallelGeometry_HEADERS})
  set(vtkFiltersParallelGeometry_HEADER_${header}_EXISTS 1)
endforeach()

set(vtkFiltersParallelGeometry_HEADER_vtkPDataSetGhostGenerator_ABSTRACT 1)


