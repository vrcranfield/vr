/* DO NOT EDIT.
 * Generated by ..\..\..\bin\Debug\vtkEncodeString-pv5.3.exe
 * 
 * Define the vtkCompositeZPassFS string.
 *
 * Generated from file: C:/Users/vr/Desktop/ParaView-v5.3.0-VR/src/VTK/Rendering/Parallel/vtkCompositeZPassFS.glsl
 */
#include "vtkCompositeZPassFS.h"
const char *vtkCompositeZPassFS =
"//VTK::System::Dec\n"
"\n"
"// ============================================================================\n"
"//\n"
"//  Program:   Visualization Toolkit\n"
"//  Module:    vtkCompositeZPassFS.glsl\n"
"//\n"
"//  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen\n"
"//  All rights reserved.\n"
"//  See Copyright.txt or http://www.kitware.com/Copyright.htm for details.\n"
"//\n"
"//     This software is distributed WITHOUT ANY WARRANTY; without even\n"
"//     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR\n"
"//     PURPOSE.  See the above copyright notice for more information.\n"
"//\n"
"// ============================================================================\n"
"\n"
"// Fragment shader used by the composite z render pass.\n"
"\n"
"// the output of this shader\n"
"//VTK::Output::Dec\n"
"\n"
"varying vec2 tcoordVC;\n"
"uniform sampler2D depth;\n"
"\n"
"void main(void)\n"
"{\n"
"  gl_FragDepth = texture2D(depth,tcoordVC).x;\n"
"}\n"
"\n";
