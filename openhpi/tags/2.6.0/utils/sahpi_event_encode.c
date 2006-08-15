/*      -*- linux-c -*-
 *
 * (C) Copyright IBM Corp. 2004
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  This
 * file and program are licensed under a BSD style license.  See
 * the Copying file included with the OpenHPI distribution for
 * full licensing terms.
 *
 * Author(s):
 *      Steve Sherman <stevees@us.ibm.com> 
 */

/******************************************************************* 
 * WARNING! This file is auto-magically generated by:
 *          ./SaHpi2code.pl. 
 *          Do not change this file manually. Update script instead
 *******************************************************************/

#include <SaHpi.h>
#include <oh_utils.h>

oh_categorystate_map state_global_strings[] = {
{SAHPI_EC_UNSPECIFIED, SAHPI_ES_UNSPECIFIED, "UNSPECIFIED"},
};

oh_categorystate_map state_strings[] = {
{SAHPI_EC_LIMIT, SAHPI_ES_LIMIT_NOT_EXCEEDED, "LIMIT_NOT_EXCEEDED"},
{SAHPI_EC_LIMIT, SAHPI_ES_LIMIT_EXCEEDED, "LIMIT_EXCEEDED"},
{SAHPI_EC_SENSOR_SPECIFIC, SAHPI_ES_STATE_00, "STATE_00"},
{SAHPI_EC_SENSOR_SPECIFIC, SAHPI_ES_STATE_01, "STATE_01"},
{SAHPI_EC_SENSOR_SPECIFIC, SAHPI_ES_STATE_02, "STATE_02"},
{SAHPI_EC_SENSOR_SPECIFIC, SAHPI_ES_STATE_03, "STATE_03"},
{SAHPI_EC_SENSOR_SPECIFIC, SAHPI_ES_STATE_04, "STATE_04"},
{SAHPI_EC_SENSOR_SPECIFIC, SAHPI_ES_STATE_05, "STATE_05"},
{SAHPI_EC_SENSOR_SPECIFIC, SAHPI_ES_STATE_06, "STATE_06"},
{SAHPI_EC_SENSOR_SPECIFIC, SAHPI_ES_STATE_07, "STATE_07"},
{SAHPI_EC_SENSOR_SPECIFIC, SAHPI_ES_STATE_08, "STATE_08"},
{SAHPI_EC_SENSOR_SPECIFIC, SAHPI_ES_STATE_09, "STATE_09"},
{SAHPI_EC_SENSOR_SPECIFIC, SAHPI_ES_STATE_10, "STATE_10"},
{SAHPI_EC_SENSOR_SPECIFIC, SAHPI_ES_STATE_11, "STATE_11"},
{SAHPI_EC_SENSOR_SPECIFIC, SAHPI_ES_STATE_12, "STATE_12"},
{SAHPI_EC_SENSOR_SPECIFIC, SAHPI_ES_STATE_13, "STATE_13"},
{SAHPI_EC_SENSOR_SPECIFIC, SAHPI_ES_STATE_14, "STATE_14"},
{SAHPI_EC_USAGE, SAHPI_ES_IDLE, "IDLE"},
{SAHPI_EC_USAGE, SAHPI_ES_ACTIVE, "ACTIVE"},
{SAHPI_EC_USAGE, SAHPI_ES_BUSY, "BUSY"},
{SAHPI_EC_PRED_FAIL, SAHPI_ES_PRED_FAILURE_DEASSERT, "PRED_FAILURE_DEASSERT"},
{SAHPI_EC_PRED_FAIL, SAHPI_ES_PRED_FAILURE_ASSERT, "PRED_FAILURE_ASSERT"},
{SAHPI_EC_THRESHOLD, SAHPI_ES_LOWER_MINOR, "LOWER_MINOR"},
{SAHPI_EC_THRESHOLD, SAHPI_ES_LOWER_MAJOR, "LOWER_MAJOR"},
{SAHPI_EC_THRESHOLD, SAHPI_ES_LOWER_CRIT, "LOWER_CRIT"},
{SAHPI_EC_THRESHOLD, SAHPI_ES_UPPER_MINOR, "UPPER_MINOR"},
{SAHPI_EC_THRESHOLD, SAHPI_ES_UPPER_MAJOR, "UPPER_MAJOR"},
{SAHPI_EC_THRESHOLD, SAHPI_ES_UPPER_CRIT, "UPPER_CRIT"},
{SAHPI_EC_ENABLE, SAHPI_ES_DISABLED, "DISABLED"},
{SAHPI_EC_ENABLE, SAHPI_ES_ENABLED, "ENABLED"},
{SAHPI_EC_PRESENCE, SAHPI_ES_ABSENT, "ABSENT"},
{SAHPI_EC_PRESENCE, SAHPI_ES_PRESENT, "PRESENT"},
{SAHPI_EC_SEVERITY, SAHPI_ES_OK, "OK"},
{SAHPI_EC_SEVERITY, SAHPI_ES_MINOR_FROM_OK, "MINOR_FROM_OK"},
{SAHPI_EC_SEVERITY, SAHPI_ES_MAJOR_FROM_LESS, "MAJOR_FROM_LESS"},
{SAHPI_EC_SEVERITY, SAHPI_ES_CRITICAL_FROM_LESS, "CRITICAL_FROM_LESS"},
{SAHPI_EC_SEVERITY, SAHPI_ES_MINOR_FROM_MORE, "MINOR_FROM_MORE"},
{SAHPI_EC_SEVERITY, SAHPI_ES_MAJOR_FROM_CRITICAL, "MAJOR_FROM_CRITICAL"},
{SAHPI_EC_SEVERITY, SAHPI_ES_CRITICAL, "CRITICAL"},
{SAHPI_EC_SEVERITY, SAHPI_ES_MONITOR, "MONITOR"},
{SAHPI_EC_SEVERITY, SAHPI_ES_INFORMATIONAL, "INFORMATIONAL"},
{SAHPI_EC_PERFORMANCE, SAHPI_ES_PERFORMANCE_MET, "PERFORMANCE_MET"},
{SAHPI_EC_PERFORMANCE, SAHPI_ES_PERFORMANCE_LAGS, "PERFORMANCE_LAGS"},
{SAHPI_EC_STATE, SAHPI_ES_STATE_DEASSERTED, "STATE_DEASSERTED"},
{SAHPI_EC_STATE, SAHPI_ES_STATE_ASSERTED, "STATE_ASSERTED"},
{SAHPI_EC_AVAILABILITY, SAHPI_ES_RUNNING, "RUNNING"},
{SAHPI_EC_AVAILABILITY, SAHPI_ES_TEST, "TEST"},
{SAHPI_EC_AVAILABILITY, SAHPI_ES_POWER_OFF, "POWER_OFF"},
{SAHPI_EC_AVAILABILITY, SAHPI_ES_ON_LINE, "ON_LINE"},
{SAHPI_EC_AVAILABILITY, SAHPI_ES_OFF_LINE, "OFF_LINE"},
{SAHPI_EC_AVAILABILITY, SAHPI_ES_OFF_DUTY, "OFF_DUTY"},
{SAHPI_EC_AVAILABILITY, SAHPI_ES_DEGRADED, "DEGRADED"},
{SAHPI_EC_AVAILABILITY, SAHPI_ES_POWER_SAVE, "POWER_SAVE"},
{SAHPI_EC_AVAILABILITY, SAHPI_ES_INSTALL_ERROR, "INSTALL_ERROR"},
{SAHPI_EC_REDUNDANCY, SAHPI_ES_FULLY_REDUNDANT, "FULLY_REDUNDANT"},
{SAHPI_EC_REDUNDANCY, SAHPI_ES_REDUNDANCY_LOST, "REDUNDANCY_LOST"},
{SAHPI_EC_REDUNDANCY, SAHPI_ES_REDUNDANCY_DEGRADED, "REDUNDANCY_DEGRADED"},
{SAHPI_EC_REDUNDANCY, SAHPI_ES_REDUNDANCY_LOST_SUFFICIENT_RESOURCES, "REDUNDANCY_LOST_SUFFICIENT_RESOURCES"},
{SAHPI_EC_REDUNDANCY, SAHPI_ES_NON_REDUNDANT_SUFFICIENT_RESOURCES, "NON_REDUNDANT_SUFFICIENT_RESOURCES"},
{SAHPI_EC_REDUNDANCY, SAHPI_ES_NON_REDUNDANT_INSUFFICIENT_RESOURCES, "NON_REDUNDANT_INSUFFICIENT_RESOURCES"},
{SAHPI_EC_REDUNDANCY, SAHPI_ES_REDUNDANCY_DEGRADED_FROM_FULL, "REDUNDANCY_DEGRADED_FROM_FULL"},
{SAHPI_EC_REDUNDANCY, SAHPI_ES_REDUNDANCY_DEGRADED_FROM_NON, "REDUNDANCY_DEGRADED_FROM_NON"},
{SAHPI_EC_GENERIC, SAHPI_ES_STATE_00, "STATE_00"},
{SAHPI_EC_GENERIC, SAHPI_ES_STATE_01, "STATE_01"},
{SAHPI_EC_GENERIC, SAHPI_ES_STATE_02, "STATE_02"},
{SAHPI_EC_GENERIC, SAHPI_ES_STATE_03, "STATE_03"},
{SAHPI_EC_GENERIC, SAHPI_ES_STATE_04, "STATE_04"},
{SAHPI_EC_GENERIC, SAHPI_ES_STATE_05, "STATE_05"},
{SAHPI_EC_GENERIC, SAHPI_ES_STATE_06, "STATE_06"},
{SAHPI_EC_GENERIC, SAHPI_ES_STATE_07, "STATE_07"},
{SAHPI_EC_GENERIC, SAHPI_ES_STATE_08, "STATE_08"},
{SAHPI_EC_GENERIC, SAHPI_ES_STATE_09, "STATE_09"},
{SAHPI_EC_GENERIC, SAHPI_ES_STATE_10, "STATE_10"},
{SAHPI_EC_GENERIC, SAHPI_ES_STATE_11, "STATE_11"},
{SAHPI_EC_GENERIC, SAHPI_ES_STATE_12, "STATE_12"},
{SAHPI_EC_GENERIC, SAHPI_ES_STATE_13, "STATE_13"},
{SAHPI_EC_GENERIC, SAHPI_ES_STATE_14, "STATE_14"},
};

