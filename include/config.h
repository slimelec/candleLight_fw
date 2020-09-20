/*

The MIT License (MIT)

Copyright (c) 2016 Hubert Denkmair

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.

*/

#pragma once

#define CAN_QUEUE_SIZE 64

#define USBD_VID                     0x1d50
#define USBD_PID_FS                  0x606f
#define USBD_LANGID_STRING           1033
#define USBD_CONFIGURATION_STRING_FS (uint8_t*) "gs_usb config"
#define USBD_INTERFACE_STRING_FS     (uint8_t*) "gs_usb interface"

#define BOARD_candleLight 1
#define BOARD_cantact     2
#define BOARD_canable     3
#define BOARD_usb2can     4
#define BOARD_ollie       5

//#define BOARD		BOARD_ollie

#if BOARD == BOARD_candleLight
	#define USBD_PRODUCT_STRING_FS		(uint8_t*) "candleLight USB to CAN adapter"
	#define USBD_MANUFACTURER_STRING	(uint8_t*) "bytewerk"
	#define DFU_INTERFACE_STRING_FS		(uint8_t*) "candleLight firmware upgrade interface"
	#define CAN_S_Pin GPIO_PIN_13
	#define CAN_S_GPIO_Port GPIOC

	#define LED1_Pin GPIO_PIN_0
	#define LED1_Mode GPIO_MODE_OUTPUT_OD
	#define LED1_GPIO_Port GPIOA
	#define LED1_Active_Low

	#define LED2_GPIO_Port GPIOA
	#define LED2_Pin GPIO_PIN_1
	#define LED2_Mode GPIO_MODE_OUTPUT_OD
	#define LED2_Active_Low

#elif BOARD == BOARD_cantact
	#define USBD_PRODUCT_STRING_FS		(uint8_t*) "cantact gs_usb"
	#define USBD_MANUFACTURER_STRING	(uint8_t*) "cantact.io"
	#define DFU_INTERFACE_STRING_FS		(uint8_t*) "cantact firmware upgrade interface"

	// SILENT pin not connected

	#define LED1_GPIO_Port GPIOB
	#define LED1_Pin GPIO_PIN_0	/* green */
	#define LED1_Mode GPIO_MODE_OUTPUT_PP

	#define LED2_GPIO_Port GPIOB
	#define LED2_Pin GPIO_PIN_1	/* red */
	#define LED2_Mode GPIO_MODE_OUTPUT_PP

#elif BOARD == BOARD_canable
	#define USBD_PRODUCT_STRING_FS			(uint8_t*) "canable gs_usb"
	#define USBD_MANUFACTURER_STRING		(uint8_t*) "canable.io"
	#define DFU_INTERFACE_STRING_FS			(uint8_t*) "canble firmware upgrade interface"

	// SILENT pin not connected

	#define LED1_GPIO_Port GPIOB
	#define LED1_Pin GPIO_PIN_1	/* red */
	#define LED1_Mode GPIO_MODE_OUTPUT_PP

	#define LED2_GPIO_Port GPIOB
	#define LED2_Pin GPIO_PIN_0	/* green */
	#define LED2_Mode GPIO_MODE_OUTPUT_PP

#elif BOARD == BOARD_usb2can
	#define USBD_PRODUCT_STRING_FS		(uint8_t*) "USB2CAN RCA gs_usb"
	#define USBD_MANUFACTURER_STRING	(uint8_t*) "Roboter Club Aachen"
	#define DFU_INTERFACE_STRING_FS		(uint8_t*) "usb2can firmware upgrade interface"

	// SILENT pin not connected

	#define LED4_GPIO_Port GPIOA
	#define LED4_Pin GPIO_PIN_0	/* white */
	#define LED4_Mode GPIO_MODE_OUTPUT_OD
	#define LED4_Active_Low

	#define LED2_GPIO_Port GPIOA
	#define LED2_Pin GPIO_PIN_1	/* blue */
	#define LED2_Mode GPIO_MODE_OUTPUT_OD
	#define LED2_Active_Low

	#define LED3_GPIO_Port GPIOA 
	#define LED3_Pin GPIO_PIN_2	/* red */
	#define LED3_Mode GPIO_MODE_OUTPUT_OD
	#define LED3_Active_Low

	#define LED1_GPIO_Port GPIOB 
	#define LED1_Pin GPIO_PIN_3	/* green */
	#define LED1_Mode GPIO_MODE_OUTPUT_OD
	#define LED1_Active_Low
#elif BOARD==BOARD_ollie
	#define USBD_PRODUCT_STRING_FS		(uint8_t*) "Ollie USB to CAN adapter"
	#define USBD_MANUFACTURER_STRING	(uint8_t*) "slim"
	#define DFU_INTERFACE_STRING_FS		(uint8_t*) "Ollie firmware upgrade interface"

	#define OUTPUT_EN_5V_Pin 			GPIO_PIN_13
	#define OUTPUT_EN_5V_GPIO_Port		GPIOC
	#define OUTPUT_EN_3V3_Pin 			GPIO_PIN_14
	#define OUTPUT_EN_3V3_GPIO_Port 	GPIOC
	#define OUTPUT_EN_1V8_Pin 			GPIO_PIN_15
	#define OUTPUT_EN_1V8_GPIO_Port 	GPIOC
	#define SW1_Pin 					GPIO_PIN_2
	#define SW1_GPIO_Port 				GPIOA
	#define LED_5V_Pin 					GPIO_PIN_5
	#define LED_5V_GPIO_Port 			GPIOA
	#define LED_3V3_Pin 				GPIO_PIN_6
	#define LED_3V3_GPIO_Port 			GPIOA
	#define LED_1V8_Pin 				GPIO_PIN_7
	#define LED_1V8_GPIO_Port 			GPIOA
	#define VS_5V_Pin 					GPIO_PIN_6
	#define VS_5V_GPIO_Port 			GPIOB
	#define VS_3V3_Pin 					GPIO_PIN_5
	#define VS_3V3_GPIO_Port 			GPIOB
	#define VS_1V8_Pin 					GPIO_PIN_4
	#define VS_1V8_GPIO_Port 			GPIOB
	#else
	#error please define BOARD
#endif
