/**
 *  Defines for your entire project at one place
 * 
 *	@author 	Tilen Majerle
 *	@email		tilen@majerle.eu
 *	@website	http://stm32f4-discovery.com
 *	@version 	v1.0
 *	@ide		Keil uVision 5
 *	@license	GNU GPL v3
 *	
 * |----------------------------------------------------------------------
 * | Copyright (C) Tilen Majerle, 2014
 * | 
 * | This program is free software: you can redistribute it and/or modify
 * | it under the terms of the GNU General Public License as published by
 * | the Free Software Foundation, either version 3 of the License, or
 * | any later version.
 * |  
 * | This program is distributed in the hope that it will be useful,
 * | but WITHOUT ANY WARRANTY; without even the implied warranty of
 * | MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * | GNU General Public License for more details.
 * | 
 * | You should have received a copy of the GNU General Public License
 * | along with this program.  If not, see <http://www.gnu.org/licenses/>.
 * |----------------------------------------------------------------------
 */
#ifndef TM_DEFINES_H
#define TM_DEFINES_H


#define FATFS_SDIO_4BIT         0
#define FATFS_USE_SDIO                0


#define SPI_PORT 		SPI1
#define SPI_APB2		RCC_APB2Periph_SPI1
#define SPI_GPIO_APB2	RCC_APB2Periph_GPIOA

#define SPI_GPIO_PORT	GPIOA
#define SPI_GPIO_MOSI	GPIO_Pin_5
#define SPI_GPIO_MISO	GPIO_Pin_6
#define SPI_GPIO_SCK	GPIO_Pin_7

#define FATFS_CS_PORT	GPIOB
#define FATFS_CS_PIN	GPIO_Pin_0

/*Do not change, this is just for compatibility*/
//#define FATFS_SPI		SPI_PORT


#endif
