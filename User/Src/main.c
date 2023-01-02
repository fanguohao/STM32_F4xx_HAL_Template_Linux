#include "main.h"
#include "led.h"
#include "sys.h"

void SystemClock_Config(void);

int main(void)
{
  HAL_Init();
  
  sys_stm32_clock_init(336, 8, 2, 7);     /* 设置时钟,168Mhz */
  delay_init(168);                        /* 延时初始化 */
  led_init();
  while (1)
  {
    HAL_GPIO_WritePin(GPIOF, GPIO_PIN_9, RESET);
    HAL_GPIO_WritePin(GPIOF, GPIO_PIN_10, RESET);
    HAL_Delay(2000);
    HAL_GPIO_WritePin(GPIOF, GPIO_PIN_9, SET);
    HAL_GPIO_WritePin(GPIOF, GPIO_PIN_10, SET);
    HAL_Delay(2000);
  }
}

