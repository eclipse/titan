#!/usr/bin/perl -wpli.orig
###############################################################################
# Copyright (c) 2000-2019 Ericsson Telecom AB
# All rights reserved. This program and the accompanying materials
# are made available under the terms of the Eclipse Public License v2.0
# which accompanies this distribution, and is available at
# https://www.eclipse.org/org/documents/epl-2.0/EPL-2.0.html
#
# Contributors:
#   Balasko, Jeno
#   Raduly, Csaba
#
###############################################################################

use strict;

s!\\n!\n!g;
s!\\t!\t!g;
s!\("<!("\n<!g;

s!{ {!{\n  {!g;
s!}, {!},\n  {!g;
s!} }!}\n}!g;
