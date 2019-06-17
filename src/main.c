/**
  ******************************************************************************
  * @file    main.c
  * @author  Ac6
  * @version V1.0
  * @date    01-December-2013
  * @brief   Default main function.
  ******************************************************************************
*/


#include "stm32f10x.h"
#include "stm32f1xx_nucleo.h"
#include "stm_drivers.h"
#include "tm_delay.h"
#include "tm_stm32f4_fatfs.h"


int main(void)
{
	FATFS FatFs;
	FIL fil;
	uint32_t total, free;
	SystemInit();
	TM_DELAY_Init();
	int counter;

	if (f_mount(&FatFs, "", 1) == FR_OK)
	{

		TM_FATFS_DriveSize(&total, &free);	//for debugging
		if (open_append(&fil, "logfile.txt") != FR_OK) return 1;
		f_printf(&fil, "This is the first thing to comes to my mind --> %d ", counter);
		f_close(&fil);
		f_mount(0, "", 1);
	}

	while (1);
}
