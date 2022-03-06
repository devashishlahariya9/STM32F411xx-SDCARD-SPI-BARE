#include <string.h>
#include "STM32F411xx_SD_SPI.h"

#define SPI_SS	6

SD_CARD SD;

int main(void)
{
	char write_buffer[512];
	char read_buffer[512];

	memset(write_buffer, 'A',  sizeof(write_buffer));
	memset(read_buffer,  0x00, sizeof(read_buffer));

 	if(SD_Init(&SD, SPI1, SPI1_USE_GPIOB, GPIOB, SPI_SS) == 0) while(1);

 	SD_WriteBlock(&SD, 0, (uint8_t*)write_buffer);

 	SD_ReadBlock(&SD, 0, (uint8_t*)read_buffer);

	while(1)
	{

	}
	return 0;
}
