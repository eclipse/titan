/******************************************************************************
 * Copyright (c) 2000-2016 Ericsson Telecom AB
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors:
 *   Szabo, Bence Janos
 *
 ******************************************************************************/
#include "Constant.hh"


Constant::Constant(SimpleType* p_parent, Mstring p_type, Mstring p_name, Mstring p_value)
  : RootType(p_parent->getParser(), p_parent->getModule(), p_parent->getConstruct())
{
  parent = p_parent;
  type.upload(p_type);
  name.upload(p_name);
  value = p_value;
}

void Constant::nameConversion(const NameConversionMode conversion_mode, const List<NamespaceType> & ns) {
  switch (conversion_mode) {
    case nameMode: {
      expstring_t tmpname = NULL;
      tmpname = mputprintf(tmpname, "c_%s_%u", name.convertedValue.c_str(), parent->getModule()->getConstCounter());
      parent->getModule()->increaseConstCounter();
      name.upload(Mstring(tmpname));
      Free(tmpname);
      break; }
    case typeMode:
      nameConversion_types(ns);
      break;
    case fieldMode:
      break;
  }
}

void Constant::nameConversion_types(const List<NamespaceType> & ns) {

  Mstring prefix = type.convertedValue.getPrefix(':');
  Mstring value_str = type.convertedValue.getValueWithoutPrefix(':');

  Mstring uri;
  for (List<NamespaceType>::iterator namesp = ns.begin(); namesp; namesp = namesp->Next) {
    if (prefix == namesp->Data.prefix) {
      uri = namesp->Data.uri;
      break;
    }
  }

  QualifiedName tmp(uri, value_str);

  QualifiedNames::iterator origTN = TTCN3ModuleInventory::getInstance().getTypenames().begin();
  for (; origTN; origTN = origTN->Next) {
    if (tmp == origTN->Data) {
      QualifiedName tmp_name(module->getTargetNamespace(), name.convertedValue);
      if (tmp_name == origTN->Data)
        continue; // get a new type name
      else
        break;
    }
  }
  if (origTN != NULL) {
    setTypeValue(origTN->Data.name);
    // This      ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ is always value_str
    // The only effect here is to remove the "xs:" prefix from type.convertedValue,
    // otherwise the new value is always the same as the old.
  } else {
    Mstring res, var;
    XSDName2TTCN3Name(value_str, TTCN3ModuleInventory::getInstance().getTypenames(), type_reference_name, res, var);
    setTypeValue(res);
  }
}

void Constant::finalModification() {
  Mstring tmp_type;
  // Find the buildInType which the type is derived from
  if (isBuiltInType(type.originalValueWoPrefix)) {
    tmp_type = type.originalValueWoPrefix;
  } else if (!parent->getReference().empty() && parent->getReference().get_ref() != NULL) {
    SimpleType * st = (SimpleType*)parent->getReference().get_ref();
    if (isBuiltInType(st->getBuiltInBase())) {
      tmp_type = st->getBuiltInBase();
    } else {
      tmp_type = type.originalValueWoPrefix;
    }
  } else {
    tmp_type = type.originalValueWoPrefix;
  }
  parent->dump(2);
  fprintf(stderr, "tmp %s %s\n", tmp_type.c_str(), parent->getBuiltInBase().c_str());
  
  
  // String and time types need the quote character around the value
  if (isStringType(tmp_type) ||
      isTimeType(tmp_type)) {
    value = Mstring("\"") + value + Mstring("\"");
    fprintf(stderr, "value %s\n", value.c_str());
  } else if (isFloatType(tmp_type)) {
    // Float types need the .0 if it is a single integer or 
    // translate special float values to TTCN3.
    char * hasDot = strchr(const_cast<char*>(value.c_str()), '.');
    if (value == "INF") {
      value = "infinity";
    } else if (value == "-INF") {
      value = "-infinity";
    } else if (value == "NaN") {
      value = "not_a_number";
    } else if (hasDot == NULL) {
      value = value + Mstring(".0");
    }
  } else if (isBooleanType(tmp_type)) {
    if (value == "1") {
      value = "true";
    } else if (value == "0") {
      value = "false";
    }
  }
}

void Constant::UniquizeConstantList(List<RootType*> constantDefs) {
  for (List<RootType*>::iterator it = constantDefs.begin(); it; it = it->Next) {
    for (List<RootType*>::iterator it2 = it->Next; it2; it2 = it2->Next) {
      if (*(Constant*)(it->Data) == *(Constant*)(it2->Data)) {
        it2->Data->dump(2);
        it->Data->dump(2);
        *(Constant*)it2->Data = *(Constant*)(it->Data);
        it2->Data->setInvisible();
      }
    }
  }
}

void Constant::printToFile(FILE * file) {
  if (!visible) return;
  fprintf(file, "const %s %s = %s;\n\n\n",
    type.convertedValue.c_str(),
    name.convertedValue.c_str(),
    value.c_str());
}

void Constant::dump(const unsigned int depth) const {
  fprintf(stderr, "%*s Constant '%s' -> '%s' with value: '%s' at %p\n", depth * 2, "",
    name.originalValueWoPrefix.c_str(), name.convertedValue.c_str(), value.c_str(),
    (const void*) this);
}