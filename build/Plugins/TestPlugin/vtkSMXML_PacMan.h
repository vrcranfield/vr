// Loadable modules
//
// Generated by ..\..\bin\Debug\vtkkwProcessXML-pv5.3.exe
//
#ifndef __vtkSMXML_PacMan_h
#define __vtkSMXML_PacMan_h

#include <string.h>


// From file C:/Users/vr/Desktop/ParaView-v5.3.0-VR/src/Plugins/TestPlugin/PacMan.xml
static const char* const PacManPacManInterfaces0 =
"<ServerManagerConfiguration>\n"
"  <ProxyGroup name=\"settings\">\n"
"\n"
"    <SettingsProxy name=\"PacManSettings\" label=\"PacMan\"\n"
"      processes=\"client|dataserver|renderserver\">\n"
"      <Documentation>\n"
"        Settings for the PacMan plugin.\n"
"      </Documentation>\n"
"\n"
"      <IntVectorProperty name=\"TestOption\"\n"
"        number_of_elements=\"1\"\n"
"        default_values=\"0\">\n"
"        <Documentation>\n"
"          This is a simple boolean test option.\n"
"        </Documentation>\n"
"        <BooleanDomain name=\"bool\" />\n"
"      </IntVectorProperty>\n"
"      <Hints>\n"
"        <UseDocumentationForLabels />\n"
"      </Hints>\n"
"    </SettingsProxy>\n"
"\n"
"  </ProxyGroup>\n"
"  <ProxyGroup name=\"sources\">\n"
"   <SourceProxy name=\"PacMan\" class=\"vtkSphereSource\" label=\"PacMan\">\n"
"      <DoubleVectorProperty\n"
"         name=\"Center\"\n"
"         command=\"SetCenter\"\n"
"         number_of_elements=\"3\"\n"
"         animateable=\"1\"\n"
"         default_values=\"0.0 0.0 0.0\" >\n"
"        <DoubleRangeDomain name=\"range\"/>\n"
"        <Documentation>\n"
"          This property specifies the 3D coordinates for the center of the sphere.\n"
"        </Documentation>\n"
"      </DoubleVectorProperty>\n"
"\n"
"      <IntVectorProperty\n"
"         name=\"ThetaResolution\"\n"
"         command=\"SetThetaResolution\"\n"
"         number_of_elements=\"1\"\n"
"         default_values=\"60\" >\n"
"        <IntRangeDomain name=\"range\" min=\"3\" max=\"1024\" />\n"
"        <Documentation>\n"
"          The value of this property represents the number of divisions between Start Theta and End Theta around the sphere. (See the Start Theta and End Theta properties.) The theta divisions are similar to longitude lines on the earth. The higher the resolution, the closer the approximation will come to a sphere, and the more polygons there will be.\n"
"        </Documentation>\n"
"      </IntVectorProperty>\n"
"\n"
"      <DoubleVectorProperty\n"
"         name=\"StartTheta\"\n"
"         command=\"SetStartTheta\"\n"
"         number_of_elements=\"1\"\n"
"         animateable=\"1\"\n"
"         default_values=\"30\" >\n"
"        <DoubleRangeDomain name=\"range\" min=\"0\" max=\"360\" />\n"
"        <Documentation>\n"
"          To form a complete sphere, the value of this property should be 0 degrees, and the value of the End Theta property should be 360 degrees. The value of this property can be adjusted to form only a portion of a sphere.\n"
"        </Documentation>\n"
"      </DoubleVectorProperty>\n"
"\n"
"      <DoubleVectorProperty\n"
"         name=\"EndTheta\"\n"
"         command=\"SetEndTheta\"\n"
"         number_of_elements=\"1\"\n"
"         animateable=\"1\"\n"
"         default_values=\"330\" >\n"
"        <DoubleRangeDomain name=\"range\" min=\"0\" max=\"360\" />\n"
"        <Documentation>\n"
"          The value of this property can be adjusted to form only a portion of a sphere. This value is measured in degrees.\n"
"        </Documentation>\n"
"      </DoubleVectorProperty>\n"
"\n"
"      <IntVectorProperty\n"
"         name=\"PhiResolution\"\n"
"         command=\"SetPhiResolution\"\n"
"         number_of_elements=\"1\"\n"
"         default_values=\"60\" >\n"
"        <IntRangeDomain name=\"range\" min=\"3\" max=\"1024\" />\n"
"        <Documentation>\n"
"          The value of this property represents the number of divisions between Start Phi and End Phi on the sphere. (See the Start Phi and End Phi properties.) The phi divisions are similar to latitude lines on the earth.\n"
"        </Documentation>\n"
"      </IntVectorProperty>\n"
"   </SourceProxy>\n"
"  </ProxyGroup>\n"
"</ServerManagerConfiguration>\n"
"\n";
// Get single string
char* PacManPacManInterfaces()
{
  size_t len = ( 0
    + strlen(PacManPacManInterfaces0) );
  char* res = new char[ len + 1];
  res[0] = 0;
  strcat(res, PacManPacManInterfaces0);
  return res;
}



#endif