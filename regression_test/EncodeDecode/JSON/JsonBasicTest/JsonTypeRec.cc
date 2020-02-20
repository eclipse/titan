// This C++ source file was generated by the TTCN-3 compiler
// of the TTCN-3 Test Executor version CRL 113 200/6 R6B
// for U-ERICSSON\ethbaat (ethbaat@HU-00000670) on Thu Feb 20 17:43:37 2020

// Copyright (c) 2000-2019 Ericsson Telecom AB

// Do not edit this file unless you know what you are doing.

/* Including header files */

#include "JsonTypeRec.hh"

namespace JsonTypeRec {

/* Literal string constants */

static const unsigned char module_checksum[] = { 0xe6, 0x32, 0x54, 0x5c, 0xbd, 0xf1, 0x21, 0x38, 0xcc, 0xd1, 0x18, 0x90, 0xc1, 0xb3, 0x3e, 0xd7 };

/* Global variable definitions */

const XERdescriptor_t       R_i_xer_ = { {"i>\n", "i>\n"}, {3, 3}, 0 |FORM_UNQUALIFIED, WHITESPACE_PRESERVE,  NULL, &module_object, -1, 0, NULL, NULL, -1, XSD_NONE };
const TTCN_Typedescriptor_t R_i_descr_ = { "@JsonTypeRec.R.i", &INTEGER_ber_, &INTEGER_raw_, &INTEGER_text_, &R_i_xer_, &INTEGER_json_, NULL, NULL, TTCN_Typedescriptor_t::DONTCARE };
UNIVERSAL_CHARSTRING R_i_default_coding("JSON");
// No XER for R
const TTCN_JSONdescriptor_t R_json_ = { FALSE, NULL, FALSE, NULL, FALSE, FALSE, FALSE, 0, NULL };
const TTCN_Typedescriptor_t R_descr_ = { "@JsonTypeRec.R", NULL, NULL, NULL, NULL, &R_json_, NULL, NULL, TTCN_Typedescriptor_t::DONTCARE };
const XERdescriptor_t       R_j_xer_ = { {"j>\n", "j>\n"}, {3, 3}, 0 |FORM_UNQUALIFIED |XER_OPTIONAL, WHITESPACE_PRESERVE,  NULL, &module_object, -1, 0, NULL, NULL, -1, XSD_NONE };
const TTCN_Typedescriptor_t R_j_descr_ = { "@JsonTypeRec.R.j", NULL, &CHARSTRING_raw_, &CHARSTRING_text_, &R_j_xer_, &CHARSTRING_json_, NULL, NULL, TTCN_Typedescriptor_t::DONTCARE };
UNIVERSAL_CHARSTRING R_j_default_coding("JSON");
UNIVERSAL_CHARSTRING R_default_coding("JSON");
TTCN_Module module_object("JsonTypeRec", __DATE__, __TIME__, module_checksum, NULL, NULL, 0U, 4294967295U, 4294967295U, 4294967295U, NULL, 0LU, 0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL);

static const RuntimeVersionChecker ver_checker(  current_runtime_version.requires_major_version_6,
  current_runtime_version.requires_minor_version_6,
  current_runtime_version.requires_patch_level_1,  current_runtime_version.requires_runtime_1);

/* Member functions of C++ classes */

R::R()
{
}

R::R(const INTEGER& par_i,
    const OPTIONAL<CHARSTRING>& par_j)
  :   field_i(par_i),
  field_j(par_j)
{
}

R::R(const R& other_value)
{
if(!other_value.is_bound()) TTCN_error("Copying an unbound value of type @JsonTypeRec.R.");
if (other_value.i().is_bound()) field_i = other_value.i();
else field_i.clean_up();
if (other_value.j().is_bound()) field_j = other_value.j();
else field_j.clean_up();
}

void R::clean_up()
{
field_i.clean_up();
field_j.clean_up();
}

const TTCN_Typedescriptor_t* R::get_descriptor() const { return &R_descr_; }
R& R::operator=(const R& other_value)
{
if (this != &other_value) {
  if(!other_value.is_bound()) TTCN_error("Assignment of an unbound value of type @JsonTypeRec.R.");
  if (other_value.i().is_bound()) field_i = other_value.i();
  else field_i.clean_up();
  if (other_value.j().is_bound()) field_j = other_value.j();
  else field_j.clean_up();
}
return *this;
}

boolean R::operator==(const R& other_value) const
{
return field_i==other_value.field_i
  && field_j==other_value.field_j;
}

boolean R::is_bound() const
{
return (field_i.is_bound())
  || (OPTIONAL_OMIT == field_j.get_selection() || field_j.is_bound());
}
boolean R::is_value() const
{
return field_i.is_value()
  && (OPTIONAL_OMIT == field_j.get_selection() || field_j.is_value());
}
int R::size_of() const
{
  int ret_val = 1;
  if (field_j.ispresent()) ret_val++;
  return ret_val;
}

void R::log() const
{
if (!is_bound()) {
TTCN_Logger::log_event_unbound();
return;
}
TTCN_Logger::log_event_str("{ i := ");
field_i.log();
TTCN_Logger::log_event_str(", j := ");
field_j.log();
TTCN_Logger::log_event_str(" }");
}

void R::set_param(Module_Param& param)
{
  param.basic_check(Module_Param::BC_VALUE, "record value");
  switch (param.get_type()) {
  case Module_Param::MP_Value_List:
    if (2<param.get_size()) {
      param.error("record value of type @JsonTypeRec.R has 2 fields but list value has %d fields", (int)param.get_size());
    }
    if (param.get_size()>0 && param.get_elem(0)->get_type()!=Module_Param::MP_NotUsed) i().set_param(*param.get_elem(0));
    if (param.get_size()>1 && param.get_elem(1)->get_type()!=Module_Param::MP_NotUsed) j().set_param(*param.get_elem(1));
    break;
  case Module_Param::MP_Assignment_List: {
    Vector<bool> value_used(param.get_size());
    value_used.resize(param.get_size(), FALSE);
    for (size_t val_idx=0; val_idx<param.get_size(); val_idx++) {
      Module_Param* const curr_param = param.get_elem(val_idx);
      if (!strcmp(curr_param->get_id()->get_name(), "i")) {
        if (curr_param->get_type()!=Module_Param::MP_NotUsed) {
          i().set_param(*curr_param);
        }
        value_used[val_idx]=TRUE;
      }
    }
    for (size_t val_idx=0; val_idx<param.get_size(); val_idx++) {
      Module_Param* const curr_param = param.get_elem(val_idx);
      if (!strcmp(curr_param->get_id()->get_name(), "j")) {
        if (curr_param->get_type()!=Module_Param::MP_NotUsed) {
          j().set_param(*curr_param);
        }
        value_used[val_idx]=TRUE;
      }
    }
    for (size_t val_idx=0; val_idx<param.get_size(); val_idx++) if (!value_used[val_idx]) {
      Module_Param* const curr_param = param.get_elem(val_idx);
      curr_param->error("Non existent field name in type @JsonTypeRec.R: %s", curr_param->get_id()->get_name());
      break;
    }
  } break;
  default:
    param.type_error("record value", "@JsonTypeRec.R");
  }
}

void R::set_implicit_omit()
{
if (i().is_bound()) i().set_implicit_omit();
if (!j().is_bound()) j() = OMIT_VALUE;
else j().set_implicit_omit();
}

void R::encode_text(Text_Buf& text_buf) const
{
field_i.encode_text(text_buf);
field_j.encode_text(text_buf);
}

void R::decode_text(Text_Buf& text_buf)
{
field_i.decode_text(text_buf);
field_j.decode_text(text_buf);
}

void R::encode(const TTCN_Typedescriptor_t& p_td, TTCN_Buffer& p_buf, TTCN_EncDec::coding_t p_coding, ...) const
{
  va_list pvar;
  va_start(pvar, p_coding);
  switch(p_coding) {
  case TTCN_EncDec::CT_BER: {
    TTCN_EncDec_ErrorContext ec("While BER-encoding type '%s': ", p_td.name);
    unsigned BER_coding=va_arg(pvar, unsigned);
    BER_encode_chk_coding(BER_coding);
    ASN_BER_TLV_t *tlv=BER_encode_TLV(p_td, BER_coding);
    tlv->put_in_buffer(p_buf);
    ASN_BER_TLV_t::destruct(tlv);
    break;}
  case TTCN_EncDec::CT_RAW: {
    TTCN_EncDec_ErrorContext ec("While RAW-encoding type '%s': ", p_td.name);
    if(!p_td.raw)
      TTCN_EncDec_ErrorContext::error_internal
        ("No RAW descriptor available for type '%s'.", p_td.name);
    RAW_enc_tr_pos rp;
    rp.level=0;
    rp.pos=NULL;
    RAW_enc_tree root(FALSE, NULL, &rp, 1, p_td.raw);
    RAW_encode(p_td, root);
    root.put_to_buf(p_buf);
    break;}
  case TTCN_EncDec::CT_TEXT: {
    TTCN_EncDec_ErrorContext ec("While TEXT-encoding type '%s': ", p_td.name);
    if(!p_td.text)
      TTCN_EncDec_ErrorContext::error_internal
      ("No TEXT descriptor available for type '%s'.", p_td.name);
    TEXT_encode(p_td,p_buf);
    break;}
  case TTCN_EncDec::CT_XER: {
    TTCN_EncDec_ErrorContext ec("While XER-encoding type '%s': ", p_td.name);
    unsigned XER_coding=va_arg(pvar, unsigned);
    XER_encode_chk_coding(XER_coding, p_td);
    XER_encode(*(p_td.xer),p_buf, XER_coding, 0, 0, 0);
    p_buf.put_c('\n');
    break;}
  case TTCN_EncDec::CT_JSON: {
    TTCN_EncDec_ErrorContext ec("While JSON-encoding type '%s': ", p_td.name);
    if(!p_td.json)
      TTCN_EncDec_ErrorContext::error_internal
        ("No JSON descriptor available for type '%s'.", p_td.name);
    JSON_Tokenizer tok(va_arg(pvar, int) != 0);
    JSON_encode(p_td, tok);
    p_buf.put_s(tok.get_buffer_length(), (const unsigned char*)tok.get_buffer());
    break;}
  case TTCN_EncDec::CT_OER: {
    TTCN_EncDec_ErrorContext ec("While OER-encoding type '%s': ", p_td.name);
    if(!p_td.oer)
      TTCN_EncDec_ErrorContext::error_internal
        ("No OER descriptor available for type '%s'.", p_td.name);
    OER_encode(p_td, p_buf);
    break;}
  default:
    TTCN_error("Unknown coding method requested to encode type '%s'", p_td.name);
  }
  va_end(pvar);
}

void R::decode(const TTCN_Typedescriptor_t& p_td, TTCN_Buffer& p_buf, TTCN_EncDec::coding_t p_coding, ...)
{
  va_list pvar;
  va_start(pvar, p_coding);
  switch(p_coding) {
  case TTCN_EncDec::CT_BER: {
    TTCN_EncDec_ErrorContext ec("While BER-decoding type '%s': ", p_td.name);
    unsigned L_form=va_arg(pvar, unsigned);
    ASN_BER_TLV_t tlv;
    BER_decode_str2TLV(p_buf, tlv, L_form);
    BER_decode_TLV(p_td, tlv, L_form);
    if(tlv.isComplete) p_buf.increase_pos(tlv.get_len());
    break;}
  case TTCN_EncDec::CT_RAW: {
    TTCN_EncDec_ErrorContext ec("While RAW-decoding type '%s': ", p_td.name);
    if(!p_td.raw)
      TTCN_EncDec_ErrorContext::error_internal
        ("No RAW descriptor available for type '%s'.", p_td.name);
    raw_order_t r_order;
    switch(p_td.raw->top_bit_order) {
    case TOP_BIT_LEFT:
      r_order=ORDER_LSB;
      break;
    case TOP_BIT_RIGHT:
    default:
      r_order=ORDER_MSB;
    }
    int rawr = RAW_decode(p_td, p_buf, p_buf.get_len()*8, r_order);
    if(rawr<0) switch (-rawr) {
    case TTCN_EncDec::ET_INCOMPL_MSG:
    case TTCN_EncDec::ET_LEN_ERR:
      ec.error((TTCN_EncDec::error_type_t)-rawr, "Can not decode type '%s', because incomplete message was received", p_td.name);
      break;
    case 1:
    default:
      ec.error(TTCN_EncDec::ET_INVAL_MSG, "Can not decode type '%s', because invalid message was received", p_td.name);
      break;
    }
    break;}
  case TTCN_EncDec::CT_TEXT: {
    Limit_Token_List limit;
    TTCN_EncDec_ErrorContext ec("While TEXT-decoding type '%s': ", p_td.name);
    if(!p_td.text)
      TTCN_EncDec_ErrorContext::error_internal
        ("No TEXT descriptor available for type '%s'.", p_td.name);
    const unsigned char *b_data=p_buf.get_data();
    int null_added=0;
    if(b_data[p_buf.get_len()-1]!='\0'){
      null_added=1;
      p_buf.set_pos(p_buf.get_len());
      p_buf.put_zero(8,ORDER_LSB);
      p_buf.rewind();
    }
    if(TEXT_decode(p_td,p_buf,limit)<0)
      ec.error(TTCN_EncDec::ET_INCOMPL_MSG,"Can not decode type '%s', because invalid or incomplete message was received", p_td.name);
    if(null_added){
      size_t actpos=p_buf.get_pos();
      p_buf.set_pos(p_buf.get_len()-1);
      p_buf.cut_end();
      p_buf.set_pos(actpos);
    }
    break;}
  case TTCN_EncDec::CT_XER: {
    TTCN_EncDec_ErrorContext ec("While XER-decoding type '%s': ", p_td.name);
    unsigned XER_coding=va_arg(pvar, unsigned);
    XER_encode_chk_coding(XER_coding, p_td);
    XmlReaderWrap reader(p_buf);
    for (int rd_ok=reader.Read(); rd_ok==1; rd_ok=reader.Read()) {
      if (reader.NodeType() == XML_READER_TYPE_ELEMENT) break;
    }
    XER_decode(*(p_td.xer), reader, XER_coding | XER_TOPLEVEL, XER_NONE, 0);
    size_t bytes = reader.ByteConsumed();
    p_buf.set_pos(bytes);
    break;}
  case TTCN_EncDec::CT_JSON: {
    TTCN_EncDec_ErrorContext ec("While JSON-decoding type '%s': ", p_td.name);
    if(!p_td.json)
      TTCN_EncDec_ErrorContext::error_internal
        ("No JSON descriptor available for type '%s'.", p_td.name);
    JSON_Tokenizer tok((const char*)p_buf.get_data(), p_buf.get_len());
    if(JSON_decode(p_td, tok, FALSE)<0)
      ec.error(TTCN_EncDec::ET_INCOMPL_MSG,"Can not decode type '%s', because invalid or incomplete message was received", p_td.name);
    p_buf.set_pos(tok.get_buf_pos());
    break;}
  case TTCN_EncDec::CT_OER: {
    TTCN_EncDec_ErrorContext ec("While OER-decoding type '%s': ", p_td.name);
    if(!p_td.oer)
      TTCN_EncDec_ErrorContext::error_internal
        ("No OER descriptor available for type '%s'.", p_td.name);
     OER_struct p_oer;
    OER_decode(p_td, p_buf, p_oer);
    break;}
  default:
    TTCN_error("Unknown coding method requested to decode type '%s'", p_td.name);
  }
  va_end(pvar);
}

int R::JSON_encode(const TTCN_Typedescriptor_t&, JSON_Tokenizer& p_tok) const
{
  if (!is_bound()) {
    TTCN_EncDec_ErrorContext::error(TTCN_EncDec::ET_UNBOUND,
      "Encoding an unbound value of type @JsonTypeRec.R.");
    return -1;
  }

  int enc_len = p_tok.put_next_token(JSON_TOKEN_OBJECT_START, NULL);

  {
    enc_len += p_tok.put_next_token(JSON_TOKEN_NAME, "i");
    enc_len += field_i.JSON_encode(R_i_descr_, p_tok);
  }

  if (field_j.is_present())
  {
    enc_len += p_tok.put_next_token(JSON_TOKEN_NAME, "j");
    enc_len += field_j.JSON_encode(R_j_descr_, p_tok);
  }

  enc_len += p_tok.put_next_token(JSON_TOKEN_OBJECT_END, NULL);
  return enc_len;
}

int R::JSON_decode(const TTCN_Typedescriptor_t&, JSON_Tokenizer& p_tok, boolean p_silent, int)
{
  json_token_t j_token = JSON_TOKEN_NONE;
  size_t dec_len = p_tok.get_next_token(&j_token, NULL, NULL);
  if (JSON_TOKEN_ERROR == j_token) {
    JSON_ERROR(TTCN_EncDec::ET_INVAL_MSG, JSON_DEC_BAD_TOKEN_ERROR, "");
    return JSON_ERROR_FATAL;
  }
  else if (JSON_TOKEN_OBJECT_START != j_token) {
    return JSON_ERROR_INVALID_TOKEN;
  }
  boolean i_found = FALSE;
  boolean j_found = FALSE;

  while (TRUE) {
    char* fld_name = 0;
    size_t name_len = 0;
    size_t buf_pos = p_tok.get_buf_pos();
    dec_len += p_tok.get_next_token(&j_token, &fld_name, &name_len);
    if (JSON_TOKEN_ERROR == j_token) {
      JSON_ERROR(TTCN_EncDec::ET_INVAL_MSG, JSON_DEC_NAME_TOKEN_ERROR);
      return JSON_ERROR_FATAL;
    }
    else if (JSON_TOKEN_NAME != j_token) {
      p_tok.set_buf_pos(buf_pos);
      break;
    }
    else {
      if (1 == name_len && 0 == strncmp(fld_name, "i", name_len)) {
        i_found = TRUE;
         int ret_val = field_i.JSON_decode(R_i_descr_, p_tok, p_silent);
         if (0 > ret_val) {
           if (JSON_ERROR_INVALID_TOKEN == ret_val) {
             JSON_ERROR(TTCN_EncDec::ET_INVAL_MSG, JSON_DEC_FIELD_TOKEN_ERROR, 1, "i");
           }
           return JSON_ERROR_FATAL;
         }
         dec_len += (size_t)ret_val;
      }
      else if (1 == name_len && 0 == strncmp(fld_name, "j", name_len)) {
        j_found = TRUE;
         int ret_val = field_j.JSON_decode(R_j_descr_, p_tok, p_silent);
         if (0 > ret_val) {
           if (JSON_ERROR_INVALID_TOKEN == ret_val) {
             JSON_ERROR(TTCN_EncDec::ET_INVAL_MSG, JSON_DEC_FIELD_TOKEN_ERROR, 1, "j");
           }
           return JSON_ERROR_FATAL;
         }
         dec_len += (size_t)ret_val;
      }
      else {
        JSON_ERROR(TTCN_EncDec::ET_INVAL_MSG, JSON_DEC_INVALID_NAME_ERROR, (int)name_len, fld_name);
        dec_len += p_tok.get_next_token(&j_token, NULL, NULL);
        if (JSON_TOKEN_NUMBER != j_token && JSON_TOKEN_STRING != j_token &&
            JSON_TOKEN_LITERAL_TRUE != j_token && JSON_TOKEN_LITERAL_FALSE != j_token &&
            JSON_TOKEN_LITERAL_NULL != j_token) {
          JSON_ERROR(TTCN_EncDec::ET_INVAL_MSG, JSON_DEC_FIELD_TOKEN_ERROR, (int)name_len, fld_name);
          return JSON_ERROR_FATAL;
        }
      }
    }
  }

  dec_len += p_tok.get_next_token(&j_token, NULL, NULL);
  if (JSON_TOKEN_OBJECT_END != j_token) {
    JSON_ERROR(TTCN_EncDec::ET_INVAL_MSG, JSON_DEC_OBJECT_END_TOKEN_ERROR, "");
    return JSON_ERROR_FATAL;
  }

  if (!i_found) {
    JSON_ERROR(TTCN_EncDec::ET_INVAL_MSG, JSON_DEC_MISSING_FIELD_ERROR, "i");
    return JSON_ERROR_FATAL;
  }
  if (!j_found) {
    field_j = OMIT_VALUE;
  }
  
  return (int)dec_len;
}

struct R_template::single_value_struct {
INTEGER_template field_i;
CHARSTRING_template field_j;
};

void R_template::set_specific()
{
if (template_selection != SPECIFIC_VALUE) {
template_sel old_selection = template_selection;
clean_up();
single_value = new single_value_struct;
set_selection(SPECIFIC_VALUE);
if (old_selection == ANY_VALUE || old_selection == ANY_OR_OMIT) {
single_value->field_i = ANY_VALUE;
single_value->field_j = ANY_OR_OMIT;
}
}
}

void R_template::copy_value(const R& other_value)
{
single_value = new single_value_struct;
if (other_value.i().is_bound()) {
  single_value->field_i = other_value.i();
} else {
  single_value->field_i.clean_up();
}
if (other_value.j().is_bound()) {
  if (other_value.j().ispresent()) single_value->field_j = other_value.j()();
  else single_value->field_j = OMIT_VALUE;
} else {
  single_value->field_j.clean_up();
}
set_selection(SPECIFIC_VALUE);
}

void R_template::copy_template(const R_template& other_value)
{
switch (other_value.template_selection) {
case SPECIFIC_VALUE:
single_value = new single_value_struct;
if (UNINITIALIZED_TEMPLATE != other_value.i().get_selection()) {
single_value->field_i = other_value.i();
} else {
single_value->field_i.clean_up();
}
if (UNINITIALIZED_TEMPLATE != other_value.j().get_selection()) {
single_value->field_j = other_value.j();
} else {
single_value->field_j.clean_up();
}
case OMIT_VALUE:
case ANY_VALUE:
case ANY_OR_OMIT:
break;
case VALUE_LIST:
case COMPLEMENTED_LIST:
value_list.n_values = other_value.value_list.n_values;
value_list.list_value = new R_template[value_list.n_values];
for (unsigned int list_count = 0; list_count < value_list.n_values; list_count++)
value_list.list_value[list_count].copy_template(other_value.value_list.list_value[list_count]);
break;
default:
TTCN_error("Copying an uninitialized/unsupported template of type @JsonTypeRec.R.");
break;
}
set_selection(other_value);
}

R_template::R_template()
{
}

R_template::R_template(template_sel other_value)
 : Base_Template(other_value)
{
check_single_selection(other_value);
}

R_template::R_template(const R& other_value)
{
copy_value(other_value);
}

R_template::R_template(const OPTIONAL<R>& other_value)
{
switch (other_value.get_selection()) {
case OPTIONAL_PRESENT:
copy_value((const R&)other_value);
break;
case OPTIONAL_OMIT:
set_selection(OMIT_VALUE);
break;
default:
TTCN_error("Creating a template of type @JsonTypeRec.R from an unbound optional field.");
}
}

R_template::R_template(const R_template& other_value)
: Base_Template()
{
copy_template(other_value);
}

R_template::~R_template()
{
clean_up();
}

R_template& R_template::operator=(template_sel other_value)
{
check_single_selection(other_value);
clean_up();
set_selection(other_value);
return *this;
}

R_template& R_template::operator=(const R& other_value)
{
clean_up();
copy_value(other_value);
return *this;
}

R_template& R_template::operator=(const OPTIONAL<R>& other_value)
{
clean_up();
switch (other_value.get_selection()) {
case OPTIONAL_PRESENT:
copy_value((const R&)other_value);
break;
case OPTIONAL_OMIT:
set_selection(OMIT_VALUE);
break;
default:
TTCN_error("Assignment of an unbound optional field to a template of type @JsonTypeRec.R.");
}
return *this;
}

R_template& R_template::operator=(const R_template& other_value)
{
if (&other_value != this) {
clean_up();
copy_template(other_value);
}
return *this;
}

boolean R_template::match(const R& other_value, boolean legacy) const
{
if (!other_value.is_bound()) return FALSE;
switch (template_selection) {
case ANY_VALUE:
case ANY_OR_OMIT:
return TRUE;
case OMIT_VALUE:
return FALSE;
case SPECIFIC_VALUE:
if(!other_value.i().is_bound()) return FALSE;
if(!single_value->field_i.match(other_value.i(), legacy))return FALSE;
if(!other_value.j().is_bound()) return FALSE;
if((other_value.j().ispresent() ? !single_value->field_j.match((const CHARSTRING&)other_value.j(), legacy) : !single_value->field_j.match_omit(legacy)))return FALSE;
return TRUE;
case VALUE_LIST:
case COMPLEMENTED_LIST:
for (unsigned int list_count = 0; list_count < value_list.n_values; list_count++)
if (value_list.list_value[list_count].match(other_value, legacy)) return template_selection == VALUE_LIST;
return template_selection == COMPLEMENTED_LIST;
default:
TTCN_error("Matching an uninitialized/unsupported template of type @JsonTypeRec.R.");
}
return FALSE;
}

boolean R_template::is_bound() const
{
if (template_selection == UNINITIALIZED_TEMPLATE && !is_ifpresent) return FALSE;
if (template_selection != SPECIFIC_VALUE) return TRUE;
return single_value->field_i.is_bound()

 ||(single_value->field_j.is_omit() || single_value->field_j.is_bound())
;
}

boolean R_template::is_value() const
{
if (template_selection != SPECIFIC_VALUE || is_ifpresent) return FALSE;
return single_value->field_i.is_value()
 &&(single_value->field_j.is_omit() || single_value->field_j.is_value());
}

void R_template::clean_up()
{
switch (template_selection) {
case SPECIFIC_VALUE:
delete single_value;
break;
case VALUE_LIST:
case COMPLEMENTED_LIST:
delete [] value_list.list_value;
default:
break;
}
template_selection = UNINITIALIZED_TEMPLATE;
}

R R_template::valueof() const
{
if (template_selection != SPECIFIC_VALUE || is_ifpresent)
TTCN_error("Performing a valueof or send operation on a non-specific template of type @JsonTypeRec.R.");
R ret_val;
if (single_value->field_i.is_bound()) {
ret_val.i() = single_value->field_i.valueof();
}
if (single_value->field_j.is_omit()) ret_val.j() = OMIT_VALUE;
else if (single_value->field_j.is_bound()) {
ret_val.j() = single_value->field_j.valueof();
}
return ret_val;
}

void R_template::set_type(template_sel template_type, unsigned int list_length)
{
if (template_type != VALUE_LIST && template_type != COMPLEMENTED_LIST)
TTCN_error("Setting an invalid list for a template of type @JsonTypeRec.R.");
clean_up();
set_selection(template_type);
value_list.n_values = list_length;
value_list.list_value = new R_template[list_length];
}

R_template& R_template::list_item(unsigned int list_index) const
{
if (template_selection != VALUE_LIST && template_selection != COMPLEMENTED_LIST)
TTCN_error("Accessing a list element of a non-list template of type @JsonTypeRec.R.");
if (list_index >= value_list.n_values)
TTCN_error("Index overflow in a value list template of type @JsonTypeRec.R.");
return value_list.list_value[list_index];
}

INTEGER_template& R_template::i()
{
set_specific();
return single_value->field_i;
}

const INTEGER_template& R_template::i() const
{
if (template_selection != SPECIFIC_VALUE)
TTCN_error("Accessing field i of a non-specific template of type @JsonTypeRec.R.");
return single_value->field_i;
}

CHARSTRING_template& R_template::j()
{
set_specific();
return single_value->field_j;
}

const CHARSTRING_template& R_template::j() const
{
if (template_selection != SPECIFIC_VALUE)
TTCN_error("Accessing field j of a non-specific template of type @JsonTypeRec.R.");
return single_value->field_j;
}

int R_template::size_of() const
{
  if (is_ifpresent) TTCN_error("Performing sizeof() operation on a template of type @JsonTypeRec.R which has an ifpresent attribute.");
  switch (template_selection)
  {
  case SPECIFIC_VALUE:
  {    int ret_val = 1;
      if (single_value->field_j.is_present()) ret_val++;
      return ret_val;
    }
  case VALUE_LIST:
   {
     if (value_list.n_values<1)
       TTCN_error("Internal error: Performing sizeof() operation on a template of type @JsonTypeRec.R containing an empty list.");
      int item_size = value_list.list_value[0].size_of();
      for (unsigned int l_idx = 1; l_idx < value_list.n_values; l_idx++)
      {
        if (value_list.list_value[l_idx].size_of()!=item_size)
          TTCN_error("Performing sizeof() operation on a template of type @JsonTypeRec.R containing a value list with different sizes.");
      }
      return item_size;
    }
  case OMIT_VALUE:
    TTCN_error("Performing sizeof() operation on a template of type @JsonTypeRec.R containing omit value.");
  case ANY_VALUE:
  case ANY_OR_OMIT:
    TTCN_error("Performing sizeof() operation on a template of type @JsonTypeRec.R containing */? value.");
  case COMPLEMENTED_LIST:
    TTCN_error("Performing sizeof() operation on a template of type @JsonTypeRec.R containing complemented list.");
  default:
    TTCN_error("Performing sizeof() operation on an uninitialized/unsupported template of type @JsonTypeRec.R.");
  }
  return 0;
}

void R_template::log() const
{
switch (template_selection) {
case SPECIFIC_VALUE:
TTCN_Logger::log_event_str("{ i := ");
single_value->field_i.log();
TTCN_Logger::log_event_str(", j := ");
single_value->field_j.log();
TTCN_Logger::log_event_str(" }");
break;
case COMPLEMENTED_LIST:
TTCN_Logger::log_event_str("complement");
case VALUE_LIST:
TTCN_Logger::log_char('(');
for (unsigned int list_count = 0; list_count < value_list.n_values; list_count++) {
if (list_count > 0) TTCN_Logger::log_event_str(", ");
value_list.list_value[list_count].log();
}
TTCN_Logger::log_char(')');
break;
default:
log_generic();
}
log_ifpresent();
}

void R_template::log_match(const R& match_value, boolean legacy) const
{
if(TTCN_Logger::VERBOSITY_COMPACT == TTCN_Logger::get_matching_verbosity()){
if(match(match_value, legacy)){
TTCN_Logger::print_logmatch_buffer();
TTCN_Logger::log_event_str(" matched");
} else{
if (template_selection == SPECIFIC_VALUE) {
size_t previous_size = TTCN_Logger::get_logmatch_buffer_len();
if(!single_value->field_i.match(match_value.i(), legacy)){
TTCN_Logger::log_logmatch_info(".i");
single_value->field_i.log_match(match_value.i(), legacy);
TTCN_Logger::set_logmatch_buffer_len(previous_size);
}
if (match_value.j().ispresent()){
if(!single_value->field_j.match(match_value.j(), legacy)){
TTCN_Logger::log_logmatch_info(".j");
single_value->field_j.log_match(match_value.j(), legacy);
TTCN_Logger::set_logmatch_buffer_len(previous_size);
}
} else {
if (!single_value->field_j.match_omit(legacy)){
 TTCN_Logger::log_logmatch_info(".j := omit with ");
TTCN_Logger::print_logmatch_buffer();
single_value->field_j.log();
TTCN_Logger::log_event_str(" unmatched");
TTCN_Logger::set_logmatch_buffer_len(previous_size);
}
}
}else {
TTCN_Logger::print_logmatch_buffer();
match_value.log();
TTCN_Logger::log_event_str(" with ");
log();
TTCN_Logger::log_event_str(" unmatched");
}
}
return;
}
if (template_selection == SPECIFIC_VALUE) {
TTCN_Logger::log_event_str("{ i := ");
single_value->field_i.log_match(match_value.i(), legacy);
TTCN_Logger::log_event_str(", j := ");
if (match_value.j().ispresent()) single_value->field_j.log_match(match_value.j(), legacy);
else {
TTCN_Logger::log_event_str("omit with ");
single_value->field_j.log();
if (single_value->field_j.match_omit(legacy)) TTCN_Logger::log_event_str(" matched");
else TTCN_Logger::log_event_str(" unmatched");
}
TTCN_Logger::log_event_str(" }");
} else {
match_value.log();
TTCN_Logger::log_event_str(" with ");
log();
if (match(match_value, legacy)) TTCN_Logger::log_event_str(" matched");
else TTCN_Logger::log_event_str(" unmatched");
}
}

void R_template::encode_text(Text_Buf& text_buf) const
{
encode_text_base(text_buf);
switch (template_selection) {
case SPECIFIC_VALUE:
single_value->field_i.encode_text(text_buf);
single_value->field_j.encode_text(text_buf);
case OMIT_VALUE:
case ANY_VALUE:
case ANY_OR_OMIT:
break;
case VALUE_LIST:
case COMPLEMENTED_LIST:
text_buf.push_int(value_list.n_values);
for (unsigned int list_count = 0; list_count < value_list.n_values; list_count++)
value_list.list_value[list_count].encode_text(text_buf);
break;
default:
TTCN_error("Text encoder: Encoding an uninitialized/unsupported template of type @JsonTypeRec.R.");
}
}

void R_template::decode_text(Text_Buf& text_buf)
{
clean_up();
decode_text_base(text_buf);
switch (template_selection) {
case SPECIFIC_VALUE:
single_value = new single_value_struct;
single_value->field_i.decode_text(text_buf);
single_value->field_j.decode_text(text_buf);
case OMIT_VALUE:
case ANY_VALUE:
case ANY_OR_OMIT:
break;
case VALUE_LIST:
case COMPLEMENTED_LIST:
value_list.n_values = text_buf.pull_int().get_val();
value_list.list_value = new R_template[value_list.n_values];
for (unsigned int list_count = 0; list_count < value_list.n_values; list_count++)
value_list.list_value[list_count].decode_text(text_buf);
break;
default:
TTCN_error("Text decoder: An unknown/unsupported selection was received in a template of type @JsonTypeRec.R.");
}
}

void R_template::set_param(Module_Param& param)
{
  param.basic_check(Module_Param::BC_TEMPLATE, "record template");
  switch (param.get_type()) {
  case Module_Param::MP_Omit:
    *this = OMIT_VALUE;
    break;
  case Module_Param::MP_Any:
    *this = ANY_VALUE;
    break;
  case Module_Param::MP_AnyOrNone:
    *this = ANY_OR_OMIT;
    break;
  case Module_Param::MP_List_Template:
  case Module_Param::MP_ComplementList_Template: {
    R_template new_temp;
    new_temp.set_type(param.get_type()==Module_Param::MP_List_Template ? VALUE_LIST : COMPLEMENTED_LIST, param.get_size());
    for (size_t p_i=0; p_i<param.get_size(); p_i++) {
      new_temp.list_item(p_i).set_param(*param.get_elem(p_i));
    }
    *this = new_temp;
    break; }
  case Module_Param::MP_Value_List:
    if (2<param.get_size()) {
      param.error("record template of type @JsonTypeRec.R has 2 fields but list value has %d fields", (int)param.get_size());
    }
    if (param.get_size()>0 && param.get_elem(0)->get_type()!=Module_Param::MP_NotUsed) i().set_param(*param.get_elem(0));
    if (param.get_size()>1 && param.get_elem(1)->get_type()!=Module_Param::MP_NotUsed) j().set_param(*param.get_elem(1));
    break;
  case Module_Param::MP_Assignment_List: {
    Vector<bool> value_used(param.get_size());
    value_used.resize(param.get_size(), FALSE);
    for (size_t val_idx=0; val_idx<param.get_size(); val_idx++) {
      Module_Param* const curr_param = param.get_elem(val_idx);
      if (!strcmp(curr_param->get_id()->get_name(), "i")) {
        if (curr_param->get_type()!=Module_Param::MP_NotUsed) {
          i().set_param(*curr_param);
        }
        value_used[val_idx]=TRUE;
      }
    }
    for (size_t val_idx=0; val_idx<param.get_size(); val_idx++) {
      Module_Param* const curr_param = param.get_elem(val_idx);
      if (!strcmp(curr_param->get_id()->get_name(), "j")) {
        if (curr_param->get_type()!=Module_Param::MP_NotUsed) {
          j().set_param(*curr_param);
        }
        value_used[val_idx]=TRUE;
      }
    }
    for (size_t val_idx=0; val_idx<param.get_size(); val_idx++) if (!value_used[val_idx]) {
      Module_Param* const curr_param = param.get_elem(val_idx);
      curr_param->error("Non existent field name in type @JsonTypeRec.R: %s", curr_param->get_id()->get_name());
      break;
    }
  } break;
  default:
    param.type_error("record template", "@JsonTypeRec.R");
  }
  is_ifpresent = param.get_ifpresent();
}

void R_template::check_restriction(template_res t_res, const char* t_name, boolean legacy) const
{
if (template_selection==UNINITIALIZED_TEMPLATE) return;
switch ((t_name&&(t_res==TR_VALUE))?TR_OMIT:t_res) {
case TR_OMIT:
if (template_selection==OMIT_VALUE) return;
case TR_VALUE:
if (template_selection!=SPECIFIC_VALUE || is_ifpresent) break;
single_value->field_i.check_restriction(t_res, t_name ? t_name : "@JsonTypeRec.R");
single_value->field_j.check_restriction(t_res, t_name ? t_name : "@JsonTypeRec.R");
return;
case TR_PRESENT:
if (!match_omit(legacy)) return;
break;
default:
return;
}
TTCN_error("Restriction `%s' on template of type %s violated.", get_res_name(t_res), t_name ? t_name : "@JsonTypeRec.R");
}

boolean R_template::is_present(boolean legacy) const
{
if (template_selection==UNINITIALIZED_TEMPLATE) return FALSE;
return !match_omit(legacy);
}

boolean R_template::match_omit(boolean legacy) const
{
if (is_ifpresent) return TRUE;
switch (template_selection) {
case OMIT_VALUE:
case ANY_OR_OMIT:
return TRUE;
case VALUE_LIST:
case COMPLEMENTED_LIST:
if (legacy) {
for (unsigned int l_idx=0; l_idx<value_list.n_values; l_idx++)
if (value_list.list_value[l_idx].match_omit())
return template_selection==VALUE_LIST;
return template_selection==COMPLEMENTED_LIST;
} // else fall through
default:
return FALSE;
}
return FALSE;
}


/* Bodies of functions, altsteps and testcases */

void R_i_encoder(const INTEGER& input_value, OCTETSTRING& output_stream, const UNIVERSAL_CHARSTRING& coding_name)
{
TTCN_EncDec::coding_t coding_type;
unsigned int extra_options = 0;
TTCN_EncDec::get_coding_from_str(coding_name, &coding_type, &extra_options, TRUE);
if (coding_type != TTCN_EncDec::CT_JSON) {
TTCN_Logger::begin_event_log2str();
coding_name.log();
TTCN_error("Type `integer' does not support %s encoding", (const char*) TTCN_Logger::end_event_log2str());
}
TTCN_Buffer ttcn_buf;
input_value.encode(R_i_descr_, ttcn_buf, coding_type, extra_options);
ttcn_buf.get_string(output_stream);
}

INTEGER R_i_decoder(OCTETSTRING& input_stream, INTEGER& output_value, const UNIVERSAL_CHARSTRING& coding_name)
{
TTCN_EncDec::coding_t coding_type;
unsigned int extra_options = 0;
TTCN_EncDec::get_coding_from_str(coding_name, &coding_type, &extra_options, FALSE);
if (coding_type != TTCN_EncDec::CT_JSON) {
TTCN_Logger::begin_event_log2str();
coding_name.log();
TTCN_error("Type `integer' does not support %s encoding", (const char*) TTCN_Logger::end_event_log2str());
}
TTCN_Buffer ttcn_buf(input_stream);
output_value.decode(R_i_descr_, ttcn_buf, coding_type, extra_options);
switch (TTCN_EncDec::get_last_error_type()) {
case TTCN_EncDec::ET_NONE:
ttcn_buf.cut();
ttcn_buf.get_string(input_stream);
return 0;
case TTCN_EncDec::ET_INCOMPL_MSG:
case TTCN_EncDec::ET_LEN_ERR:
return 2;
default:
return 1;
}
}

void R_j_encoder(const CHARSTRING& input_value, OCTETSTRING& output_stream, const UNIVERSAL_CHARSTRING& coding_name)
{
TTCN_EncDec::coding_t coding_type;
unsigned int extra_options = 0;
TTCN_EncDec::get_coding_from_str(coding_name, &coding_type, &extra_options, TRUE);
if (coding_type != TTCN_EncDec::CT_JSON) {
TTCN_Logger::begin_event_log2str();
coding_name.log();
TTCN_error("Type `charstring' does not support %s encoding", (const char*) TTCN_Logger::end_event_log2str());
}
TTCN_Buffer ttcn_buf;
input_value.encode(R_j_descr_, ttcn_buf, coding_type, extra_options);
ttcn_buf.get_string(output_stream);
}

INTEGER R_j_decoder(OCTETSTRING& input_stream, CHARSTRING& output_value, const UNIVERSAL_CHARSTRING& coding_name)
{
TTCN_EncDec::coding_t coding_type;
unsigned int extra_options = 0;
TTCN_EncDec::get_coding_from_str(coding_name, &coding_type, &extra_options, FALSE);
if (coding_type != TTCN_EncDec::CT_JSON) {
TTCN_Logger::begin_event_log2str();
coding_name.log();
TTCN_error("Type `charstring' does not support %s encoding", (const char*) TTCN_Logger::end_event_log2str());
}
TTCN_Buffer ttcn_buf(input_stream);
output_value.decode(R_j_descr_, ttcn_buf, coding_type, extra_options);
switch (TTCN_EncDec::get_last_error_type()) {
case TTCN_EncDec::ET_NONE:
ttcn_buf.cut();
ttcn_buf.get_string(input_stream);
return 0;
case TTCN_EncDec::ET_INCOMPL_MSG:
case TTCN_EncDec::ET_LEN_ERR:
return 2;
default:
return 1;
}
}

void R_encoder(const R& input_value, OCTETSTRING& output_stream, const UNIVERSAL_CHARSTRING& coding_name)
{
TTCN_EncDec::coding_t coding_type;
unsigned int extra_options = 0;
TTCN_EncDec::get_coding_from_str(coding_name, &coding_type, &extra_options, TRUE);
if (coding_type != TTCN_EncDec::CT_JSON) {
TTCN_Logger::begin_event_log2str();
coding_name.log();
TTCN_error("Type `@JsonTypeRec.R' does not support %s encoding", (const char*) TTCN_Logger::end_event_log2str());
}
TTCN_Buffer ttcn_buf;
input_value.encode(R_descr_, ttcn_buf, coding_type, extra_options);
ttcn_buf.get_string(output_stream);
}

INTEGER R_decoder(OCTETSTRING& input_stream, R& output_value, const UNIVERSAL_CHARSTRING& coding_name)
{
TTCN_EncDec::coding_t coding_type;
unsigned int extra_options = 0;
TTCN_EncDec::get_coding_from_str(coding_name, &coding_type, &extra_options, FALSE);
if (coding_type != TTCN_EncDec::CT_JSON) {
TTCN_Logger::begin_event_log2str();
coding_name.log();
TTCN_error("Type `@JsonTypeRec.R' does not support %s encoding", (const char*) TTCN_Logger::end_event_log2str());
}
TTCN_Buffer ttcn_buf(input_stream);
output_value.decode(R_descr_, ttcn_buf, coding_type, extra_options);
switch (TTCN_EncDec::get_last_error_type()) {
case TTCN_EncDec::ET_NONE:
ttcn_buf.cut();
ttcn_buf.get_string(input_stream);
return 0;
case TTCN_EncDec::ET_INCOMPL_MSG:
case TTCN_EncDec::ET_LEN_ERR:
return 2;
default:
return 1;
}
}


} /* end of namespace */
