/******************************************************************************
 * Copyright (c) 2000-2016 Ericsson Telecom AB
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors:
 *   Balasko, Jeno
 *   Zalanyi, Balazs Andor
 *
 ******************************************************************************/
#include  "BerAST.hh"

const char* BerAST::encode_string[] = {
    "BER_ENCODE_CER",
    "BER_ENCODE_DER"
};

const char* BerAST::decode_string[] = {
    "BER_ACCEPT_SHORT",
    "BER_ACCEPT_LONG",
    "BER_ACCEPT_INDEFINITE",
    "BER_ACCEPT_DEFINITE",
    "BER_ACCEPT_ALL"
};

BerAST::BerAST() :
  encode_param(DER),
  decode_param(ACCEPT_ALL)
{
}

const char* BerAST::get_encode_str() {
  return encode_string[encode_param];
}

const char* BerAST::get_decode_str() {
  return decode_string[decode_param];
}
