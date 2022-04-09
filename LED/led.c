#include "led.h"

void LED_Init(void)
{
	GPIO_InitTypeDef  GPIO_InitStruce;
	__HAL_RCC_GPIOF_CLK_ENABLE();
	
	GPIO_InitStruce.Mode=GPIO_MODE_OUTPUT_PP;
	GPIO_InitStruce.Pin=GPIO_PIN_9|GPIO_PIN_10;
	GPIO_InitStruce.Pull=GPIO_PULLUP;
	GPIO_InitStruce.Speed=GPIO_SPEED_FREQ_HIGH;
	HAL_GPIO_Init(GPIOF,&GPIO_InitStruce);
	
	HAL_GPIO_WritePin(GPIOF,GPIO_PIN_9,GPIO_PIN_SET);    //ºìµÆ
	HAL_GPIO_WritePin(GPIOF,GPIO_PIN_10,GPIO_PIN_SET);   //ÂÌµÆ
	
}

