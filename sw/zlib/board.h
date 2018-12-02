////////////////////////////////////////////////////////////////////////////////
//
// Filename:	./board.h
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
#ifndef	BOARD_H
#define	BOARD_H

// And, so that we can know what is and isn't defined
// from within our main.v file, let's include:
#include <design.h>

#include <design.h>
#include <cpudefs.h>

#define	_HAVE_ZIPSYS
#define	PIC	zip->z_pic

#ifdef	INCLUDE_ZIPCPU
#ifdef INCLUDE_DMA_CONTROLLER
#define	_HAVE_ZIPSYS_DMA
#endif	// INCLUDE_DMA_CONTROLLER
#ifdef INCLUDE_ACCOUNTING_COUNTERS
#define	_HAVE_ZIPSYS_PERFORMANCE_COUNTERS
#endif	// INCLUDE_ACCOUNTING_COUNTERS
#endif // INCLUDE_ZIPCPU


#ifndef	WBUART_H
#define	WBUART_H

#define UART_PARITY_NONE        0
#define UART_HWFLOW_OFF         0x40000000
#define UART_PARITY_ODD         0x04000000
#define UART_PARITY_EVEN        0x05000000
#define UART_PARITY_SPACE       0x06000000
#define UART_PARITY_MARK        0x07000000
#define UART_STOP_ONEBIT        0
#define UART_STOP_TWOBITS       0x08000000
#define UART_DATA_8BITS         0
#define UART_DATA_7BITS         0x10000000
#define UART_DATA_6BITS         0x20000000
#define UART_DATA_5BITS         0x30000000
#define UART_RX_BREAK           0x0800
#define UART_RX_FRAMEERR        0x0400
#define UART_RX_PARITYERR       0x0200
#define UART_RX_NOTREADY        0x0100
#define UART_RX_ERR             (-256)
#define UART_TX_BUSY            0x0100
#define UART_TX_BREAK           0x0200

typedef struct  WBUART_S {
	unsigned	u_setup;
	unsigned	u_fifo;
	unsigned	u_rx, u_tx;
} WBUART;

#endif	// WBUART_H



typedef	struct	GPSTRACKER_S	{
	unsigned	g_alpha, g_beta, g_gamma, g_step;
} GPSTRACKER;


#define	CLKFREQHZ	100000000


// Offsets for the ICAPE2 interface
#define	CFG_CRC		0
#define	CFG_FAR		1
#define	CFG_FDRI	2
#define	CFG_FDRO	3
#define	CFG_CMD		4
#define	CFG_CTL0	5
#define	CFG_MASK	6
#define	CFG_STAT	7
#define	CFG_LOUT	8
#define	CFG_COR0	9
#define	CFG_MFWR	10
#define	CFG_CBC		11
#define	CFG_IDCODE	12
#define	CFG_AXSS	13
#define	CFG_COR1	14
#define	CFG_WBSTAR	16
#define	CFG_TIMER	17
#define	CFG_BOOTSTS	22
#define	CFG_CTL1	24
#define	CFG_BSPI	31


typedef	struct	RTCLIGHT_S	{
	unsigned	r_clock, r_stopwatch, r_timer, r_alarm;
} RTCLIGHT;


typedef	struct	GPSTB_S	{
	unsigned	tb_maxcount, tb_jump;
	unsigned long	tb_err, tb_count, tb_step;
} GPSTB;




#define	CLRLED_RED	0x0ff0000
#define	CLRLED_GREEN	0x000ff00
#define	CLRLED_BLUE	0x00000ff


typedef struct  CONSOLE_S {
	unsigned	u_setup;
	unsigned	u_fifo;
	unsigned	u_rx, u_tx;
} CONSOLE;



#define	ALTPIC(A)	(1<<(A))


#define	SYSPIC(A)	(1<<(A))


