/*****************************************************************************
*
* Copyright (c) 2000 - 2007, The Regents of the University of California
* Produced at the Lawrence Livermore National Laboratory
* All rights reserved.
*
* This file is part of VisIt. For details, see http://www.llnl.gov/visit/. The
* full copyright notice is contained in the file COPYRIGHT located at the root
* of the VisIt distribution or at http://www.llnl.gov/visit/copyright.html.
*
* Redistribution  and  use  in  source  and  binary  forms,  with  or  without
* modification, are permitted provided that the following conditions are met:
*
*  - Redistributions of  source code must  retain the above  copyright notice,
*    this list of conditions and the disclaimer below.
*  - Redistributions in binary form must reproduce the above copyright notice,
*    this  list of  conditions  and  the  disclaimer (as noted below)  in  the
*    documentation and/or materials provided with the distribution.
*  - Neither the name of the UC/LLNL nor  the names of its contributors may be
*    used to  endorse or  promote products derived from  this software without
*    specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT  HOLDERS AND CONTRIBUTORS "AS IS"
* AND ANY EXPRESS OR  IMPLIED WARRANTIES, INCLUDING,  BUT NOT  LIMITED TO, THE
* IMPLIED WARRANTIES OF MERCHANTABILITY AND  FITNESS FOR A PARTICULAR  PURPOSE
* ARE  DISCLAIMED.  IN  NO  EVENT  SHALL  THE  REGENTS  OF  THE  UNIVERSITY OF
* CALIFORNIA, THE U.S.  DEPARTMENT  OF  ENERGY OR CONTRIBUTORS BE  LIABLE  FOR
* ANY  DIRECT,  INDIRECT,  INCIDENTAL,  SPECIAL,  EXEMPLARY,  OR CONSEQUENTIAL
* DAMAGES (INCLUDING, BUT NOT  LIMITED TO, PROCUREMENT OF  SUBSTITUTE GOODS OR
* SERVICES; LOSS OF  USE, DATA, OR PROFITS; OR  BUSINESS INTERRUPTION) HOWEVER
* CAUSED  AND  ON  ANY  THEORY  OF  LIABILITY,  WHETHER  IN  CONTRACT,  STRICT
* LIABILITY, OR TORT  (INCLUDING NEGLIGENCE OR OTHERWISE)  ARISING IN ANY  WAY
* OUT OF THE  USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH
* DAMAGE.
*
*****************************************************************************/

#include <DataNode.h>
#include <GaussianControlPoint.h>

