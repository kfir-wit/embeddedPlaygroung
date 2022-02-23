/*
 * main.h
 *
 *  Created on: 22 Oct 2021
 *      Author: kfir
 */

#ifndef MAIN_H_
#define MAIN_H_

#include <stdint.h>

/*
 RCC_AHB1ENR
 Address offset: 0x30
 Reset value: 0x0010 0000
 */
typedef struct
{
	uint32_t gpioa_en		:1;
	uint32_t gpiob_en		:1;
	uint32_t gpioc_en		:1;
	uint32_t gpiod_en		:1;
	uint32_t gpioe_en		:1;
	uint32_t gpiof_en		:1;
	uint32_t gpiog_en		:1;
	uint32_t gpioh_en		:1;
	uint32_t gpioi_en		:1;
	uint32_t reserved1		:3;
	uint32_t crc_en			:1;
	uint32_t reserved2		:5;
	uint32_t bkpsram_en		:1;
	uint32_t reserved3		:1;
	uint32_t ccmdataram_en	:1;
	uint32_t dma1_en		:1;
	uint32_t dma2_en		:1;
	uint32_t reserved4		:2;
	uint32_t ethmac_en		:1;
	uint32_t ethmactx_en	:1;
	uint32_t ethmacrx_en	:1;
	uint32_t ethmacptp_en	:1;
	uint32_t otghs_en		:1;
	uint32_t otghsulpi_en	:1;
	uint32_t reserved5		:1;
}RCC_AHB1ENR_t;

/*
 GPIOx_MODER
 Address offset: 0x00
 Reset value:
 	 0xA800 0000 for port A
 	 0x0000 0280 for port B
 	 0x0000 0000 for other ports
 Modes:
 	 00: Input (reset state)
 	 01: General purpose output mode
 	 10: Alternate function mode
 	 11: Analog mode
 */
typedef struct
{
	uint32_t moder0		:2;
	uint32_t moder1		:2;
	uint32_t moder2		:2;
	uint32_t moder3		:2;
	uint32_t moder4		:2;
	uint32_t moder5		:2;
	uint32_t moder6		:2;
	uint32_t moder7		:2;
	uint32_t moder8		:2;
	uint32_t moder9		:2;
	uint32_t moder10	:2;
	uint32_t moder11	:2;
	uint32_t moder12	:2;
	uint32_t moder13	:2;
	uint32_t moder14	:2;
	uint32_t moder15	:2;
}GPIOx_MODER_t;


/*
 GPIOx_IDR
 Address offset: 0x10
 Reset value:
 	 0x0000 XXXX
 */
typedef struct
{
	uint32_t idr0		:1;
	uint32_t idr1		:1;
	uint32_t idr2		:1;
	uint32_t idr3		:1;
	uint32_t idr4		:1;
	uint32_t idr5		:1;
	uint32_t idr6		:1;
	uint32_t idr7		:1;
	uint32_t idr8		:1;
	uint32_t idr9		:1;
	uint32_t idr10		:1;
	uint32_t idr11		:1;
	uint32_t idr12		:1;
	uint32_t idr13		:1;
	uint32_t idr14		:1;
	uint32_t idr15		:1;
	uint32_t reserved	:16;
}GPIOx_IDR_t;

/*
 GPIOx_ODR
 Address offset: 0x14
 Reset value:
 	 0x0000 0000
 */
typedef struct
{
	uint32_t odr0		:1;
	uint32_t odr1		:1;
	uint32_t odr2		:1;
	uint32_t odr3		:1;
	uint32_t odr4		:1;
	uint32_t odr5		:1;
	uint32_t odr6		:1;
	uint32_t odr7		:1;
	uint32_t odr8		:1;
	uint32_t odr9		:1;
	uint32_t odr10		:1;
	uint32_t odr11		:1;
	uint32_t odr12		:1;
	uint32_t odr13		:1;
	uint32_t odr14		:1;
	uint32_t odr15		:1;
	uint32_t reserved	:16;
}GPIOx_ODR_t;

/*
 GPIOx_ODR
 Address offset: 0x14
 Reset value:
 	 0x0000 0000

 GPIOx_IDR
 Address offset: 0x10
 Reset value:
 	 0x0000 XXXX
 */
typedef struct
{
	uint32_t dr0		:1;
	uint32_t dr1		:1;
	uint32_t dr2		:1;
	uint32_t dr3		:1;
	uint32_t dr4		:1;
	uint32_t dr5		:1;
	uint32_t dr6		:1;
	uint32_t dr7		:1;
	uint32_t dr8		:1;
	uint32_t dr9		:1;
	uint32_t dr10		:1;
	uint32_t dr11		:1;
	uint32_t dr12		:1;
	uint32_t dr13		:1;
	uint32_t dr14		:1;
	uint32_t dr15		:1;
	uint32_t reserved	:16;
}GPIOx_IODR_t;



#endif /* MAIN_H_ */
