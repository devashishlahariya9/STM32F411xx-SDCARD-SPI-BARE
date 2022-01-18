#include "STM32F411xx_SD_SPI.h"

uint8_t __buffer[512];

int main(void)
{
	char* str = "Hello, This String Will Be Stored On The SD Card!!";

	memset(__buffer, 0x00, sizeof(__buffer));

	if(SD_Init()== 0) while(1);

	SD_readBlock(0, __buffer);

	memset(__buffer, 0x00, sizeof(__buffer));

	memcpy(__buffer, str, strlen(str));

	SD_writeBlock(0, __buffer);

	memset(__buffer, 0x00, sizeof(__buffer));

	SD_readBlock(0, __buffer);

	while(1)
	{

	}
	return 0;
}
