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
#define LD0_ON()		(LD0_GPIO_Port->BSRR = (LD0_Pin))
#define LD0_OFF()		(LD0_GPIO_Port->BSRR = (LD0_Pin)<<16)
#define LD0_TOGGLE()   (LD0_GPIO_Port->ODR ^= (LD0_Pin))
#define LD0_FLASH()	do{LD0_TOGGLE(); LD0_TOGGLE();} while(0)

#define LD1_ON()		(LD1_GPIO_Port->BSRR = (LD1_Pin))
#define LD1_OFF()		(LD1_GPIO_Port->BSRR = (LD1_Pin)<<16)
#define LD1_TOGGLE()   (LD1_GPIO_Port->ODR ^= (LD1_Pin))
#define LD1_FLASH()	do{LD1_TOGGLE(); LD1_TOGGLE();} while(0)

#define LD2_ON()		(LD2_GPIO_Port->BSRR = (LD2_Pin))
#define LD2_OFF()		(LD2_GPIO_Port->BSRR = (LD2_Pin)<<16)
#define LD2_TOGGLE()   (LD2_GPIO_Port->ODR ^= (LD2_Pin))
#define LD2_FLASH()	do{LD2_TOGGLE(); LD2_TOGGLE();} while(0)

#define LD3_ON()		(LD3_GPIO_Port->BSRR = (LD3_Pin))
#define LD3_OFF()		(LD3_GPIO_Port->BSRR = (LD3_Pin)<<16)
#define LD3_TOGGLE()   (LD3_GPIO_Port->ODR ^= (LD3_Pin))
#define LD3_FLASH()	do{LD3_TOGGLE(); LD3_TOGGLE();} while(0)


/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
