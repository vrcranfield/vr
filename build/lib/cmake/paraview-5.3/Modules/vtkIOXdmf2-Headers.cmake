set(vtkIOXdmf2_HEADERS_LOADED 1)
set(vtkIOXdmf2_HEADERS "vtkSILBuilder;vtkXdmfDataArray;vtkXdmfHeavyData;vtkXdmfReader;vtkXdmfReaderInternal;vtkXdmfWriter")

foreach(header ${vtkIOXdmf2_HEADERS})
  set(vtkIOXdmf2_HEADER_${header}_EXISTS 1)
endforeach()


set(vtkIOXdmf2_HEADER_vtkXdmfDataArray_WRAP_EXCLUDE 1)
set(vtkIOXdmf2_HEADER_vtkXdmfHeavyData_WRAP_EXCLUDE 1)
set(vtkIOXdmf2_HEADER_vtkXdmfReaderInternal_WRAP_EXCLUDE 1)

set(vtkIOXdmf2_HEADER_vtkXdmfHeavyData_WRAP_EXCLUDE_PYTHON 1)
set(vtkIOXdmf2_HEADER_vtkXdmfReaderInternal_WRAP_EXCLUDE_PYTHON 1)

