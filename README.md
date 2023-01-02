# STM32_F4xx_HAL_Template_Linux
STM32_F4xx_HAL_Template created for vscode &amp;&amp; linux Env

***ENV***

ubuntu 18.04 + vscode + stlink v2 (if you have a different downloader, changing the makefile download command)

***How to use?***

command: 
```
build: make
download: download
build & download: make download
```
***code stucture***
```
├── Core   
│   ├── Inc
│   └── Src
├── Drivers
│   ├── CMSIS
│   └── STM32F4xx_HAL_Driver
├── Hardware
│   ├── Inc
│   └── Src
├── System
│   ├── Inc
│   └── Src
└── User
    ├── Inc
    └── Src
├── Makefile
├── startup_stm32f407xx.s
├── STM32F407ZGTx_FLASH.ld
```
