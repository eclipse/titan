#!/bin/bash
###############################################################################
# Copyright (c) 2000-2016 Ericsson Telecom AB
# All rights reserved. This program and the accompanying materials
# are made available under the terms of the Eclipse Public License v1.0
# which accompanies this distribution, and is available at
# http://www.eclipse.org/legal/epl-v10.html
#
# Contributors:
#   Szabo, Bence Janos
#
###############################################################################


#Running makefilegen command with splitting types
../../Install/bin/makefilegen -f -S -o TempMakefile -U none
if [ $? -ne 0 ]; then
  echo "Makefilegen split test failed! Overall verdict: fail"
  exit 1
fi

../../Install/bin/makefilegen -f -S -o TempMakefile -U type
if [ $? -ne 0 ]; then
  echo "Makefilegen split test failed! Overall verdict: fail"
  exit 1
fi

../../Install/bin/makefilegen -f -S -o TempMakefile -U 2
if [ $? -ne 0 ]; then
  echo "Makefilegen split test failed! Overall verdict: fail"
  exit 1
fi

# Negative tests
../../Install/bin/makefilegen -f -S -o TempMakefile -U 1a
if [ $? -ne 1 ]; then
  echo "Makefilegen split test failed! Overall verdict: fail"
  exit 1
fi

../../Install/bin/makefilegen -f -S -o TempMakefile -U a1
if [ $? -ne 1 ]; then
  echo "Makefilegen split test failed! Overall verdict: fail"
  exit 1
fi
