set(vtkPVServerImplementationRendering_HEADERS_LOADED 1)
set(vtkPVServerImplementationRendering_HEADERS "vtkSIImageTextureProxy;vtkSIPVRepresentationProxy;vtkSIUnstructuredGridVolumeRepresentationProxy")

foreach(header ${vtkPVServerImplementationRendering_HEADERS})
  set(vtkPVServerImplementationRendering_HEADER_${header}_EXISTS 1)
endforeach()