#define	_BOARD_HAS_VERSION
#ifdef	GPSUART_ACCESS
#define	_BOARD_HAS_GPS_UART
static volatile WBUART *const _gpsu = ((WBUART *)(0x00600000));
#endif	// GPSUART_ACCESS
#ifdef	BUSPIC_ACCESS
#define	_BOARD_HAS_BUSPIC
static volatile unsigned *const _buspic = ((unsigned *)0x00a00008);
#endif	// BUSPIC_ACCESS
#ifdef	FLASH_ACCESS
#define	_BOARD_HAS_FLASH
extern int _flash[1];
#endif	// FLASH_ACCESS
#ifdef	GPSTRK_ACCESS
static volatile GPSTRACKER *const _gps = ((GPSTRACKER *)0x00e00010);
#endif	// GPSTRK_ACCESS
#define	_BOARD_HAS_BUILDTIME
#ifdef	PWRCOUNT_ACCESS
static volatile unsigned *const _pwrcount = ((unsigned *)0x00a0000c);
#endif	// PWRCOUNT_ACCESS
#define	_BOARD_HAS_SUBSECONDS
static volatile unsigned *const _subseconds = ((unsigned *)0x00a00014);
#ifdef	FLASHCFG_ACCESS
#define	_BOARD_HAS_FLASHCFG
static volatile unsigned * const io_flctl = ((unsigned *)(0x00200000));
#endif	// FLASHCFG_ACCESS
#define	_BOARD_HAS_BUSERR
static volatile unsigned *const _buserr = ((unsigned *)10485764);
#ifdef	CFG_ACCESS
#define	_BOARD_HAS_ICAPTETWO
static volatile unsigned *const _icape = ((unsigned *)12582912);
#endif	// CFG_ACCESS
#ifdef	RTC_ACCESS
#define	_BOARD_HAS_RTCLIGHT
static volatile RTCLIGHT *const _rtc = ((RTCLIGHT *)0x00e00020);
#endif	// RTC_ACCESS
#ifdef	BKRAM_ACCESS
#define	_BOARD_HAS_BKRAM
extern char	_bkram[0x00020000];
#endif	// BKRAM_ACCESS
static volatile GPSTB *const _gpstb = ((GPSTB *)0x00e00040);
#ifdef	SPIO_ACCESS
#define	_BOARD_HAS_SPIO
static volatile unsigned *const _spio = ((unsigned *)10485776);
#endif	// SPIO_ACCESS
#ifdef	CLRLED_ACCESS
#define	_BOARD_HAS_CLRLED
static volatile unsigned *const _clrled = ((unsigned *)0x00e00000);
#endif	// CLRLED_ACCESS
#ifdef	BUSCONSOLE_ACCESS
#define	_BOARD_HAS_BUSCONSOLE
static volatile CONSOLE *const _uart = ((CONSOLE *)8388608);
#endif	// BUSCONSOLE_ACCESS
//
// Interrupt assignments (3 PICs)
//
// PIC: buspic
#define	BUSPIC_SPIO	BUSPIC(0)
#define	BUSPIC_FLASHDBG	BUSPIC(1)
// PIC: altpic
#define	ALTPIC_UIC	ALTPIC(0)
#define	ALTPIC_UOC	ALTPIC(1)
#define	ALTPIC_UPC	ALTPIC(2)
#define	ALTPIC_UTC	ALTPIC(3)
#define	ALTPIC_MIC	ALTPIC(4)
#define	ALTPIC_MOC	ALTPIC(5)
#define	ALTPIC_MPC	ALTPIC(6)
#define	ALTPIC_MTC	ALTPIC(7)
#define	ALTPIC_GPSRX	ALTPIC(8)
#define	ALTPIC_GPSTX	ALTPIC(9)
#define	ALTPIC_GPSTXF	ALTPIC(10)
#define	ALTPIC_RTC	ALTPIC(11)
#define	ALTPIC_UARTTX	ALTPIC(12)
#define	ALTPIC_UARTRX	ALTPIC(13)
// PIC: syspic
#define	SYSPIC_DMAC	SYSPIC(0)
#define	SYSPIC_JIFFIES	SYSPIC(1)
#define	SYSPIC_TMC	SYSPIC(2)
#define	SYSPIC_TMB	SYSPIC(3)
#define	SYSPIC_TMA	SYSPIC(4)
#define	SYSPIC_ALT	SYSPIC(5)
#define	SYSPIC_BUS	SYSPIC(6)
#define	SYSPIC_GPSRXF	SYSPIC(7)
#define	SYSPIC_PPS	SYSPIC(8)
#define	SYSPIC_UARTTXF	SYSPIC(9)
#define	SYSPIC_UARTRXF	SYSPIC(10)
#define	SYSINT_GPSRXF	SYSINT(7)
#define	SYSINT_GPSTXF	SYSINT(10)
#define	SYSINT_GPSRX	ALTINT(8)
#define	SYSINT_GPSTX	ALTINT(9)


#define	SYSINT_PPS	SYSINT(8)


#endif	// BOARD_H