namespace pointsprite
{

// ****************************************************************************
// Method: GaussianControlPoint::GaussianControlPoint
//
// Purpose:
//   Constructor for the GaussianControlPoint class.
//
// Note:       Autogenerated by xml2atts.
//
// Programmer: xml2atts
// Creation:   Thu Dec 18 11:24:07 PDT 2003
//
// Modifications:
//
// ****************************************************************************

GaussianControlPoint::GaussianControlPoint()
  : AttributeSubject("fffff")
{
  x = 0;
  height = 0;
  width = 0.001;
  xBias = 0;
  yBias = 0;
}

// ****************************************************************************
// Method: GaussianControlPoint::GaussianControlPoint
//
// Purpose:
//   Copy constructor for the GaussianControlPoint class.
//
// Note:       Autogenerated by xml2atts.
//
// Programmer: xml2atts
// Creation:   Thu Dec 18 11:24:07 PDT 2003
//
// Modifications:
//
// ****************************************************************************

GaussianControlPoint::GaussianControlPoint(const GaussianControlPoint& obj)
  : AttributeSubject("fffff")
{
  x = obj.x;
  height = obj.height;
  width = obj.width;
  xBias = obj.xBias;
  yBias = obj.yBias;

  SelectAll();
}

// ****************************************************************************
// Method: GaussianControlPoint::~GaussianControlPoint
//
// Purpose:
//   Destructor for the GaussianControlPoint class.
//
// Note:       Autogenerated by xml2atts.
//
// Programmer: xml2atts
// Creation:   Thu Dec 18 11:24:07 PDT 2003
//
// Modifications:
//
// ****************************************************************************

GaussianControlPoint::~GaussianControlPoint()
{
  // nothing here
}

// ****************************************************************************
// Method: GaussianControlPoint::operator =
//
// Purpose:
//   Assignment operator for the GaussianControlPoint class.
//
// Note:       Autogenerated by xml2atts.
//
// Programmer: xml2atts
// Creation:   Thu Dec 18 11:24:07 PDT 2003
//
// Modifications:
//
// ****************************************************************************

void GaussianControlPoint::operator=(const GaussianControlPoint& obj)
{
  x = obj.x;
  height = obj.height;
  width = obj.width;
  xBias = obj.xBias;
  yBias = obj.yBias;

  SelectAll();
}

// ****************************************************************************
// Method: GaussianControlPoint::operator ==
//
// Purpose:
//   Comparison operator == for the GaussianControlPoint class.
//
// Note:       Autogenerated by xml2atts.
//
// Programmer: xml2atts
// Creation:   Thu Dec 18 11:24:07 PDT 2003
//
// Modifications:
//
// ****************************************************************************

bool GaussianControlPoint::operator==(const GaussianControlPoint& obj) const
{
  // Create the return value
  return ((x == obj.x) && (height == obj.height) && (width == obj.width) && (xBias == obj.xBias) &&
    (yBias == obj.yBias));
}

// ****************************************************************************
// Method: GaussianControlPoint::operator !=
//
// Purpose:
//   Comparison operator != for the GaussianControlPoint class.
//
// Note:       Autogenerated by xml2atts.
//
// Programmer: xml2atts
// Creation:   Thu Dec 18 11:24:07 PDT 2003
//
// Modifications:
//
// ****************************************************************************

bool GaussianControlPoint::operator!=(const GaussianControlPoint& obj) const
{
  return !(this->operator==(obj));
}

// ****************************************************************************
// Method: GaussianControlPoint::TypeName
//
// Purpose:
//   Type name method for the GaussianControlPoint class.
//
// Note:       Autogenerated by xml2atts.
//
// Programmer: xml2atts
// Creation:   Thu Dec 18 11:24:07 PDT 2003
//
// Modifications:
//
// ****************************************************************************

const std::string GaussianControlPoint::TypeName() const
{
  return "GaussianControlPoint";
}

// ****************************************************************************
// Method: GaussianControlPoint::CopyAttributes
//
// Purpose:
//   CopyAttributes method for the GaussianControlPoint class.
//
// Note:       Autogenerated by xml2atts.
//
// Programmer: xml2atts
// Creation:   Thu Dec 18 11:24:07 PDT 2003
//
// Modifications:
//
// ****************************************************************************

bool GaussianControlPoint::CopyAttributes(const AttributeGroup* atts)
{
  if (TypeName() != atts->TypeName())
    return false;

  // Call assignment operator.
  const GaussianControlPoint* tmp = (const GaussianControlPoint*)atts;
  *this = *tmp;

  return true;
}

// ****************************************************************************
// Method: GaussianControlPoint::CreateCompatible
//
// Purpose:
//   CreateCompatible method for the GaussianControlPoint class.
//
// Note:       Autogenerated by xml2atts.
//
// Programmer: xml2atts
// Creation:   Thu Dec 18 11:24:07 PDT 2003
//
// Modifications:
//
// ****************************************************************************

AttributeSubject* GaussianControlPoint::CreateCompatible(const std::string& tname) const
{
  AttributeSubject* retval = 0;
  if (TypeName() == tname)
    retval = new GaussianControlPoint(*this);
  // Other cases could go here too.

  return retval;
}

// ****************************************************************************
// Method: GaussianControlPoint::NewInstance
//
// Purpose:
//   NewInstance method for the GaussianControlPoint class.
//
// Note:       Autogenerated by xml2atts.
//
// Programmer: xml2atts
// Creation:   Thu Dec 18 11:24:07 PDT 2003
//
// Modifications:
//
// ****************************************************************************

AttributeSubject* GaussianControlPoint::NewInstance(bool copy) const
{
  AttributeSubject* retval = 0;
  if (copy)
    retval = new GaussianControlPoint(*this);
  else
    retval = new GaussianControlPoint;

  return retval;
}

// ****************************************************************************
// Method: GaussianControlPoint::SelectAll
//
// Purpose:
//   Selects all attributes.
//
// Note:       Autogenerated by xml2atts.
//
// Programmer: xml2atts
// Creation:   Thu Dec 18 11:24:07 PDT 2003
//
// Modifications:
//
// ****************************************************************************

void GaussianControlPoint::SelectAll()
{
  Select(0, (void*)&x);
  Select(1, (void*)&height);
  Select(2, (void*)&width);
  Select(3, (void*)&xBias);
  Select(4, (void*)&yBias);
}

///////////////////////////////////////////////////////////////////////////////
// Persistence methods
///////////////////////////////////////////////////////////////////////////////

// ****************************************************************************
// Method: GaussianControlPoint::CreateNode
//
// Purpose:
//   This method creates a DataNode representation of the object so it can be saved to a config
//   file.
//
// Note:       Autogenerated by xml2atts.
//
// Programmer: xml2atts
// Creation:   Thu Dec 18 11:24:07 PDT 2003
//
// Modifications:
//
// ****************************************************************************

bool GaussianControlPoint::CreateNode(DataNode* parentNode, bool completeSave, bool forceAdd)
{
  if (parentNode == 0)
    return false;

  GaussianControlPoint defaultObject;
  bool addToParent = false;
  // Create a node for GaussianControlPoint.
  DataNode* node = new DataNode("GaussianControlPoint");

  if (completeSave || !FieldsEqual(0, &defaultObject))
  {
    addToParent = true;
    node->AddNode(new DataNode("x", x));
  }

  if (completeSave || !FieldsEqual(1, &defaultObject))
  {
    addToParent = true;
    node->AddNode(new DataNode("height", height));
  }

  if (completeSave || !FieldsEqual(2, &defaultObject))
  {
    addToParent = true;
    node->AddNode(new DataNode("width", width));
  }

  if (completeSave || !FieldsEqual(3, &defaultObject))
  {
    addToParent = true;
    node->AddNode(new DataNode("xBias", xBias));
  }

  if (completeSave || !FieldsEqual(4, &defaultObject))
  {
    addToParent = true;
    node->AddNode(new DataNode("yBias", yBias));
  }

  // Add the node to the parent node.
  if (addToParent || forceAdd)
    parentNode->AddNode(node);
  else
    delete node;

  return (addToParent || forceAdd);
}

// ****************************************************************************
// Method: GaussianControlPoint::SetFromNode
//
// Purpose:
//   This method sets attributes in this object from values in a DataNode representation of the
//   object.
//
// Note:       Autogenerated by xml2atts.
//
// Programmer: xml2atts
// Creation:   Thu Dec 18 11:24:07 PDT 2003
//
// Modifications:
//
// ****************************************************************************

void GaussianControlPoint::SetFromNode(DataNode* parentNode)
{
  // int i;
  if (parentNode == 0)
    return;

  DataNode* searchNode = parentNode->GetNode("GaussianControlPoint");
  if (searchNode == 0)
    return;

  DataNode* node;
  if ((node = searchNode->GetNode("x")) != 0)
    SetX(node->AsFloat());
  if ((node = searchNode->GetNode("height")) != 0)
    SetHeight(node->AsFloat());
  if ((node = searchNode->GetNode("width")) != 0)
    SetWidth(node->AsFloat());
  if ((node = searchNode->GetNode("xBias")) != 0)
    SetXBias(node->AsFloat());
  if ((node = searchNode->GetNode("yBias")) != 0)
    SetYBias(node->AsFloat());
}

///////////////////////////////////////////////////////////////////////////////
// Set property methods
///////////////////////////////////////////////////////////////////////////////

void GaussianControlPoint::SetX(float x_)
{
  x = x_;
  Select(0, (void*)&x);
}

void GaussianControlPoint::SetHeight(float height_)
{
  height = height_;
  Select(1, (void*)&height);
}

void GaussianControlPoint::SetWidth(float width_)
{
  width = width_;
  Select(2, (void*)&width);
}

void GaussianControlPoint::SetXBias(float xBias_)
{
  xBias = xBias_;
  Select(3, (void*)&xBias);
}

void GaussianControlPoint::SetYBias(float yBias_)
{
  yBias = yBias_;
  Select(4, (void*)&yBias);
}

///////////////////////////////////////////////////////////////////////////////
// Get property methods
///////////////////////////////////////////////////////////////////////////////

float GaussianControlPoint::GetX() const
{
  return x;
}

float GaussianControlPoint::GetHeight() const
{
  return height;
}

float GaussianControlPoint::GetWidth() const
{
  return width;
}

float GaussianControlPoint::GetXBias() const
{
  return xBias;
}

float GaussianControlPoint::GetYBias() const
{
  return yBias;
}

///////////////////////////////////////////////////////////////////////////////
// Keyframing methods
///////////////////////////////////////////////////////////////////////////////

// ****************************************************************************
// Method: GaussianControlPoint::GetFieldName
//
// Purpose:
//   This method returns the name of a field given its index.
//
// Note:       Autogenerated by xml2atts.
//
// Programmer: xml2atts
// Creation:   Thu Dec 18 11:24:07 PDT 2003
//
// Modifications:
//
// ****************************************************************************

std::string GaussianControlPoint::GetFieldName(int index) const
{
  switch (index)
  {
    case 0:
      return "x";
    case 1:
      return "height";
    case 2:
      return "width";
    case 3:
      return "xBias";
    case 4:
      return "yBias";
    default:
      return "invalid index";
  }
}

// ****************************************************************************
// Method: GaussianControlPoint::GetFieldType
//
// Purpose:
//   This method returns the type of a field given its index.
//
// Note:       Autogenerated by xml2atts.
//
// Programmer: xml2atts
// Creation:   Thu Dec 18 11:24:07 PDT 2003
//
// Modifications:
//
// ****************************************************************************

AttributeGroup::FieldType GaussianControlPoint::GetFieldType(int index) const
{
  switch (index)
  {
    case 0:
      return FieldType_float;
    case 1:
      return FieldType_float;
    case 2:
      return FieldType_float;
    case 3:
      return FieldType_float;
    case 4:
      return FieldType_float;
    default:
      return FieldType_unknown;
  }
}

// ****************************************************************************
// Method: GaussianControlPoint::GetFieldTypeName
//
// Purpose:
//   This method returns the name of a field type given its index.
//
// Note:       Autogenerated by xml2atts.
//
// Programmer: xml2atts
// Creation:   Thu Dec 18 11:24:07 PDT 2003
//
// Modifications:
//
// ****************************************************************************

std::string GaussianControlPoint::GetFieldTypeName(int index) const
{
  switch (index)
  {
    case 0:
      return "float";
    case 1:
      return "float";
    case 2:
      return "float";
    case 3:
      return "float";
    case 4:
      return "float";
    default:
      return "invalid index";
  }
}

// ****************************************************************************
// Method: GaussianControlPoint::FieldsEqual
//
// Purpose:
//   This method compares two fields and return true if they are equal.
//
// Note:       Autogenerated by xml2atts.
//
// Programmer: xml2atts
// Creation:   Thu Dec 18 11:24:07 PDT 2003
//
// Modifications:
//
// ****************************************************************************

bool GaussianControlPoint::FieldsEqual(int index_, const AttributeGroup* rhs) const
{
  const GaussianControlPoint& obj = *((const GaussianControlPoint*)rhs);
  bool retval = false;
  switch (index_)
  {
    case 0:
    { // new scope
      retval = (x == obj.x);
    }
    break;
    case 1:
    { // new scope
      retval = (height == obj.height);
    }
    break;
    case 2:
    { // new scope
      retval = (width == obj.width);
    }
    break;
    case 3:
    { // new scope
      retval = (xBias == obj.xBias);
    }
    break;
    case 4:
    { // new scope
      retval = (yBias == obj.yBias);
    }
    break;
    default:
      retval = false;
  }

  return retval;
}

///////////////////////////////////////////////////////////////////////////////
// User-defined methods.
///////////////////////////////////////////////////////////////////////////////
}
