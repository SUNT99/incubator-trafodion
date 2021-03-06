/**********************************************************************
// @@@ START COPYRIGHT @@@
//
// Licensed to the Apache Software Foundation (ASF) under one
// or more contributor license agreements.  See the NOTICE file
// distributed with this work for additional information
// regarding copyright ownership.  The ASF licenses this file
// to you under the Apache License, Version 2.0 (the
// "License"); you may not use this file except in compliance
// with the License.  You may obtain a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing,
// software distributed under the License is distributed on an
// "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied.  See the License for the
// specific language governing permissions and limitations
// under the License.
//
// @@@ END COPYRIGHT @@@
**********************************************************************/
#ifndef ELEMDDLFILEATTRBUFFERED_H
#define ELEMDDLFILEATTRBUFFERED_H
/* -*-C++-*-
******************************************************************************
*
* File:         ElemDDLFileAttrBuffered.h
* Description:  class for Buffered File Attribute (parse node) elements in
*               DDL statements
*
*               
* Created:      4/21/95
* Language:     C++
*
*
*
*
******************************************************************************
*/


#include "ElemDDLFileAttr.h"

// -----------------------------------------------------------------------
// contents of this file
// -----------------------------------------------------------------------
class ElemDDLFileAttrBuffered;

// -----------------------------------------------------------------------
// forward references
// -----------------------------------------------------------------------
// None.

// -----------------------------------------------------------------------
// Buffered File Attribute (parse node) elements in DDL statements
// -----------------------------------------------------------------------

class ElemDDLFileAttrBuffered : public ElemDDLFileAttr
{

public:

  // default constructor
  ElemDDLFileAttrBuffered(NABoolean bufferedSpec = TRUE)
                      : ElemDDLFileAttr(ELM_FILE_ATTR_BUFFERED_ELEM),
                        isBuffered_(bufferedSpec)
  {
  }

  // virtual destructor
  virtual ~ElemDDLFileAttrBuffered();

  // cast
  virtual ElemDDLFileAttrBuffered * castToElemDDLFileAttrBuffered();

  // accessor
  const NABoolean
  getIsBuffered() const
  {
    return isBuffered_;
  }

  // member functions for tracing
  virtual const NAString getText() const;
  virtual const NAString displayLabel1() const;

  // method for building text
  virtual NAString getSyntax() const;


private:

  NABoolean isBuffered_;

}; // class ElemDDLFileAttrBuffered

#endif /* ELEMDDLFILEATTRBUFFERED_H */
