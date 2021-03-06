/************************************************************************************//**
* \file         xcpmaster.h
* \brief        XCP Master header file.
* \ingroup      SerialBoot
* \internal
*----------------------------------------------------------------------------------------
*                          C O P Y R I G H T
*----------------------------------------------------------------------------------------
*   Copyright (c) 2014  by Feaser    http://www.feaser.com    All rights reserved
*
*----------------------------------------------------------------------------------------
*                            L I C E N S E
*----------------------------------------------------------------------------------------
* This file is part of OpenBLT. OpenBLT is free software: you can redistribute it and/or
* modify it under the terms of the GNU General Public License as published by the Free
* Software Foundation, either version 3 of the License, or (at your option) any later
* version.
*
* OpenBLT is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
* without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
* PURPOSE. See the GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License along with OpenBLT.
* If not, see <http://www.gnu.org/licenses/>.
*
* A special exception to the GPL is included to allow you to distribute a combined work
* that includes OpenBLT without being obliged to provide the source code for any
* proprietary components. The exception text is included at the bottom of the license
* file <license.html>.
*
* \endinternal
****************************************************************************************/
#ifndef XCPMASTER_H
#define XCPMASTER_H

/****************************************************************************************
* Macro definitions
****************************************************************************************/
/** \brief Configure number of bytes in the master->slave data packet. Should be at least
 *         equal or larger than that configured on the slave.
 */
#define XCP_MASTER_TX_MAX_DATA         (255)

/** \brief Configure number of bytes in the slave->master data packet. Should be at least
 *         equal or larger than that configured on the slave.
 */
#define XCP_MASTER_RX_MAX_DATA         (255)


/****************************************************************************************
* Include files
****************************************************************************************/
#include "xcptransport.h"                             /* XCP transport layer           */


/****************************************************************************************
* Function prototypes
****************************************************************************************/
sb_uint8 XcpMasterInit(sb_char *device, sb_uint32 baudrate, sb_uint8 comIsUart);
void     XcpMasterDeinit(void);
sb_uint8 XcpMasterConnect(sb_uint32 flashingTargetID);
sb_uint8 XcpMasterDisconnect(void);
sb_uint8 XcpMasterProgramReset(void);
sb_uint8 XcpMasterStartProgrammingSession(void);
sb_uint8 XcpMasterStopProgrammingSession(void);
sb_uint8 XcpMasterClearMemory(sb_uint32 addr, sb_uint32 len);
sb_uint8 XcpMasterReadData(sb_uint32 addr, sb_uint32 len, sb_uint8 data[]);
sb_uint8 XcpMasterProgramData(sb_uint32 addr, sb_uint32 len, sb_uint8 data[]);


#endif /* XCPMASTER_H */
/*********************************** end of xcpmaster.h ********************************/
