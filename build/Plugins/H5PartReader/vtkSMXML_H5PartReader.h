// Loadable modules
//
// Generated by ..\..\bin\Debug\vtkkwProcessXML-pv5.3.exe
//
#ifndef __vtkSMXML_H5PartReader_h
#define __vtkSMXML_H5PartReader_h

#include <string.h>


// From file C:/Users/vr/Desktop/ParaView-v5.3.0-VR/src/Plugins/H5PartReader/H5PartServerManager.xml
static const char* const H5PartReaderH5PartServerManagerInterfaces0 =
"<ServerManagerConfiguration>\n"
"  <ProxyGroup name=\"sources\">\n"
"    <SourceProxy name=\"H5PartReader\" class=\"vtkH5PartReader\">\n"
"      <Documentation>\n"
"        Reader for H5Part (HDF5) particle files.\n"
"      </Documentation>\n"
"\n"
"     <StringVectorProperty name=\"FileName\"\n"
"       command=\"SetFileName\"\n"
"       number_of_elements=\"1\">\n"
"       <FileListDomain name=\"files\"/>\n"
"     </StringVectorProperty>\n"
"      \n"
"     <IntVectorProperty name=\"MaskOutOfTimeRangeOutput\"\n"
"        command=\"SetMaskOutOfTimeRangeOutput\"\n"
"        number_of_elements=\"1\"\n"
"        default_values=\"0\" >\n"
"       <BooleanDomain name=\"bool\"/>\n"
"     </IntVectorProperty>\n"
"\n"
"     <DoubleVectorProperty name=\"TimestepValues\"\n"
"       information_only=\"1\">\n"
"      <TimeStepsInformationHelper/>\n"
"     </DoubleVectorProperty>\n"
"     \n"
"     <StringVectorProperty\n"
"        name=\"Xarray\"\n"
"        command=\"SetXarray\"\n"
"        number_of_elements=\"1\">\n"
"       <Documentation>\n"
"         This property lists which point array to use for coordinates.\n"
"       </Documentation>\n"
"       <StringListDomain name=\"array_list\">\n"
"          <RequiredProperties>\n"
"            <Property name=\"PointArrayInfo\" function=\"ArrayList\" />\n"
"          </RequiredProperties>\n"
"       </StringListDomain>\n"
"     </StringVectorProperty>\n"
"\n"
"     <StringVectorProperty\n"
"        name=\"Yarray\"\n"
"        command=\"SetYarray\"\n"
"        number_of_elements=\"1\">\n"
"       <Documentation>\n"
"         This property lists which point array to use for coordinates.\n"
"       </Documentation>\n"
"       <StringListDomain name=\"array_list\">\n"
"          <RequiredProperties>\n"
"            <Property name=\"PointArrayInfo\" function=\"ArrayList\" />\n"
"          </RequiredProperties>\n"
"       </StringListDomain>\n"
"     </StringVectorProperty>\n"
"\n"
"     <StringVectorProperty\n"
"        name=\"Zarray\"\n"
"        command=\"SetZarray\"\n"
"        number_of_elements=\"1\">\n"
"       <Documentation>\n"
"         This property lists which point array to use for coordinates.\n"
"       </Documentation>\n"
"       <StringListDomain name=\"array_list\">\n"
"          <RequiredProperties>\n"
"            <Property name=\"PointArrayInfo\" function=\"ArrayList\" />\n"
"          </RequiredProperties>\n"
"       </StringListDomain>\n"
"     </StringVectorProperty>\n"
"\n"
"     <StringVectorProperty\n"
"        name=\"PointArrayInfo\"\n"
"        information_only=\"1\">\n"
"       <ArraySelectionInformationHelper attribute_name=\"Point\"/>\n"
"     </StringVectorProperty>\n"
"\n"
"     <StringVectorProperty\n"
"        name=\"PointArrayStatus\"\n"
"        command=\"SetPointArrayStatus\"\n"
"        number_of_elements=\"0\"\n"
"        repeat_command=\"1\"\n"
"        number_of_elements_per_command=\"2\"\n"
"        element_types=\"2 0\"\n"
"        information_property=\"PointArrayInfo\"\n"
"        label=\"Point Arrays\">\n"
"       <ArraySelectionDomain name=\"array_list\">\n"
"         <RequiredProperties>\n"
"           <Property name=\"PointArrayInfo\" function=\"ArrayList\"/>\n"
"         </RequiredProperties>\n"
"       </ArraySelectionDomain>\n"
"       <Documentation>\n"
"         This property lists which point-centered arrays to read.\n"
"       </Documentation>\n"
"     </StringVectorProperty>\n"
"\n"
"     <IntVectorProperty\n"
"        name=\"GenerateVertexCells\"\n"
"        command=\"SetGenerateVertexCells\"\n"
"        number_of_elements=\"1\"\n"
"        default_values=\"1\" >\n"
"       <BooleanDomain name=\"bool\"/>\n"
"     </IntVectorProperty>\n"
"     <Hints>\n"
"       <ReaderFactory extensions=\"h5part\"\n"
"                      file_description=\"H5Part particle files (Plugin)\" />\n"
"     </Hints>\n"
"   </SourceProxy>\n"
"  </ProxyGroup>\n"
"</ServerManagerConfiguration>\n"
"\n";
// Get single string
char* H5PartReaderH5PartServerManagerInterfaces()
{
  size_t len = ( 0
    + strlen(H5PartReaderH5PartServerManagerInterfaces0) );
  char* res = new char[ len + 1];
  res[0] = 0;
  strcat(res, H5PartReaderH5PartServerManagerInterfaces0);
  return res;
}



#endif
