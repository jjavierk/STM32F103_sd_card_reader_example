/*
 * stm_drivers.c
 *
 *  Created on: Jun 16, 2019
 *      Author: javie
 */


//#include "attributes.h"
//#include "tm_gpio.h"

#include "stm_drivers.h"

void TM_SPI_Init_LL(){

	GPIO_InitTypeDef  GPIO_InitStructure;
	SPI_InitTypeDef   SPI_InitStructure;

	RCC_APB2PeriphClockCmd(SPI_APB2, ENABLE);
	RCC_APB2PeriphClockCmd(SPI_GPIO_APB2, ENABLE);

	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_InitStructure.GPIO_Pin = SPI_GPIO_MOSI | SPI_GPIO_MISO | SPI_GPIO_SCK;
	GPIO_Init(SPI_GPIO_PORT, &GPIO_InitStructure);

	SPI_InitStructure.SPI_Direction = SPI_Direction_2Lines_FullDuplex;
	SPI_InitStructure.SPI_DataSize = SPI_DataSize_8b;
	SPI_InitStructure.SPI_CPOL = SPI_CPOL_Low;
	SPI_InitStructure.SPI_CPHA = SPI_CPHA_1Edge;
	SPI_InitStructure.SPI_NSS = SPI_NSS_Soft;
	SPI_InitStructure.SPI_BaudRatePrescaler = SPI_BaudRatePrescaler_32;
	SPI_InitStructure.SPI_FirstBit = SPI_FirstBit_MSB;
	SPI_InitStructure.SPI_Mode = SPI_Mode_Master;
	SPI_InitStructure.SPI_NSS = SPI_NSS_Soft;
	SPI_Cmd(SPI_PORT, DISABLE);
	SPI_Init(SPI_PORT, &SPI_InitStructure);
	SPI_Cmd(SPI_PORT, ENABLE);

}


void TM_SPI_ReadMulti(SPI_TypeDef* SPIx, uint8_t* dataIn, uint8_t dummy, uint32_t count) {
	uint32_t i;

	/* Check if SPI is enabled */
	SPI_CHECK_ENABLED(SPIx);

	/* Wait for previous transmissions to complete if DMA TX enabled for SPI */
	SPI_WAIT(SPIx);

	for (i = 0; i < count; i++) {
		/* Fill output buffer with data */
		SPIx->DR = dummy;

		/* Wait for SPI to end everything */
		SPI_WAIT(SPIx);

		/* Save data to buffer */
		dataIn[i] = SPIx->DR;
	}
}


void TM_SPI_WriteMulti(SPI_TypeDef* SPIx, uint8_t* dataOut, uint32_t count) {
	uint32_t i;

	/* Check if SPI is enabled */
	SPI_CHECK_ENABLED(SPIx);

	/* Wait for previous transmissions to complete if DMA TX enabled for SPI */
	SPI_WAIT(SPIx);

	for (i = 0; i < count; i++) {
		/* Fill output buffer with data */
		SPIx->DR = dataOut[i];

		/* Wait for SPI to end everything */
		SPI_WAIT(SPIx);

		/* Read data register */
		(void)SPIx->DR;
	}
}

void TM_GPIO_Init(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin, GPIOMode_TypeDef GPIO_Mode, GPIOSpeed_TypeDef GPIO_Speed) {

	GPIO_InitTypeDef GPIO_InitStruct;

	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);
	GPIO_InitStruct.GPIO_Pin = GPIO_Pin;
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode;
	GPIO_InitStruct.GPIO_Speed = GPIO_Speed;

	GPIO_Init(GPIOB, &GPIO_InitStruct);
	//GPIO_SetBits(GPIOB, GPIO_PIN_0);
	//GPIO_SetBits(GPIOB, GPIO_PIN_0);
}


