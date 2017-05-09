/*=========================================================================

   Program: ParaView
   Module:    pqParaViewPlugin.cxx.in

   Copyright (c) 2005,2006 Sandia Corporation, Kitware Inc.
   All rights reserved.

   ParaView is a free software; you can redistribute it and/or modify it
   under the terms of the ParaView license version 1.2. 

   See License_v1.2.txt for the full ParaView license.
   A copy of this license can be obtained by contacting
   Kitware Inc.
   28 Corporate Drive
   Clifton Park, NY 12065
   USA

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE AUTHORS OR
CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

========================================================================*/
#include "StreamLinesRepresentation_Plugin.h"

#include "vtkObjectFactory.h"
#include "vtkPVPluginLoader.h"

#include "C:/Users/vr/Desktop/ParaView-v5.3.0-VR/build/Plugins/StreamLinesRepresentation/vtkSMXML_StreamLinesRepresentation.h"



namespace
{
  // This ensures that when the shared library for this plugin is
  // unloaded during finalization sequence, it notifies the vtkPVPluginLoader
  // so it does not double-dlclose() an already unloaded plugin.
  // This does not affect static builds and hence we don't need to worry about
  // making sure this instance gets created in static builds.
  static class StreamLinesRepresentation_PluginCleaner
    {
  public:
    StreamLinesRepresentation_PluginCleaner()
      {
      }
    ~StreamLinesRepresentation_PluginCleaner()
      {
      // The plugin library is being unloaded.
      // Let the plugin loader know so it doesn't try to unload it again.
      vtkPVPluginLoader::PluginLibraryUnloaded("StreamLinesRepresentation");
      }
    } StreamLinesRepresentation_PluginCleaner_Instance;
}

//-----------------------------------------------------------------------------
// Used to push a string returns from a function to a vector.
template <class T, class F>
void PushBack(T& vector, F& fun)
{
  char* text = fun();
  vector.push_back(text);
  delete []text;
}

//-----------------------------------------------------------------------------
#ifdef plugin_type_servermanager
# if defined(INITIALIZE_WRAPPING) || defined(INITIALIZE_EXTRA_CS_MODULES)
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerInterpreterInitializer.h"

#   if defined(INITIALIZE_WRAPPING)
extern "C" void StreamLinesRepresentation_Initialize(vtkClientServerInterpreter *);
#   endif



extern "C" void VTK_EXPORT StreamLinesRepresentation_CombinedInitialize(
  vtkClientServerInterpreter *interp)
{
#   if defined(INITIALIZE_WRAPPING)
  StreamLinesRepresentation_Initialize(interp);
#   endif

  // Now initialize any extra kits as requested.
  
}
# endif
#endif

//-----------------------------------------------------------------------------
void StreamLinesRepresentation_Plugin::GetBinaryResources(
  std::vector<std::string>& resources)
{

  (void)resources;
}

//-----------------------------------------------------------------------------
#ifdef plugin_type_gui
#define PUSH_BACK_PV_INTERFACES(arg)\
  arg.push_back(new pqStreamLinesAnimationManagerImplementation(this));\



#include "pqStreamLinesAnimationManagerImplementation.h"
#endif

//-----------------------------------------------------------------------------
#ifdef plugin_type_servermanager
vtkClientServerInterpreterInitializer::InterpreterInitializationCallback
StreamLinesRepresentation_Plugin::GetInitializeInterpreterCallback()
{
#if defined(INITIALIZE_WRAPPING) || defined(INITIALIZE_EXTRA_CS_MODULES)
  return StreamLinesRepresentation_CombinedInitialize;
#else
  return NULL;
#endif
}

//-----------------------------------------------------------------------------
void StreamLinesRepresentation_Plugin::GetXMLs(std::vector<std::string> &xmls)
{
  PushBack(xmls, StreamLinesRepresentationStreamLinesRepresentationInterfaces);

  (void)xmls;
}
#endif

//-----------------------------------------------------------------------------
#ifdef plugin_type_gui
QObjectList StreamLinesRepresentation_Plugin::interfaces()
{
  QObjectList ifaces;
#ifdef PUSH_BACK_PV_INTERFACES
  PUSH_BACK_PV_INTERFACES(ifaces);
#endif
  return ifaces;
}
#endif

//-----------------------------------------------------------------------------
#ifdef plugin_type_python


void StreamLinesRepresentation_Plugin::GetPythonSourceList(std::vector<std::string>& modules,
  std::vector<std::string>& sources,
  std::vector<int> &package_flags)
{
  const char *moduleNames[] = {
    
  };
  char *moduleSources[] = {
    
  };
  const int packageFlags[] = {
    
  };

  int num_modules = sizeof(moduleNames)/sizeof(const char *);
  for (int cc=0; cc < num_modules; cc++)
    {
    modules.push_back(moduleNames[cc]);
    sources.push_back(moduleSources[cc]);
    package_flags.push_back(packageFlags[cc]);

    // free allocated memory.
    delete moduleSources[cc];
    moduleSources[cc] = NULL;
    }
}
#endif

//-----------------------------------------------------------------------------
StreamLinesRepresentation_Plugin::StreamLinesRepresentation_Plugin()
{
#if !defined(BUILD_SHARED_LIBS) && defined(plugin_type_gui)
  // For static builds, initialize the Qt resources as well as the Qt plugin.
  
#ifdef plugin_type_gui_qt4
  // Qt 4
  Q_IMPORT_PLUGIN(StreamLinesRepresentation)
#else
  // Qt 5
  Q_IMPORT_PLUGIN(StreamLinesRepresentation_Plugin)
#endif

#endif
}

//-----------------------------------------------------------------------------
// Mark this as a ParaView-ServerManager plugin.
PV_PLUGIN_EXPORT(StreamLinesRepresentation, StreamLinesRepresentation_Plugin)

//-----------------------------------------------------------------------------
#if defined(plugin_type_gui) && defined(plugin_type_gui_qt4)
// Required to mark this as a Qt plugin.
Q_EXPORT_PLUGIN2(StreamLinesRepresentation,  StreamLinesRepresentation_Plugin)
#endif