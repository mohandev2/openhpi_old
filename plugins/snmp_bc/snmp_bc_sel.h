/*      -*- linux-c -*-
 *
 * (C) Copyright IBM Corp. 2003, 2004
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  This
 * file and program are licensed under a BSD style license.  See
 * the Copying file included with the OpenHPI distribution for
 * full licensing terms.
 *
 * Author(s):
 *      Renier Morales <renierm@users.sf.net>
 *      Sean Dague <http://dague.net/sean>
 */

#ifndef __SNMP_BC_SEL_H
#define __SNMP_BC_SEL_H

#define clearEventLogExecute 1
#define SNMP_BC_MAX_SEL_ID_LENGTH 20
#define SNMP_BC_MAX_SEL_ENTRY_LENGTH 256

typedef struct {
        struct tm time;
        SaHpiSeverityT sev;
        char source[SNMP_BC_MAX_SEL_ID_LENGTH];
        char sname[SNMP_BC_MAX_SEL_ID_LENGTH];
        char text[SNMP_BC_MAX_SEL_ENTRY_LENGTH];
} bc_sel_entry;


/* 
 * Function Prototyping
 */

/* FIXME:: All of these should return SaErrorT */
SaErrorT snmp_bc_parse_sel_entry(struct oh_handler_state *handle,
				 char *logstr,
				 bc_sel_entry *sel);

int snmp_bc_get_sel_entry(void *hnd,
			  SaHpiResourceIdT id,
			  SaHpiEventLogEntryIdT current,
                          SaHpiEventLogEntryIdT *prev,
			  SaHpiEventLogEntryIdT *next,
                          SaHpiEventLogEntryT *entry);

int snmp_bc_get_sel_info(void *hnd, SaHpiResourceIdT id, SaHpiEventLogInfoT *info);
int snmp_bc_set_sel_time(void *hnd, SaHpiResourceIdT id, SaHpiTimeT time);
int snmp_bc_add_sel_entry(void *hnd, SaHpiResourceIdT id, const SaHpiEventT *Event);
int snmp_bc_check_selcache(void *hnd, SaHpiResourceIdT id, SaHpiEventLogEntryIdT entryId);
int snmp_bc_build_selcache(void *hnd, SaHpiResourceIdT id);
int snmp_bc_sel_read_add (void *hnd, SaHpiResourceIdT id, SaHpiEventLogEntryIdT sid);
int snmp_bc_selcache_sync(void *hnd, SaHpiResourceIdT id, SaHpiEventLogEntryIdT entryId);
SaErrorT snmp_bc_clear_sel(void *hnd, SaHpiResourceIdT id);

#endif
