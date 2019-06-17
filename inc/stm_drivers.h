/*
 * stm_drivers.h
 *
 *  Created on: Jun 16, 2019
 *      Author: javie
 */

#ifndef STM_DRIVERS_H_
#define STM_DRIVERS_H_

#include "stm32f10x.h"
#include "stm32f10x_rcc.h"
#include "stm32f10x_gpio.h"
#include "stm32f10x_spi.h"
#include "defines.h"

#define SPI_IS_BUSY(SPIx) (((SPIx)->SR & (SPI_SR_TXE | SPI_SR_RXNE)) == 0 || ((SPIx)->SR & SPI_SR_BSY))
#define SPI_WAIT(SPIx)            while (SPI_IS_BUSY(SPIx))
#define SPI_CHECK_ENABLED(SPIx)   if (!((SPIx)->CR1 & SPI_CR1_SPE)) {return;}
#define SPI_CHECK_ENABLED_RESP(SPIx, val)   if (!((SPIx)->CR1 & SPI_CR1_SPE)) {return (val);}

void TM_SPI_Init_LL();
void TM_SPI_ReadMulti(SPI_TypeDef* SPIx, uint8_t* dataIn, uint8_t dummy, uint32_t count);
void TM_SPI_WriteMulti(SPI_TypeDef* SPIx, uint8_t* dataOut, uint32_t count);
void TM_GPIO_Init(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin, GPIOMode_TypeDef GPIO_Mode, GPIOSpeed_TypeDef GPIO_Speed);
void TM_DELAY_Init(void);

static __INLINE uint8_t TM_SPI_Send(SPI_TypeDef* SPIx, uint8_t data) {
	/* Check if SPI is enabled */
	SPI_CHECK_ENABLED_RESP(SPIx, 0);

	/* Wait for previous transmissions to complete if DMA TX enabled for SPI */
	SPI_WAIT(SPIx);

	/* Fill output buffer with data */
	SPIx->DR = data;

	/* Wait for transmission to complete */
	SPI_WAIT(SPIx);

	/* Return data from buffer */
	return SPIx->DR;
}





#endif /* STM_DRIVERS_H_ */
