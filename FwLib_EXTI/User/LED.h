#ifndef __LED_H__
#define __LED_H__

#include "stm32f10x.h"



#define LED_G_GPIO_PIN		GPIO_Pin_0
#define LED_B_GPIO_PIN		GPIO_Pin_1
#define LED_R_GPIO_PIN		GPIO_Pin_5


#define ON				1
#define OFF				0


#define LED_G_GPIO_PORT		GPIOB
#define LED_G_CLK			RCC_APB2Periph_GPIOB

// \���з�
#define LED(on)			if(on) \
						GPIO_ResetBits(LED_G_GPIO_PORT, LED_B_GPIO_PIN);\
					else   \
						GPIO_SetBits(LED_G_GPIO_PORT, LED_B_GPIO_PIN);
#define LED_G_REVERSE		{ LED_G_GPIO_PORT -> ODR ^=  GPIO_Pin_0;}
	
	
	
	
void LED_GPIO_Config(void);

#endif

