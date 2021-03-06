/*
 * Copyright (C) 2015, 2016 Cumulus Networks, Inc.  All rights reserved.
 * All Rights Reserved.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * Author: Dave Olson <olson@cumulusnetworks.com>
 */


/*
 * Send an accounting record to a TACACS+ server.
 *
 * The taskid argument must be zero for start of command, and the
 * value returned by the start call must be passed to the end of command
 * call, so the tacacs task_id in the accounting log will match.
 *
 * The TACACS+ protocol limits the accounting record to approximately 240
 * characters, so the cmdmsg buffer may be truncated in the server log.
 *
 * Accounting records are only sent if the process is a descendent of
 * a login process authenticated by a TACACS+ server via the libpam-tacplus
 * package with the libtacmap_plus enhancements.
 */
int send_tacacs_acct(int taskid, const char *cmdmsg);
