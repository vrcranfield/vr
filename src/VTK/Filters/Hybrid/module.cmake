vtk_module(vtkFiltersHybrid
  GROUPS
    StandAlone
  TEST_DEPENDS
    vtkIOXML
    vtkRendering${VTK_RENDERING_BACKEND}
    vtkImagingCore
    vtkImagingStencil
    vtkTestingRendering
    vtkInteractionStyle
    vtkIOLegacy
  DEPENDS
    vtkCommonCore
    vtkCommonDataModel
    vtkCommonExecutionModel
    vtkCommonTransforms
  PRIVATE_DEPENDS
    vtkCommonMath
    vtkCommonMisc
    vtkFiltersCore
    vtkFiltersGeneral
    vtkImagingCore
    vtkImagingSources
    vtkRenderingCore
  )