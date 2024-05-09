/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define B1_Pin GPIO_PIN_13
#define B1_GPIO_Port GPIOC
#define USART_TX_Pin GPIO_PIN_2
#define USART_TX_GPIO_Port GPIOA
#define USART_RX_Pin GPIO_PIN_3
#define USART_RX_GPIO_Port GPIOA
#define LD0_Pin GPIO_PIN_5
#define LD0_GPIO_Port GPIOA
#define LD1_Pin GPIO_PIN_6
#define LD1_GPIO_Port GPIOA
#define LD2_Pin GPIO_PIN_11
#define LD2_GPIO_Port GPIOA
#define LD3_Pin GPIO_PIN_12
#define LD3_GPIO_Port GPIOA
#define TMS_Pin GPIO_PIN_13
#define TMS_GPIO_Port GPIOA
#define TCK_Pin GPIO_PIN_14
#define TCK_GPIO_Port GPIOA
#define SWO_Pin GPIO_PIN_3
#define SWO_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */
#define LED0_ON()		(LED_0_GPIO_Port->BSRR = (LED_0_Pin))
#define LED0_OFF()		(LED_0_GPIO_Port->BSRR = (LED_0_Pin)<<16)
#define LED0_TOGGLE()   (LED_0_GPIO_Port->ODR ^= (LED_0_Pin))
#define LED0_FLASH()	do{LED0_TOGGLE(); LED0_TOGGLE();} while(0)

#define LED1_ON()		(LED_1_GPIO_Port->BSRR = (LED_1_Pin))
#define LED1_OFF()		(LED_1_GPIO_Port->BSRR = (LED_1_Pin)<<16)
#define LED1_TOGGLE()   (LED_1_GPIO_Port->ODR ^= (LED_1_Pin))
#define LED1_FLASH()	do{LED1_TOGGLE(); LED1_TOGGLE();} while(0)

#define LED2_ON()		(LED_2_GPIO_Port->BSRR = (LED_2_Pin))
#define LED2_OFF()		(LED_2_GPIO_Port->BSRR = (LED_2_Pin)<<16)
#define LED2_TOGGLE()   (LED_2_GPIO_Port->ODR ^= (LED_2_Pin))
#define LED2_FLASH()	do{LED2_TOGGLE(); LED2_TOGGLE();} while(0)

#define LED3_ON()		(LED_3_GPIO_Port->BSRR = (LED_3_Pin))
#define LED3_OFF()		(LED_3_GPIO_Port->BSRR = (LED_3_Pin)<<16)
#define LED3_TOGGLE()   (LED_3_GPIO_Port->ODR ^= (LED_3_Pin))
#define LED3_FLASH()	do{LED3_TOGGLE(); LED3_TOGGLE();} while(0)

#define LED4_ON()		(LED_4_GPIO_Port->BSRR = (LED_4_Pin))
#define LED4_OFF()		(LED_4_GPIO_Port->BSRR = (LED_4_Pin)<<16)
#define LED4_TOGGLE()   (LED_4_GPIO_Port->ODR ^= (LED_4_Pin))
#define LED4_FLASH()	do{LED4_TOGGLE(); LED4_TOGGLE();} while(0)

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
