/*
             LUFA Library
     Copyright (C) Dean Camera, 2018.

  dean [at] fourwalledcubicle [dot] com
           www.lufa-lib.org
*/

/*
  Copyright 2018  Dean Camera (dean [at] fourwalledcubicle [dot] com)

  Permission to use, copy, modify, distribute, and sell this
  software and its documentation for any purpose is hereby granted
  without fee, provided that the above copyright notice appear in
  all copies and that both that the copyright notice and this
  permission notice and warranty disclaimer appear in supporting
  documentation, and that the name of the author not be used in
  advertising or publicity pertaining to distribution of the
  software without specific, written prior permission.

  The author disclaims all warranties with regard to this
  software, including all implied warranties of merchantability
  and fitness.  In no event shall the author be liable for any
  special, indirect or consequential damages or any damages
  whatsoever resulting from loss of use, data or profits, whether
  in an action of contract, negligence or other tortious action,
  arising out of or in connection with the use or performance of
  this software.
*/

/** \file
 *
 *  Header file for Webserver.c.
 */

#ifndef _WEBSERVER_H_
#define _WEBSERVER_H_

	/* Includes: */
		#include <avr/io.h>
		#include <avr/wdt.h>
		#include <avr/pgmspace.h>
		#include <avr/power.h>
		#include <avr/interrupt.h>

		#include <LUFA/Drivers/Board/LEDs.h>
		#include <LUFA/Drivers/Board/Dataflash.h>
		#include <LUFA/Drivers/Peripheral/SPI.h>
		#include <LUFA/Drivers/USB/USB.h>
		#include <LUFA/Platform/Platform.h>

		#include "USBDeviceMode.h"
		#include "USBHostMode.h"
		#include "Config/AppConfig.h"

	/* Macros: */
		/** LED mask for the library LED driver, to indicate that the USB interface is not ready. */
		#define LEDMASK_USB_NOTREADY          LEDS_LED1

		/** LED mask for the library LED driver, to indicate that the USB interface is enumerating. */
		#define LEDMASK_USB_ENUMERATING      (LEDS_LED1 | LEDS_LED2)

		/** LED mask for the library LED driver, to indicate that the USB interface is ready. */
		#define LEDMASK_USB_READY             LEDS_LED2

		/** LED mask for the library LED driver, to indicate that an error has occurred in the USB interface. */
		#define LEDMASK_USB_ERROR            (LEDS_LED1 | LEDS_LED3)

		/** LED mask for the library LED driver, to indicate that the USB interface is busy. */
		#define LEDMASK_USB_BUSY             (LEDS_LED1 | LEDS_LED3 | LEDS_LED4)

	/* Function Prototypes: */
		void SetupHardware(void);

#endif

