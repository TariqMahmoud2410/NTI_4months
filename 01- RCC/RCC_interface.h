/****************************************/
/* Author  : Tariq Mahmoud				*/
/* Date    : 31 Oct 2023				*/
/* Version : V01                        */
/****************************************/

#ifndef RCC_INTERFACE_H_
#define RCC_INTERFACE_H_

/** BUS CHOICE AS INPUT FOR ENABLE & DISABLE PERIPHERAL FUNCTION .. CHOICE 2,3 IS ONLY THE CHOICES FOR RESET FUNCTION
1- AHB_BUS
2- APB1_BUS
3- APB2_BUS
**/ 

/** AHB PERIPHERAL CHOICE AS INPUT FOR ENABLE & DISABLE PERIPHERAL FUNCTION
1- DMA1EN 
2- DMA2EN 
3- SRAMEN 
4- FLITFEN
5- CRCEN  
6- FSMCEN 
7- SDIOEN 
**/
 
/** APB2 PERIPHERAL CHOICE AS INPUT FOR ENABLE & DISABLE PERIPHERAL FUNCTION
1-  AFIOEN  
2-  GPIOAEN 
3-  GPIOBEN 
4-  GPIOCEN 
5-  GPIODEN 
6-  GPIOEEN 
7-  GPIOFEN 
8-  GPIOGEN 
9-  ADC1EN  
10- ADC2EN  
11- TIM1EN  
12- SPI1EN  
13- TIM8EN  
14- USART1EN
15- ADC3EN  
16- TIM9EN  
17- TIM10EN 
18- TIM11EN 
**/

/** APB1 PERIPHERAL CHOICE  AS INPUT FOR ENABLE & DISABLE PERIPHERAL FUNCTION
1-  TIM2EN  
2-  TIM3EN  
3-  TIM4EN  
4-  TIM5EN  
5-  TIM6EN  
6-  TIM7EN  
7-  TIM12EN 
8-  TIM13EN 
9-  TIM14EN 
10- WWDGEN  
11- SPI2EN  
12- SPI3EN  
13- USART2EN
14- USART3EN
15- UART4EN 
16- UART5EN 
17- I2C1EN  
18- I2C2EN  
19- USBEN   
20- CANEN   
21- BKPEN   
22- PWREN   
23- DACEN   
**/


/** APB2 PERIPHERAL CHOICE AS INPUT FOR RESET PERIPHERAL FUNCTION
1-  AFIORST  
2-  GPIOARST 
3-  GPIOBRST 
4-  GPIOCRST 
5-  GPIODRST 
6-  GPIOERST 
7-  GPIOFRST 
8-  GPIOGRST 
9-  ADC1RST  
10- ADC2RST  
11- TIM1RST  
12- SPI1RST  
13- TIM8RST  
14- USART1RST
15- ADC3RST  
16- TIM9RST  
17- TIM10RST 
18- TIM11RST 
**/

/** APB1 PERIPHERAL CHOICE  AS INPUT FOR RESET PERIPHERAL FUNCTION
1-  TIM2RST  
2-  TIM3RST  
3-  TIM4RST  
4-  TIM5RST  
5-  TIM6RST  
6-  TIM7RST  
7-  TIM12RST 
8-  TIM13RST 
9-  TIM14RST 
10- WWDGRST  
11- SPI2RST  
12- SPI3RST  
13- USART2RST
14- USART3RST
15- UART4RST 
16- UART5RST 
17- I2C1RST  
18- I2C2RST  
19- USBRST   
20- CANRST   
21- BKPRST   
22- PWRRST   
23- DACRST   
**/

void RCC_voidInit(void);
void RCC_voidEnablePeripheral(u8 Copy_u8PeripheralBus,u8 Copy_u8Peripheral);
void RCC_voidDisablePeripheral(u8 Copy_u8PeripheralBus,u8 Copy_u8Peripheral);
void RCC_voidResetPeripheral(u8 Copy_u8PeripheralBus,u8 Copy_u8Peripheral);

#endif 