#include "STM32F411xx_SD_SPI.h"

uint8_t __BUFFER[512];

int main(void)
{
	char* str = "Hello, This String Will Be Stored On The SD Card!!";

	memset(__BUFFER, 0x00, sizeof(__BUFFER));

	if(SD_Init()== 0) while(1);

	SD_readBlock(0, __BUFFER);

	memset(__BUFFER, 0x00, sizeof(__BUFFER));

	memcpy(__BUFFER, str, strlen(str));

	SD_writeBlock(0, __BUFFER);

	memset(__BUFFER, 0x00, sizeof(__BUFFER));

	SD_readBlock(0, __BUFFER);

	while(1)
	{

	}
	return 0;
}
