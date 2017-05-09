set(vtkFiltersFlowPaths_HEADERS_LOADED 1)
set(vtkFiltersFlowPaths_HEADERS "vtkAbstractInterpolatedVelocityField;vtkAMRInterpolatedVelocityField;vtkCachingInterpolatedVelocityField;vtkCellLocatorInterpolatedVelocityField;vtkCompositeInterpolatedVelocityField;vtkInterpolatedVelocityField;vtkLagrangianParticleTracker;vtkLagrangianBasicIntegrationModel;vtkLagrangianParticle;vtkLagrangianMatidaIntegrationModel;vtkModifiedBSPTree;vtkParticlePathFilter;vtkParticleTracer;vtkParticleTracerBase;vtkStreaklineFilter;vtkStreamTracer;vtkTemporalInterpolatedVelocityField;vtkTemporalStreamTracer;vtkDashedStreamLine;vtkStreamLine;vtkStreamPoints;vtkStreamer")

foreach(header ${vtkFiltersFlowPaths_HEADERS})
  set(vtkFiltersFlowPaths_HEADER_${header}_EXISTS 1)
endforeach()

set(vtkFiltersFlowPaths_HEADER_vtkAbstractInterpolatedVelocityField_ABSTRACT 1)
set(vtkFiltersFlowPaths_HEADER_vtkCompositeInterpolatedVelocityField_ABSTRACT 1)
set(vtkFiltersFlowPaths_HEADER_vtkParticleTracerBase_ABSTRACT 1)
set(vtkFiltersFlowPaths_HEADER_vtkStreamer_ABSTRACT 1)

set(vtkFiltersFlowPaths_HEADER_vtkLagrangianParticle_WRAP_EXCLUDE 1)


