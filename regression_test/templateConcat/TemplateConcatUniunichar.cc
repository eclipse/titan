// This C++ source file was generated by the TTCN-3 compiler
// of the TTCN-3 Test Executor version CRL 113 200/6 R1A
// for Botond Baranyi (ebotbar@ebotbar-VirtualBox) on Wed Mar 22 12:14:17 2017

// Copyright (c) 2000-2017 Ericsson Telecom AB

// Do not edit this file unless you know what you are doing.

/* Including header files */

#include "TemplateConcatUniunichar.hh"

namespace TemplateConcatUniunichar {

/* Prototypes of static functions */

static void pre_init_module();
static void post_init_module();
static void module_control_part();

/* Literal string constants */

static const universal_char us_4_uchars[] = { { 0, 0, 1, 2 }, { 0, 0, 0, 241 } },
us_6_uchars[] = { { 0, 0, 1, 117 }, { 0, 0, 1, 2 }, { 0, 0, 1, 117 } },
us_2_uchars[] = { { 0, 1, 2, 3 }, { 0, 0, 1, 2 } };
static const UNIVERSAL_CHARSTRING us_3(0, 0, 0, 241),
us_1(0, 0, 1, 2),
us_4(2, us_4_uchars),
us_5(0, 0, 1, 117),
us_6(3, us_6_uchars),
us_0(0, 1, 2, 3),
us_2(2, us_2_uchars);
static const unsigned char module_checksum[] = { 0x72, 0xe5, 0x6f, 0x46, 0xb5, 0x5e, 0x1d, 0xe5, 0x33, 0xc6, 0x5e, 0xb9, 0xb2, 0x98, 0xec, 0xb4 };

/* Global variable definitions */

// _T_c__unichar_descr_ not needed, use UNIVERSAL_CHARSTRING_descr_
static UNIVERSAL_CHARSTRING const_c__unichar;
const UNIVERSAL_CHARSTRING& c__unichar = const_c__unichar;
// _T_t__unichar_descr_ not needed, use UNIVERSAL_CHARSTRING_descr_
static UNIVERSAL_CHARSTRING_template template_t__unichar;
const UNIVERSAL_CHARSTRING_template& t__unichar = template_t__unichar;
// _T_t__unichar1_descr_ not needed, use UNIVERSAL_CHARSTRING_descr_
static UNIVERSAL_CHARSTRING_template template_t__unichar1;
const UNIVERSAL_CHARSTRING_template& t__unichar1 = template_t__unichar1;
// _T_c__unichar1__exp_descr_ not needed, use UNIVERSAL_CHARSTRING_descr_
static UNIVERSAL_CHARSTRING const_c__unichar1__exp;
const UNIVERSAL_CHARSTRING& c__unichar1__exp = const_c__unichar1__exp;
// _T_t__unichar2_descr_ not needed, use UNIVERSAL_CHARSTRING_descr_
static UNIVERSAL_CHARSTRING_template template_t__unichar2;
const UNIVERSAL_CHARSTRING_template& t__unichar2 = template_t__unichar2;
// _T_c__unichar2__exp_descr_ not needed, use UNIVERSAL_CHARSTRING_descr_
static UNIVERSAL_CHARSTRING const_c__unichar2__exp;
const UNIVERSAL_CHARSTRING& c__unichar2__exp = const_c__unichar2__exp;
// _T_t__unichar3_descr_ not needed, use UNIVERSAL_CHARSTRING_descr_
static UNIVERSAL_CHARSTRING_template template_t__unichar3;
const UNIVERSAL_CHARSTRING_template& t__unichar3 = template_t__unichar3;
// _T_c__unichar3__exp_descr_ not needed, use UNIVERSAL_CHARSTRING_descr_
static UNIVERSAL_CHARSTRING const_c__unichar3__exp;
const UNIVERSAL_CHARSTRING& c__unichar3__exp = const_c__unichar3__exp;
// _T_t__unichar4_descr_ not needed, use UNIVERSAL_CHARSTRING_descr_
static UNIVERSAL_CHARSTRING_template template_t__unichar4;
const UNIVERSAL_CHARSTRING_template& t__unichar4 = template_t__unichar4;
// _T_c__unichar4__exp_descr_ not needed, use UNIVERSAL_CHARSTRING_descr_
static UNIVERSAL_CHARSTRING const_c__unichar4__exp;
const UNIVERSAL_CHARSTRING& c__unichar4__exp = const_c__unichar4__exp;
// written by generate_functions in AST.cc at 1132
TTCN_Module module_object("TemplateConcatUniunichar", __DATE__, __TIME__, module_checksum, pre_init_module, NULL, 0U, 4294967295U, 4294967295U, 4294967295U, NULL, 0LU, 0, post_init_module, NULL, NULL, NULL, NULL, NULL, module_control_part);

static const RuntimeVersionChecker ver_checker(  current_runtime_version.requires_major_version_6,
  current_runtime_version.requires_minor_version_1,
  current_runtime_version.requires_patch_level_0,  current_runtime_version.requires_runtime_1);

/* Bodies of functions, altsteps and testcases */

verdicttype testcase_tc__unichar__t__values(boolean has_timer, double timer_value)
{
TTCN_Runtime::check_begin_testcase(has_timer, timer_value);
TTCN_Location current_location("TemplateConcatUnichar.ttcn", 34, TTCN_Location::LOCATION_TESTCASE, "tc_unichar_t_values");
try {
TTCN_Runtime::begin_testcase("TemplateConcatUniunichar", "tc_unichar_t_values", "Types", "CT", "Types", "CT", has_timer, timer_value);
current_location.update_lineno(35);
/* TemplateConcatUnichar.ttcn, line 35 */
if (((TTCN_Logger::begin_event_log2str(),t__unichar1.log(),TTCN_Logger::end_event_log2str()) != (TTCN_Logger::begin_event_log2str(),c__unichar1__exp.log(),TTCN_Logger::end_event_log2str()))) {
current_location.update_lineno(36);
/* TemplateConcatUnichar.ttcn, line 36 */
TTCN_Runtime::setverdict(FAIL,(TTCN_Logger::begin_event_log2str(),TTCN_Logger::log_event_str("Expected: "),c__unichar1__exp.log(),TTCN_Logger::log_event_str(", got: "),t__unichar1.log(),TTCN_Logger::end_event_log2str()));
}
else {
current_location.update_lineno(38);
/* TemplateConcatUnichar.ttcn, line 38 */
if (((TTCN_Logger::begin_event_log2str(),t__unichar2.log(),TTCN_Logger::end_event_log2str()) != (TTCN_Logger::begin_event_log2str(),c__unichar2__exp.log(),TTCN_Logger::end_event_log2str()))) {
current_location.update_lineno(39);
/* TemplateConcatUnichar.ttcn, line 39 */
TTCN_Runtime::setverdict(FAIL,(TTCN_Logger::begin_event_log2str(),TTCN_Logger::log_event_str("Expected: "),c__unichar2__exp.log(),TTCN_Logger::log_event_str(", got: "),t__unichar2.log(),TTCN_Logger::end_event_log2str()));
}
else {
current_location.update_lineno(41);
/* TemplateConcatUnichar.ttcn, line 41 */
if (((TTCN_Logger::begin_event_log2str(),t__unichar3.log(),TTCN_Logger::end_event_log2str()) != (TTCN_Logger::begin_event_log2str(),c__unichar3__exp.log(),TTCN_Logger::end_event_log2str()))) {
current_location.update_lineno(42);
/* TemplateConcatUnichar.ttcn, line 42 */
TTCN_Runtime::setverdict(FAIL,(TTCN_Logger::begin_event_log2str(),TTCN_Logger::log_event_str("Expected: "),c__unichar3__exp.log(),TTCN_Logger::log_event_str(", got: "),t__unichar3.log(),TTCN_Logger::end_event_log2str()));
}
else {
current_location.update_lineno(44);
/* TemplateConcatUnichar.ttcn, line 44 */
if (((TTCN_Logger::begin_event_log2str(),t__unichar4.log(),TTCN_Logger::end_event_log2str()) != (TTCN_Logger::begin_event_log2str(),c__unichar4__exp.log(),TTCN_Logger::end_event_log2str()))) {
current_location.update_lineno(45);
/* TemplateConcatUnichar.ttcn, line 45 */
TTCN_Runtime::setverdict(FAIL,(TTCN_Logger::begin_event_log2str(),TTCN_Logger::log_event_str("Expected: "),c__unichar4__exp.log(),TTCN_Logger::log_event_str(", got: "),t__unichar4.log(),TTCN_Logger::end_event_log2str()));
}
else {
current_location.update_lineno(48);
/* TemplateConcatUnichar.ttcn, line 48 */
TTCN_Runtime::setverdict(PASS);
}
}
}
}
} catch (const TC_Error& tc_error) {
} catch (const TC_End& tc_end) {
TTCN_Logger::log_str(TTCN_FUNCTION, "Test case tc_unichar_t_values was stopped.");
}
return TTCN_Runtime::end_testcase();
}


/* Bodies of static functions */

static void pre_init_module()
{
TTCN_Location current_location("TemplateConcatUnichar.ttcn", 0, TTCN_Location::LOCATION_UNKNOWN, "TemplateConcatUniunichar");
Types::module_object.pre_init_module();
current_location.update_lineno(17);
/* TemplateConcatUnichar.ttcn, line 17 */
const_c__unichar = us_0;
current_location.update_lineno(22);
/* TemplateConcatUnichar.ttcn, line 22 */
const_c__unichar1__exp = us_2;
current_location.update_lineno(25);
/* TemplateConcatUnichar.ttcn, line 25 */
const_c__unichar2__exp = us_2;
current_location.update_lineno(28);
/* TemplateConcatUnichar.ttcn, line 28 */
const_c__unichar3__exp = us_4;
current_location.update_lineno(31);
/* TemplateConcatUnichar.ttcn, line 31 */
const_c__unichar4__exp = us_6;
module_object.add_testcase_nonpard("tc_unichar_t_values", testcase_tc__unichar__t__values);
}

static void post_init_module()
{
TTCN_Location current_location("TemplateConcatUnichar.ttcn", 0, TTCN_Location::LOCATION_UNKNOWN, "TemplateConcatUniunichar");
Types::module_object.post_init_module();
current_location.update_lineno(19);
/* TemplateConcatUnichar.ttcn, line 19 */
template_t__unichar = us_1;
current_location.update_lineno(21);
/* TemplateConcatUnichar.ttcn, line 21 */
template_t__unichar1 = us_0 + us_1;
current_location.update_lineno(24);
/* TemplateConcatUnichar.ttcn, line 24 */
template_t__unichar2 = us_0 + us_1;
current_location.update_lineno(27);
/* TemplateConcatUnichar.ttcn, line 27 */
template_t__unichar3 = t__unichar + us_3;
current_location.update_lineno(30);
/* TemplateConcatUnichar.ttcn, line 30 */
template_t__unichar4 = us_5 + t__unichar + us_5;
}

static void module_control_part()
{
TTCN_Location current_location("TemplateConcatUnichar.ttcn", 167, TTCN_Location::LOCATION_CONTROLPART, "TemplateConcatUniunichar");
TTCN_Runtime::begin_controlpart("TemplateConcatUniunichar");
current_location.update_lineno(168);
/* TemplateConcatUnichar.ttcn, line 168 */
testcase_tc__unichar__t__values(FALSE, 0.0);
TTCN_Runtime::end_controlpart();
}


} /* end of namespace */
