set(vtkFiltersHyperTree_HEADERS_LOADED 1)
set(vtkFiltersHyperTree_HEADERS "vtkClipHyperOctree;vtkHyperTreeGridAxisCut;vtkHyperTreeGridGeometry;vtkHyperTreeGridToUnstructuredGrid;vtkHyperOctreeClipCutPointsGrabber;vtkHyperOctreeContourFilter;vtkHyperOctreeCutter;vtkHyperOctreeDepth;vtkHyperOctreeDualGridContourFilter;vtkHyperOctreeLimiter;vtkHyperOctreeSampleFunction;vtkHyperOctreeSurfaceFilter;vtkHyperOctreeToUniformGridFilter")

foreach(header ${vtkFiltersHyperTree_HEADERS})
  set(vtkFiltersHyperTree_HEADER_${header}_EXISTS 1)
endforeach()



