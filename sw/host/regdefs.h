////////////////////////////////////////////////////////////////////////////////
//
// Filename:	./regdefs.h
//
// Project:	OpenArty, an entirely open SoC based upon the Arty platform
//
// DO NOT EDIT THIS FILE!
// Computer Generated: This file is computer generated by AUTOFPGA. DO NOT EDIT.
// DO NOT EDIT THIS FILE!
//
// CmdLine:	autofpga autofpga -d -o . clock.txt global.txt dlyarbiter.txt icape.txt version.txt buserr.txt pic.txt pwrcount.txt spio.txt clrspio.txt rtcgps.txt gps.txt bkram.txt flash.txt wbuconsole.txt zipmaster.txt
//
// Creator:	Dan Gisselquist, Ph.D.
//		Gisselquist Technology, LLC
//
////////////////////////////////////////////////////////////////////////////////
//
// Copyright (C) 2017-2018, Gisselquist Technology, LLC
//
// This program is free software (firmware): you can redistribute it and/or
// modify it under the terms of  the GNU General Public License as published
// by the Free Software Foundation, either version 3 of the License, or (at
// your option) any later version.
//
// This program is distributed in the hope that it will be useful, but WITHOUT
// ANY WARRANTY; without even the implied warranty of MERCHANTIBILITY or
// FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
// for more details.
//
// You should have received a copy of the GNU General Public License along
// with this program.  (It's in the $(ROOT)/doc directory.  Run make with no
// target there if the PDF file isn't present.)  If not, see
// <http://www.gnu.org/licenses/> for a copy.
//
// License:	GPL, v3, as defined and found on www.gnu.org,
//		http://www.gnu.org/licenses/gpl.html
//
//
////////////////////////////////////////////////////////////////////////////////
//
//
#ifndef	REGDEFS_H
#define	REGDEFS_H


//
// The @REGDEFS.H.INCLUDE tag
//
// @REGDEFS.H.INCLUDE for masters
// @REGDEFS.H.INCLUDE for peripherals
// And finally any master REGDEFS.H.INCLUDE tags
// End of definitions from REGDEFS.H.INCLUDE


