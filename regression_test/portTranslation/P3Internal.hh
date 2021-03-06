/******************************************************************************
 * Copyright (c) 2000-2021 Ericsson Telecom AB
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v2.0
 * which accompanies this distribution, and is available at
 * https://www.eclipse.org/org/documents/epl-2.0/EPL-2.0.html
 *
 * Contributors:
 *   Szabo, Bence Janos
 *
 ******************************************************************************/

#ifndef P3Internal_HH
#define P3Internal_HH

#include "PortTranslationInternal.hh"

namespace PortTranslationInternal {

class P3Internal : public P3Internal_BASE {
public:
	P3Internal(const char *par_port_name = NULL);
	~P3Internal();

	void set_parameter(const char *parameter_name,
		const char *parameter_value);

private:
	/* void Handle_Fd_Event(int fd, boolean is_readable,
		boolean is_writable, boolean is_error); */
	void Handle_Fd_Event_Error(int fd);
	void Handle_Fd_Event_Writable(int fd);
	void Handle_Fd_Event_Readable(int fd);
	/* void Handle_Timeout(double time_since_last_call); */
protected:
	void user_map(const char *system_port);
	void user_unmap(const char *system_port);

	void user_start();
	void user_stop();

	void outgoing_send(const MyRec& send_par);
	void outgoing_send(const BITSTRING& send_par);
	void outgoing_send(const OCTETSTRING& send_par);
	void outgoing_send(const HEXSTRING& send_par);
	void outgoing_send(const INTEGER& send_par);
};

} /* end of namespace */

#endif
