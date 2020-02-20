// This C++ header file was generated by the TTCN-3 compiler
// of the TTCN-3 Test Executor version CRL 113 200/6 R6B
// for U-ERICSSON\ethbaat (ethbaat@HU-00000670) on Thu Feb 20 17:43:37 2020

// Copyright (c) 2000-2019 Ericsson Telecom AB

// Do not edit this file unless you know what you are doing.

#ifndef JsonBasicTypeF_HH
#define JsonBasicTypeF_HH

#ifdef TITAN_RUNTIME_2
#error Generated code does not match with used runtime.\
 Code was generated without -R option but -DTITAN_RUNTIME_2 was used.
#endif

/* Header file includes */

#include <TTCN3.hh>

#if TTCN3_VERSION != 60601
#error Version mismatch detected.\
 Please check the version of the TTCN-3 compiler and the base library.\
 Run make clean and rebuild the project if the version of the compiler changed recently.
#endif

#ifndef WIN32
#error This file should be compiled on WIN32
#endif

namespace JsonBasicTypeF {

/* Type definitions */

typedef FLOAT F__json;
typedef FLOAT_template F__json_template;

/* Function prototypes */

extern void F__json_encoder(const FLOAT& input_value, OCTETSTRING& output_stream, const UNIVERSAL_CHARSTRING& coding_name);
extern INTEGER F__json_decoder(OCTETSTRING& input_stream, FLOAT& output_value, const UNIVERSAL_CHARSTRING& coding_name);

/* Global variable declarations */

extern const XERdescriptor_t F__json_xer_;
extern const TTCN_OERdescriptor_t F__json_oer_;
extern const TTCN_Typedescriptor_t F__json_descr_;
extern UNIVERSAL_CHARSTRING F__json_default_coding;
extern TTCN_Module module_object;

} /* end of namespace */

#endif