//
// Register address definitions, from @REGS.#d
//
// FLASH erase/program configuration registers
#define	R_FLASHCFG      	0x00200000	// 00200000, wbregs names: FLASHCFG, QSPIC
// Flash debug / scope
#define	R_QSCOPE        	0x00400000	// 00400000, wbregs names: QSCOPE
// GPS UART registers, similar to WBUART
#define	R_GPSU_SETUP    	0x00600000	// 00600000, wbregs names: GPSSETUP
#define	R_GPSU_FIFO     	0x00600004	// 00600000, wbregs names: GPSFIFO
#define	R_GPSU_UARTRX   	0x00600008	// 00600000, wbregs names: GPSRX
#define	R_GPSU_UARTTX   	0x0060000c	// 00600000, wbregs names: GPSTX
// CONSOLE registers
#define	R_CONSOLE_FIFO  	0x00800004	// 00800000, wbregs names: UFIFO
#define	R_CONSOLE_UARTRX	0x00800008	// 00800000, wbregs names: RX
#define	R_CONSOLE_UARTTX	0x0080000c	// 00800000, wbregs names: TX
#define	R_BUILDTIME     	0x00a00000	// 00a00000, wbregs names: BUILDTIME
#define	R_BUILDTIME     	0x00a00000	// 00a00000, wbregs names: BUILDTIME
#define	R_BUSERR        	0x00a00004	// 00a00004, wbregs names: BUSERR
#define	R_BUSERR        	0x00a00004	// 00a00004, wbregs names: BUSERR
#define	R_PIC           	0x00a00008	// 00a00008, wbregs names: PIC
#define	R_PIC           	0x00a00008	// 00a00008, wbregs names: PIC
#define	R_PWRCOUNT      	0x00a0000c	// 00a0000c, wbregs names: PWRCOUNT
#define	R_PWRCOUNT      	0x00a0000c	// 00a0000c, wbregs names: PWRCOUNT
#define	R_SPIO          	0x00a00010	// 00a00010, wbregs names: SPIO
#define	R_SPIO          	0x00a00010	// 00a00010, wbregs names: SPIO
// A register capturing subseconds, locked to GPS if present
#define	R_SUBSECONDS    	0x00a00014	// 00a00014, wbregs names: SUBSECONDS
// A register capturing subseconds, locked to GPS if present
#define	R_SUBSECONDS    	0x00a00014	// 00a00014, wbregs names: SUBSECONDS
#define	R_VERSION       	0x00a00018	// 00a00018, wbregs names: VERSION
#define	R_VERSION       	0x00a00018	// 00a00018, wbregs names: VERSION
// FPGA CONFIG REGISTERS: 0x4e0-0x4ff
#define	R_CFG_CRC       	0x00c00000	// 00c00000, wbregs names: FPGACRC
#define	R_CFG_FAR       	0x00c00004	// 00c00000, wbregs names: FPGAFAR
#define	R_CFG_FDRI      	0x00c00008	// 00c00000, wbregs names: FPGAFDRI
#define	R_CFG_FDRO      	0x00c0000c	// 00c00000, wbregs names: FPGAFDRO
#define	R_CFG_CMD       	0x00c00010	// 00c00000, wbregs names: FPGACMD
#define	R_CFG_CTL0      	0x00c00014	// 00c00000, wbregs names: FPGACTL0
#define	R_CFG_MASK      	0x00c00018	// 00c00000, wbregs names: FPGAMASK
#define	R_CFG_STAT      	0x00c0001c	// 00c00000, wbregs names: FPGASTAT
#define	R_CFG_LOUT      	0x00c00020	// 00c00000, wbregs names: FPGALOUT
#define	R_CFG_COR0      	0x00c00024	// 00c00000, wbregs names: FPGACOR0
#define	R_CFG_MFWR      	0x00c00028	// 00c00000, wbregs names: FPGAMFWR
#define	R_CFG_CBC       	0x00c0002c	// 00c00000, wbregs names: FPGACBC
#define	R_CFG_IDCODE    	0x00c00030	// 00c00000, wbregs names: FPGAIDCODE
#define	R_CFG_AXSS      	0x00c00034	// 00c00000, wbregs names: FPGAAXSS
#define	R_CFG_COR1      	0x00c00038	// 00c00000, wbregs names: FPGACOR1
#define	R_CFG_WBSTAR    	0x00c00040	// 00c00000, wbregs names: WBSTAR
#define	R_CFG_TIMER     	0x00c00044	// 00c00000, wbregs names: CFGTIMER
#define	R_CFG_BOOTSTS   	0x00c00058	// 00c00000, wbregs names: BOOTSTS
#define	R_CFG_CTL1      	0x00c00060	// 00c00000, wbregs names: FPGACTL1
#define	R_CFG_BSPI      	0x00c0007c	// 00c00000, wbregs names: FPGABSPI
#define	R_CLRLED        	0x00e00000	// 00e00000, wbregs names: CLRLED
#define	R_CLRLED0       	0x00e00000	// 00e00000, wbregs names: CLRLED0, CLR0
#define	R_CLRLED1       	0x00e00004	// 00e00000, wbregs names: CLRLED1, CLR1
#define	R_CLRLED2       	0x00e00008	// 00e00000, wbregs names: CLRLED2, CLR2
#define	R_CLRLED3       	0x00e0000c	// 00e00000, wbregs names: CLRLED3, CLR3
#define	R_CLRLED        	0x00e00000	// 00e00000, wbregs names: CLRLED
#define	R_CLRLED0       	0x00e00000	// 00e00000, wbregs names: CLRLED0, CLR0
#define	R_CLRLED1       	0x00e00004	// 00e00000, wbregs names: CLRLED1, CLR1
#define	R_CLRLED2       	0x00e00008	// 00e00000, wbregs names: CLRLED2, CLR2
#define	R_CLRLED3       	0x00e0000c	// 00e00000, wbregs names: CLRLED3, CLR3
// GPS clock tracker, control loop settings registers
#define	R_GPS_ALPHA     	0x00e00010	// 00e00010, wbregs names: ALPHA
#define	R_GPS_BETA      	0x00e00014	// 00e00010, wbregs names: BETA
#define	R_GPS_GAMMA     	0x00e00018	// 00e00010, wbregs names: GAMMA
#define	R_GPS_STEP      	0x00e0001c	// 00e00010, wbregs names: STEP
// GPS clock tracker, control loop settings registers
#define	R_GPS_ALPHA     	0x00e00010	// 00e00010, wbregs names: ALPHA
#define	R_GPS_BETA      	0x00e00014	// 00e00010, wbregs names: BETA
#define	R_GPS_GAMMA     	0x00e00018	// 00e00010, wbregs names: GAMMA
#define	R_GPS_STEP      	0x00e0001c	// 00e00010, wbregs names: STEP
// RTC clock registers
#define	R_CLOCK         	0x00e00020	// 00e00020, wbregs names: CLOCK
#define	R_TIMER         	0x00e00024	// 00e00020, wbregs names: TIMER
#define	R_STOPWATCH     	0x00e00028	// 00e00020, wbregs names: STOPWATCH
#define	R_CKALARM       	0x00e0002c	// 00e00020, wbregs names: ALARM, CKALARM
// RTC clock registers
#define	R_CLOCK         	0x00e00020	// 00e00020, wbregs names: CLOCK
#define	R_TIMER         	0x00e00024	// 00e00020, wbregs names: TIMER
#define	R_STOPWATCH     	0x00e00028	// 00e00020, wbregs names: STOPWATCH
#define	R_CKALARM       	0x00e0002c	// 00e00020, wbregs names: ALARM, CKALARM
// GPS clock test bench registers, for measuring the clock trackers performance
#define	R_GPSTB_FREQ    	0x00e00040	// 00e00040, wbregs names: GPSFREQ
#define	R_GPSTB_JUMP    	0x00e00044	// 00e00040, wbregs names: GPSJUMP
#define	R_GPSTB_ERRHI   	0x00e00048	// 00e00040, wbregs names: ERRHI
#define	R_GPSTB_ERRLO   	0x00e0004c	// 00e00040, wbregs names: ERRLO
#define	R_GPSTB_COUNTHI 	0x00e00050	// 00e00040, wbregs names: CNTHI
#define	R_GPSTB_COUNTLO 	0x00e00054	// 00e00040, wbregs names: CNTLO
#define	R_GPSTB_STEPHI  	0x00e00058	// 00e00040, wbregs names: STEPHI
#define	R_GPSTB_STEPLO  	0x00e0005c	// 00e00040, wbregs names: STEPLO
// GPS clock test bench registers, for measuring the clock trackers performance
#define	R_GPSTB_FREQ    	0x00e00040	// 00e00040, wbregs names: GPSFREQ
#define	R_GPSTB_JUMP    	0x00e00044	// 00e00040, wbregs names: GPSJUMP
#define	R_GPSTB_ERRHI   	0x00e00048	// 00e00040, wbregs names: ERRHI
#define	R_GPSTB_ERRLO   	0x00e0004c	// 00e00040, wbregs names: ERRLO
#define	R_GPSTB_COUNTHI 	0x00e00050	// 00e00040, wbregs names: CNTHI
#define	R_GPSTB_COUNTLO 	0x00e00054	// 00e00040, wbregs names: CNTLO
#define	R_GPSTB_STEPHI  	0x00e00058	// 00e00040, wbregs names: STEPHI
#define	R_GPSTB_STEPLO  	0x00e0005c	// 00e00040, wbregs names: STEPLO
#define	R_BKRAM         	0x01000000	// 01000000, wbregs names: RAM
#define	R_FLASH         	0x02000000	// 02000000, wbregs names: FLASH


