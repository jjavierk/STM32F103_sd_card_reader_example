# STM32F103_sd_card_reader_example
Example for writing/reading data from an SD card using the SPI bus of an STM32F103, based on the library of TILZ0R for the STM32F4xx.

This is a System Workbench for STM32 project (Stdlib). The code is an adaptation of the work done in http://stm32f4-discovery.net/2014/07/library-21-read-sd-card-fatfs-stm32f4xx-devices/ for STM32F4. Instead, this is a code for the STM32F103Cxxx. This version of the MCU (Cxxx) only has 48 pins, where the SDIO pins are not present. Hence,  the only way to interface with the SD card is thought the SPI.

The low level drivers are in stm32_drivers.c. The program also makes use of some delay functions based on the code of TILZ0R as well. If you wish to modify the SPI parameters or the CS with your specific requirements, please open the defines.h file.
