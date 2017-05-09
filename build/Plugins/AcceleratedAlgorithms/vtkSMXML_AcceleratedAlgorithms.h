// Loadable modules
//
// Generated by ..\..\bin\Debug\vtkkwProcessXML-pv5.3.exe
//
#ifndef __vtkSMXML_AcceleratedAlgorithms_h
#define __vtkSMXML_AcceleratedAlgorithms_h

#include <string.h>


// From file C:/Users/vr/Desktop/ParaView-v5.3.0-VR/src/Plugins/AcceleratedAlgorithms/AcceleratedAlgorithms.xml
static const char* const AcceleratedAlgorithmsAcceleratedAlgorithmsInterfaces0 =
"<ServerManagerConfiguration>\n"
"  <ProxyGroup name=\"filters\">\n"
"    <SourceProxy class=\"vtkFlyingEdges3D\"\n"
"                 name=\"FlyingEdges3D\" label=\"Flying Edges 3D\">\n"
"      <Documentation short_help=\"Generates isosurfaces from 3D image data (volume).\">\n"
"      Generates an isosurface from 3D image data (volume). It\n"
"      implements the algorithm in: Flying Edges: A High-Performance\n"
"      Scalable Isocontouring Algorithm by Schroeder, Maynard,\n"
"      Geveci.</Documentation>\n"
"      <InputProperty command=\"SetInputConnection\"\n"
"                     name=\"Input\">\n"
"        <ProxyGroupDomain name=\"groups\">\n"
"          <Group name=\"sources\" />\n"
"          <Group name=\"filters\" />\n"
"        </ProxyGroupDomain>\n"
"        <DataTypeDomain name=\"input_type\">\n"
"          <DataType value=\"vtkImageData\" />\n"
"        </DataTypeDomain>\n"
"        <InputArrayDomain attribute_type=\"point\"\n"
"                          name=\"input_array\"\n"
"                          number_of_components=\"1\" />\n"
"        <Documentation>This property specifies the input dataset to be used by\n"
"        the contour filter.</Documentation>\n"
"      </InputProperty>\n"
"      <StringVectorProperty animateable=\"0\"\n"
"                            command=\"SetInputArrayToProcess\"\n"
"                            element_types=\"0 0 0 0 2\"\n"
"                            label=\"Contour By\"\n"
"                            name=\"SelectInputScalars\"\n"
"                            number_of_elements=\"5\">\n"
"        <ArrayListDomain attribute_type=\"Scalars\"\n"
"                         name=\"array_list\">\n"
"          <RequiredProperties>\n"
"            <Property function=\"Input\"\n"
"                      name=\"Input\" />\n"
"          </RequiredProperties>\n"
"        </ArrayListDomain>\n"
"        <FieldDataDomain name=\"field_list\">\n"
"          <RequiredProperties>\n"
"            <Property function=\"Input\"\n"
"                      name=\"Input\" />\n"
"          </RequiredProperties>\n"
"        </FieldDataDomain>\n"
"        <Documentation>This property specifies the name of the scalar array\n"
"        from which the contour filter will compute isolines and/or\n"
"        isosurfaces.</Documentation>\n"
"      </StringVectorProperty>\n"
"      <IntVectorProperty animateable=\"0\"\n"
"                         command=\"SetComputeNormals\"\n"
"                         default_values=\"1\"\n"
"                         name=\"ComputeNormals\"\n"
"                         number_of_elements=\"1\">\n"
"        <BooleanDomain name=\"bool\" />\n"
"        <Hints>\n"
"          <PropertyWidgetDecorator type=\"NonPolyDataInputDecorator\" />\n"
"        </Hints>\n"
"        <Documentation>If this property is set to 1, a scalar array containing\n"
"        a normal value at each point in the isosurface or isoline will be\n"
"        created by the contour filter; otherwise an array of normals will not\n"
"        be computed. This operation is fairly expensive both in terms of\n"
"        computation time and memory required, so if the output dataset produced\n"
"        by the contour filter will be processed by filters that modify the\n"
"        dataset's topology or geometry, it may be wise to set the value of this\n"
"        property to 0. Select whether to compute normals.</Documentation>\n"
"      </IntVectorProperty>\n"
"      <IntVectorProperty animateable=\"0\"\n"
"                         command=\"SetComputeGradients\"\n"
"                         default_values=\"0\"\n"
"                         name=\"ComputeGradients\"\n"
"                         number_of_elements=\"1\">\n"
"        <BooleanDomain name=\"bool\" />\n"
"        <Hints>\n"
"          <PropertyWidgetDecorator type=\"InputDataTypeDecorator\" name=\"Structured\" />\n"
"        </Hints>\n"
"        <Documentation>If this property is set to 1, a scalar array containing\n"
"        a gradient value at each point in the isosurface or isoline will be\n"
"        created by this filter; otherwise an array of gradients will not be\n"
"        computed. This operation is fairly expensive both in terms of\n"
"        computation time and memory required, so if the output dataset produced\n"
"        by the contour filter will be processed by filters that modify the\n"
"        dataset's topology or geometry, it may be wise to set the value of this\n"
"        property to 0. Not that if ComputeNormals is set to 1, then gradients\n"
"        will have to be calculated, but they will only be stored in the output\n"
"        dataset if ComputeGradients is also set to 1.</Documentation>\n"
"      </IntVectorProperty>\n"
"      <IntVectorProperty animateable=\"0\"\n"
"                         command=\"SetComputeScalars\"\n"
"                         default_values=\"0\"\n"
"                         name=\"ComputeScalars\"\n"
"                         number_of_elements=\"1\">\n"
"        <BooleanDomain name=\"bool\" />\n"
"        <Documentation>If this property is set to 1, an array of scalars\n"
"        (containing the contour value) will be added to the output dataset. If\n"
"        set to 0, the output will not contain this array.</Documentation>\n"
"      </IntVectorProperty>\n"
"      <DoubleVectorProperty animateable=\"1\"\n"
"                            command=\"SetValue\"\n"
"                            label=\"Isosurfaces\"\n"
"                            name=\"ContourValues\"\n"
"                            number_of_elements=\"0\"\n"
"                            number_of_elements_per_command=\"1\"\n"
"                            repeat_command=\"1\"\n"
"                            set_number_command=\"SetNumberOfContours\"\n"
"                            use_index=\"1\">\n"
"        <ArrayRangeDomain name=\"scalar_range\">\n"
"          <RequiredProperties>\n"
"            <Property function=\"Input\"\n"
"                      name=\"Input\" />\n"
"            <Property function=\"ArraySelection\"\n"
"                      name=\"SelectInputScalars\" />\n"
"          </RequiredProperties>\n"
"        </ArrayRangeDomain>\n"
"        <Documentation>This property specifies the values at which to compute\n"
"        isosurfaces/isolines and also the number of such\n"
"        values.</Documentation>\n"
"      </DoubleVectorProperty>\n"
"      <Hints>\n"
"        <Visibility replace_input=\"2\" />\n"
"        <ShowInMenu category=\"Accelerated Algorithms\" />\n"
"      </Hints>\n"
"\n"
"      <PropertyGroup label=\"Isosurfaces\">\n"
"        <Property name=\"ContourValues\" />\n"
"      </PropertyGroup>\n"
"\n"
"      <!-- End FlyingEdges3D -->\n"
"    </SourceProxy>\n"
"\n"
"    <SourceProxy class=\"vtkFlyingEdges2D\"\n"
"                 name=\"FlyingEdges2D\" label=\"Flying Edges 2D\">\n"
"      <Documentation short_help=\"Generates isoline(s) from a structured grid.\">\n"
"        Generates isoline(s) from a structured grid. It implements the\n"
"        algorithm in: Flying Edges: A High-Performance Scalable\n"
"        Isocontouring Algorithm by Schroeder, Maynard, Geveci.\n"
"      </Documentation>\n"
"      <InputProperty command=\"SetInputConnection\"\n"
"                     name=\"Input\">\n"
"        <ProxyGroupDomain name=\"groups\">\n"
"          <Group name=\"sources\" />\n"
"          <Group name=\"filters\" />\n"
"        </ProxyGroupDomain>\n"
"        <DataTypeDomain name=\"input_type\">\n"
"          <DataType value=\"vtkImageData\" />\n"
"        </DataTypeDomain>\n"
"        <InputArrayDomain attribute_type=\"point\"\n"
"                          name=\"input_array\"\n"
"                          number_of_components=\"1\" />\n"
"        <Documentation>This property specifies the input dataset to be used by\n"
"        the contour filter.</Documentation>\n"
"      </InputProperty>\n"
"      <StringVectorProperty animateable=\"0\"\n"
"                            command=\"SetInputArrayToProcess\"\n"
"                            element_types=\"0 0 0 0 2\"\n"
"                            label=\"Contour By\"\n"
"                            name=\"SelectInputScalars\"\n"
"                            number_of_elements=\"5\">\n"
"        <ArrayListDomain attribute_type=\"Scalars\"\n"
"                         name=\"array_list\">\n"
"          <RequiredProperties>\n"
"            <Property function=\"Input\"\n"
"                      name=\"Input\" />\n"
"          </RequiredProperties>\n"
"        </ArrayListDomain>\n"
"        <FieldDataDomain name=\"field_list\">\n"
"          <RequiredProperties>\n"
"            <Property function=\"Input\"\n"
"                      name=\"Input\" />\n"
"          </RequiredProperties>\n"
"        </FieldDataDomain>\n"
"        <Documentation>This property specifies the name of the scalar array\n"
"        from which the contour filter will compute isolines and/or\n"
"        isosurfaces.</Documentation>\n"
"      </StringVectorProperty>\n"
"      <DoubleVectorProperty animateable=\"1\"\n"
"                            command=\"SetValue\"\n"
"                            label=\"Isosurfaces\"\n"
"                            name=\"ContourValues\"\n"
"                            number_of_elements=\"0\"\n"
"                            number_of_elements_per_command=\"1\"\n"
"                            repeat_command=\"1\"\n"
"                            set_number_command=\"SetNumberOfContours\"\n"
"                            use_index=\"1\">\n"
"        <ArrayRangeDomain name=\"scalar_range\">\n"
"          <RequiredProperties>\n"
"            <Property function=\"Input\"\n"
"                      name=\"Input\" />\n"
"            <Property function=\"ArraySelection\"\n"
"                      name=\"SelectInputScalars\" />\n"
"          </RequiredProperties>\n"
"        </ArrayRangeDomain>\n"
"        <Documentation>This property specifies the values at which to compute\n"
"        isosurfaces/isolines and also the number of such\n"
"        values.</Documentation>\n"
"      </DoubleVectorProperty>\n"
"      <Hints>\n"
"        <Visibility replace_input=\"2\" />\n"
"        <ShowInMenu category=\"Accelerated Algorithms\" />\n"
"      </Hints>\n"
"\n"
"      <PropertyGroup label=\"Isosurfaces\">\n"
"        <Property name=\"ContourValues\" />\n"
"      </PropertyGroup>\n"
"\n"
"      <!-- End FlyingEdges2D -->\n"
"    </SourceProxy>\n"
"\n"
"    <SourceProxy class=\"vtkFlyingEdgesPlaneCutter\"\n"
"                 label=\"Flying Edges Plane Cutter\"\n"
"                 name=\"FlyingEdgesPlaneCutter\">\n"
"      <Documentation short_help=\"Cut a volume with a plane and generates a polygonal cut surface\">\n"
"        Flying Edges Plane Cutter is a specialization of the\n"
"        FlyingEdges algorithm to cut a volume with a single plane. It\n"
"        is designed for performance and an exploratory, fast workflow.\n"
"      </Documentation>\n"
"      <InputProperty command=\"SetInputConnection\"\n"
"                     name=\"Input\">\n"
"        <ProxyGroupDomain name=\"groups\">\n"
"          <Group name=\"sources\" />\n"
"          <Group name=\"filters\" />\n"
"        </ProxyGroupDomain>\n"
"        <DataTypeDomain name=\"input_type\">\n"
"          <DataType value=\"vtkImageData\" />\n"
"        </DataTypeDomain>\n"
"        <Documentation>This property specifies the input to the Slice\n"
"        filter.</Documentation>\n"
"      </InputProperty>\n"
"      <ProxyProperty command=\"SetPlane\"\n"
"                     label=\"Slice Type\"\n"
"                     name=\"Plane\">\n"
"        <ProxyGroupDomain name=\"groups\">\n"
"          <Group name=\"implicit_functions\" />\n"
"        </ProxyGroupDomain>\n"
"        <ProxyListDomain name=\"proxy_list\">\n"
"          <Proxy group=\"implicit_functions\"\n"
"                 name=\"Plane\" />\n"
"        </ProxyListDomain>\n"
"        <Documentation>This property sets the parameters of the slice\n"
"        function.</Documentation>\n"
"      </ProxyProperty>\n"
"      <Hints>\n"
"        <Visibility replace_input=\"2\" />\n"
"        <ShowInMenu category=\"Accelerated Algorithms\" />\n"
"      </Hints>\n"
"      <!-- FlyingEdgesPlaneCutter -->\n"
"    </SourceProxy>\n"
"  </ProxyGroup>\n"
"</ServerManagerConfiguration>\n"
"\n";
// Get single string
char* AcceleratedAlgorithmsAcceleratedAlgorithmsInterfaces()
{
  size_t len = ( 0
    + strlen(AcceleratedAlgorithmsAcceleratedAlgorithmsInterfaces0) );
  char* res = new char[ len + 1];
  res[0] = 0;
  strcat(res, AcceleratedAlgorithmsAcceleratedAlgorithmsInterfaces0);
  return res;
}



#endif
