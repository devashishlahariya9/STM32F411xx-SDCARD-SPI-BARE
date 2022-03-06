# STM32F411xx-SDCARD-SPI-BARE
SD Card Drivers For STM32F411xx. Tested on Sandisk 8GB SDHC. Supports Single Block READ/WRITE. Default BLOCK size 512 Bytes.
NOTE: This is a **BARE Driver** and **DOES NOT** have any File System Implemented. 

# Keywords:
1. SD_CARD
2. SD_Init
3. SD_WriteBlock
4. SD_ReadBlock

# API Usage:
1. Initialize The Struct **SD_CARD** with your preferred name.
2. Call The **SD_Init()** Function with appropriate arguments.
3. That's All that's needed for Initialization of the SD Card, You can now READ/WRITE as per your choice.
