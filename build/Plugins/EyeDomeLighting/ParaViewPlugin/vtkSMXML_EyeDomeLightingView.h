// Loadable modules
//
// Generated by ..\..\..\bin\Debug\vtkkwProcessXML-pv5.3.exe
//
#ifndef __vtkSMXML_EyeDomeLightingView_h
#define __vtkSMXML_EyeDomeLightingView_h

#include <string.h>


// From file C:/Users/vr/Desktop/ParaView-v5.3.0-VR/src/Plugins/EyeDomeLighting/ParaViewPlugin/RenderPassViews.xml
static const char* const EyeDomeLightingViewRenderPassViewsInterfaces0 =
"<ServerManagerConfiguration>\n"
"  <ProxyGroup name=\"views\">\n"
"    <RenderViewProxy name=\"RenderViewWithEDL\" class=\"vtkPVRenderViewWithEDL\"\n"
"        label=\"Eye Dome Lighting\"\n"
"        processes=\"client|renderserver|dataserver\"\n"
"        base_proxygroup=\"views\" base_proxyname=\"RenderView\">\n"
"    </RenderViewProxy>\n"
"  </ProxyGroup>\n"
"</ServerManagerConfiguration>\n"
"\n";
// Get single string
char* EyeDomeLightingViewRenderPassViewsInterfaces()
{
  size_t len = ( 0
    + strlen(EyeDomeLightingViewRenderPassViewsInterfaces0) );
  char* res = new char[ len + 1];
  res[0] = 0;
  strcat(res, EyeDomeLightingViewRenderPassViewsInterfaces0);
  return res;
}



#endif