//
// The @REGDEFS.H.DEFNS tag
//
// @REGDEFS.H.DEFNS for masters
#define	CLKFREQHZ	100000000
#define	R_ZIPCTRL	0x04000000
#define	R_ZIPDATA	0x04000004
// #define	RESET_ADDRESS	0x02400000
#define	BAUDRATE	1000000
// @REGDEFS.H.DEFNS for peripherals
#define	FLASHBASE	0x02000000
#define	FLASHLEN	0x01000000
#define	FLASHLGLEN	24
#define	BKRAMBASE	0x01000000
#define	BKRAMLEN	0x00020000
// @REGDEFS.H.DEFNS at the top level
// End of definitions from REGDEFS.H.DEFNS
//
// The @REGDEFS.H.INSERT tag
//
// @REGDEFS.H.INSERT for masters

#define	CPU_GO		0x0000
#define	CPU_RESET	0x0040
#define	CPU_INT		0x0080
#define	CPU_STEP	0x0100
#define	CPU_STALL	0x0200
#define	CPU_HALT	0x0400
#define	CPU_CLRCACHE	0x0800
#define	CPU_sR0		0x0000
#define	CPU_sSP		0x000d
#define	CPU_sCC		0x000e
#define	CPU_sPC		0x000f
#define	CPU_uR0		0x0010
#define	CPU_uSP		0x001d
#define	CPU_uCC		0x001e
#define	CPU_uPC		0x001f

#ifdef	FLASH_ACCESS
#define	RESET_ADDRESS 0x02400000
#elif	defined(SDRAM_ACCESS)
#define	RESET_ADDRESS @$[0x%08x](sdram.REGBASE)
#elif	defined(BKRAM_ACCESS)
#define	RESET_ADDRESS 0x01000000
#endif

// @REGDEFS.H.INSERT for peripherals
// Flash control constants
#define	QSPI_FLASH	// This core and hardware support a Quad SPI flash
#define	SZPAGEB		256
#define	PGLENB		256
#define	SZPAGEW		64
#define	PGLENW		64
#define	NPAGES		256
#define	SECTORSZB	(NPAGES * SZPAGEB)	// In bytes, not words!!
#define	SECTORSZW	(NPAGES * SZPAGEW)	// In words
#define	NSECTORS	64
#define	SECTOROF(A)	((A) & (-1<<16))
#define	SUBSECTOROF(A)	((A) & (-1<<12))
#define	PAGEOF(A)	((A) & (-1<<8))

// @REGDEFS.H.INSERT from the top level
typedef	struct {
	unsigned	m_addr;
	const char	*m_name;
} REGNAME;

extern	const	REGNAME	*bregs;
extern	const	int	NREGS;
// #define	NREGS	(sizeof(bregs)/sizeof(bregs[0]))

extern	unsigned	addrdecode(const char *v);
extern	const	char *addrname(const unsigned v);
// End of definitions from REGDEFS.H.INSERT


#endif	// REGDEFS_H
