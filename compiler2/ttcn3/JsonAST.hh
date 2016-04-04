/******************************************************************************
 * Copyright (c) 2000-2016 Ericsson Telecom AB
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors:
 *   Balasko, Jeno
 *   Baranyi, Botond
 *
 ******************************************************************************/
#ifndef JSONAST_HH_
#define	JSONAST_HH_

#include "../datatypes.h"
#include "../vector.hh"

class JsonSchemaExtension {
private:
  void init(const char* p_key, const char* p_value);
public:
  char* key;
  char* value;
  
  JsonSchemaExtension(const char* p_key, const char* p_value) { init(p_key, p_value); }
  JsonSchemaExtension(const JsonSchemaExtension& x) { init(x.key, x.value); }
  ~JsonSchemaExtension();
};

class JsonAST {
  private:
    void init_JsonAST();
    JsonAST(const JsonAST&);
    JsonAST& operator=(const JsonAST&);
  public:
    boolean omit_as_null;
    char* alias;
    boolean as_value;
    char* default_value;
    vector<JsonSchemaExtension> schema_extensions;
    boolean metainfo_unbound;
  
    JsonAST() { init_JsonAST(); }
    JsonAST(const JsonAST *other_val);
    ~JsonAST();
    
    void print_JsonAST() const;
};

#endif	/* JSONAST_HH_ */

