/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  /* USER CODE BEGIN 2 */
  void display7SEG1(int num)                                        // display the 7-segments LED
  {                                                                 // from 0 to 9
  	if(num==0){
  			HAL_GPIO_WritePin ( SEG_0_GPIO_Port , SEG_0_Pin ,
  								   	  	  	 GPIO_PIN_RESET ) ;
  			HAL_GPIO_WritePin ( SEG_1_GPIO_Port , SEG_1_Pin ,
  				   	  	  	 GPIO_PIN_RESET ) ;
  			HAL_GPIO_WritePin ( SEG_2_GPIO_Port , SEG_2_Pin ,
  						   	  	  	 GPIO_PIN_RESET ) ;
  			HAL_GPIO_WritePin ( SEG_3_GPIO_Port , SEG_3_Pin ,
  						   	  	  	 GPIO_PIN_RESET ) ;
  			HAL_GPIO_WritePin ( SEG_4_GPIO_Port , SEG_4_Pin ,
  						   	  	  	 GPIO_PIN_RESET ) ;
  			HAL_GPIO_WritePin ( SEG_5_GPIO_Port , SEG_5_Pin ,
  						   	  	  	 GPIO_PIN_RESET ) ;
  			HAL_GPIO_WritePin ( SEG_6_GPIO_Port , SEG_6_Pin ,
  						   	  	  	 GPIO_PIN_SET ) ;
  		}
  	if(num==1){
  		HAL_GPIO_WritePin ( SEG_0_GPIO_Port , SEG_0_Pin ,
  							   	  	  	 GPIO_PIN_SET ) ;
  		HAL_GPIO_WritePin ( SEG_1_GPIO_Port , SEG_1_Pin ,
  			   	  	  	 GPIO_PIN_RESET ) ;
  		HAL_GPIO_WritePin ( SEG_2_GPIO_Port , SEG_2_Pin ,
  					   	  	  	 GPIO_PIN_RESET ) ;
  		HAL_GPIO_WritePin ( SEG_3_GPIO_Port , SEG_3_Pin ,
  					   	  	  	 GPIO_PIN_SET ) ;
  		HAL_GPIO_WritePin ( SEG_4_GPIO_Port , SEG_4_Pin ,
  					   	  	  	 GPIO_PIN_SET ) ;
  		HAL_GPIO_WritePin ( SEG_5_GPIO_Port , SEG_5_Pin ,
  					   	  	  	 GPIO_PIN_SET ) ;
  		HAL_GPIO_WritePin ( SEG_6_GPIO_Port , SEG_6_Pin ,
  					   	  	  	 GPIO_PIN_SET ) ;
  	}
  	if(num==2){
  		HAL_GPIO_WritePin ( SEG_0_GPIO_Port , SEG_0_Pin ,
  									   	  	  	 GPIO_PIN_RESET ) ;
  		HAL_GPIO_WritePin ( SEG_1_GPIO_Port , SEG_1_Pin ,
  					   	  	  	 GPIO_PIN_RESET ) ;
  		HAL_GPIO_WritePin ( SEG_2_GPIO_Port , SEG_2_Pin ,
  							   	  	  	 GPIO_PIN_SET ) ;
  		HAL_GPIO_WritePin ( SEG_3_GPIO_Port , SEG_3_Pin ,
  							   	  	  	 GPIO_PIN_RESET ) ;
  		HAL_GPIO_WritePin ( SEG_4_GPIO_Port , SEG_4_Pin ,
  							   	  	  	 GPIO_PIN_RESET ) ;
  		HAL_GPIO_WritePin ( SEG_5_GPIO_Port , SEG_5_Pin ,
  							   	  	  	 GPIO_PIN_SET ) ;
  		HAL_GPIO_WritePin ( SEG_6_GPIO_Port , SEG_6_Pin ,
  							   	  	  	 GPIO_PIN_RESET ) ;

  	}
  	if(num==3){
  		HAL_GPIO_WritePin ( SEG_0_GPIO_Port , SEG_0_Pin ,
  									   	  	  	 GPIO_PIN_RESET ) ;
  		HAL_GPIO_WritePin ( SEG_1_GPIO_Port , SEG_1_Pin ,
  					   	  	  	 GPIO_PIN_RESET ) ;
  		HAL_GPIO_WritePin ( SEG_2_GPIO_Port , SEG_2_Pin ,
  							   	  	  	 GPIO_PIN_RESET ) ;
  		HAL_GPIO_WritePin ( SEG_3_GPIO_Port , SEG_3_Pin ,
  							   	  	  	 GPIO_PIN_RESET ) ;
  		HAL_GPIO_WritePin ( SEG_4_GPIO_Port , SEG_4_Pin ,
  							   	  	  	 GPIO_PIN_SET ) ;
  		HAL_GPIO_WritePin ( SEG_5_GPIO_Port , SEG_5_Pin ,
  							   	  	  	 GPIO_PIN_SET ) ;
  		HAL_GPIO_WritePin ( SEG_6_GPIO_Port , SEG_6_Pin ,
  							   	  	  	 GPIO_PIN_RESET ) ;

  	}
  	if(num==4){
  		HAL_GPIO_WritePin ( SEG_0_GPIO_Port , SEG_0_Pin ,
  									   	  	  	 GPIO_PIN_SET ) ;
  		HAL_GPIO_WritePin ( SEG_1_GPIO_Port , SEG_1_Pin ,
  					   	  	  	 GPIO_PIN_RESET ) ;
  		HAL_GPIO_WritePin ( SEG_2_GPIO_Port , SEG_2_Pin ,
  							   	  	  	 GPIO_PIN_RESET ) ;
  		HAL_GPIO_WritePin ( SEG_3_GPIO_Port , SEG_3_Pin ,
  							   	  	  	 GPIO_PIN_SET ) ;
  		HAL_GPIO_WritePin ( SEG_4_GPIO_Port , SEG_4_Pin ,
  							   	  	  	 GPIO_PIN_SET ) ;
  		HAL_GPIO_WritePin ( SEG_5_GPIO_Port , SEG_5_Pin ,
  							   	  	  	 GPIO_PIN_RESET ) ;
  		HAL_GPIO_WritePin ( SEG_6_GPIO_Port , SEG_6_Pin ,
  							   	  	  	 GPIO_PIN_RESET ) ;
  	}
  	if(num==5){
  		HAL_GPIO_WritePin ( SEG_0_GPIO_Port , SEG_0_Pin ,
  									   	  	  	 GPIO_PIN_RESET ) ;
  		HAL_GPIO_WritePin ( SEG_1_GPIO_Port , SEG_1_Pin ,
  					   	  	  	 GPIO_PIN_SET ) ;
  		HAL_GPIO_WritePin ( SEG_2_GPIO_Port , SEG_2_Pin ,
  							   	  	  	 GPIO_PIN_RESET ) ;
  		HAL_GPIO_WritePin ( SEG_3_GPIO_Port , SEG_3_Pin ,
  							   	  	  	 GPIO_PIN_RESET ) ;
  		HAL_GPIO_WritePin ( SEG_4_GPIO_Port , SEG_4_Pin ,
  							   	  	  	 GPIO_PIN_SET ) ;
  		HAL_GPIO_WritePin ( SEG_5_GPIO_Port , SEG_5_Pin ,
  							   	  	  	 GPIO_PIN_RESET ) ;
  		HAL_GPIO_WritePin ( SEG_6_GPIO_Port , SEG_6_Pin ,
  							   	  	  	 GPIO_PIN_RESET ) ;

  	}
  	if(num==6){
  		HAL_GPIO_WritePin ( SEG_0_GPIO_Port , SEG_0_Pin ,
  									   	  	  	 GPIO_PIN_RESET ) ;
  		HAL_GPIO_WritePin ( SEG_1_GPIO_Port , SEG_1_Pin ,
  					   	  	  	 GPIO_PIN_SET ) ;
  		HAL_GPIO_WritePin ( SEG_2_GPIO_Port , SEG_2_Pin ,
  							   	  	  	 GPIO_PIN_RESET ) ;
  		HAL_GPIO_WritePin ( SEG_3_GPIO_Port , SEG_3_Pin ,
  							   	  	  	 GPIO_PIN_RESET ) ;
  		HAL_GPIO_WritePin ( SEG_4_GPIO_Port , SEG_4_Pin ,
  							   	  	  	 GPIO_PIN_RESET ) ;
  		HAL_GPIO_WritePin ( SEG_5_GPIO_Port , SEG_5_Pin ,
  							   	  	  	 GPIO_PIN_RESET ) ;
  		HAL_GPIO_WritePin ( SEG_6_GPIO_Port , SEG_6_Pin ,
  							   	  	  	 GPIO_PIN_RESET ) ;

  	}
  	if(num==7){
  		HAL_GPIO_WritePin ( SEG_0_GPIO_Port , SEG_0_Pin ,
  									   	  	  	 GPIO_PIN_RESET ) ;
  		HAL_GPIO_WritePin ( SEG_1_GPIO_Port , SEG_1_Pin ,
  					   	  	  	 GPIO_PIN_RESET ) ;
  		HAL_GPIO_WritePin ( SEG_2_GPIO_Port , SEG_2_Pin ,
  							   	  	  	 GPIO_PIN_RESET ) ;
  		HAL_GPIO_WritePin ( SEG_3_GPIO_Port , SEG_3_Pin ,
  							   	  	  	 GPIO_PIN_SET ) ;
  		HAL_GPIO_WritePin ( SEG_4_GPIO_Port , SEG_4_Pin ,
  							   	  	  	 GPIO_PIN_SET ) ;
  		HAL_GPIO_WritePin ( SEG_5_GPIO_Port , SEG_5_Pin ,
  							   	  	  	 GPIO_PIN_SET ) ;
  		HAL_GPIO_WritePin ( SEG_6_GPIO_Port , SEG_6_Pin ,
  							   	  	  	 GPIO_PIN_SET ) ;

  	}
  	if(num==8){
  		HAL_GPIO_WritePin ( SEG_0_GPIO_Port , SEG_0_Pin ,
  									   	  	  	 GPIO_PIN_RESET ) ;
  		HAL_GPIO_WritePin ( SEG_1_GPIO_Port , SEG_1_Pin ,
  					   	  	  	 GPIO_PIN_RESET ) ;
  		HAL_GPIO_WritePin ( SEG_2_GPIO_Port , SEG_2_Pin ,
  							   	  	  	 GPIO_PIN_RESET ) ;
  		HAL_GPIO_WritePin ( SEG_3_GPIO_Port , SEG_3_Pin ,
  							   	  	  	 GPIO_PIN_RESET ) ;
  		HAL_GPIO_WritePin ( SEG_4_GPIO_Port , SEG_4_Pin ,
  							   	  	  	 GPIO_PIN_RESET ) ;
  		HAL_GPIO_WritePin ( SEG_5_GPIO_Port , SEG_5_Pin ,
  							   	  	  	 GPIO_PIN_RESET ) ;
  		HAL_GPIO_WritePin ( SEG_6_GPIO_Port , SEG_6_Pin ,
  							   	  	  	 GPIO_PIN_RESET ) ;

  	}
  	if(num==9){
  		HAL_GPIO_WritePin ( SEG_0_GPIO_Port , SEG_0_Pin ,
  									   	  	  	 GPIO_PIN_RESET ) ;
  		HAL_GPIO_WritePin ( SEG_1_GPIO_Port , SEG_1_Pin ,
  					   	  	  	 GPIO_PIN_RESET ) ;
  		HAL_GPIO_WritePin ( SEG_2_GPIO_Port , SEG_2_Pin ,
  							   	  	  	 GPIO_PIN_RESET ) ;
  		HAL_GPIO_WritePin ( SEG_3_GPIO_Port , SEG_3_Pin ,
  							   	  	  	 GPIO_PIN_RESET ) ;
  		HAL_GPIO_WritePin ( SEG_4_GPIO_Port , SEG_4_Pin ,
  							   	  	  	 GPIO_PIN_SET ) ;
  		HAL_GPIO_WritePin ( SEG_5_GPIO_Port , SEG_5_Pin ,
  							   	  	  	 GPIO_PIN_RESET ) ;
  		HAL_GPIO_WritePin ( SEG_6_GPIO_Port , SEG_6_Pin ,
  							   	  	  	 GPIO_PIN_RESET ) ;

  	}

  }

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
      int time = 9;                                              // countdown time from 9 to 0
      int display = 0;                                           // set start display is 0
      HAL_GPIO_WritePin ( LED_RED_GPIO_Port , LED_RED_Pin ,
           GPIO_PIN_SET );                                                                   //
       HAL_GPIO_WritePin ( LED_YELLOW_GPIO_Port , LED_YELLOW_Pin,                            //
           GPIO_PIN_SET ) ;                                                                  //
       HAL_GPIO_WritePin ( LED_GREEN_GPIO_Port , LED_GREEN_Pin ,	   GPIO_PIN_SET ) ;      //turn off all the light at first
       HAL_GPIO_WritePin ( LED_RED2_GPIO_Port , LED_RED2_Pin ,		  GPIO_PIN_SET ) ;       //
       HAL_GPIO_WritePin ( LED_YELLOW2_GPIO_Port , LED_YELLOW2_Pin,	GPIO_PIN_SET ) ;         //
       HAL_GPIO_WritePin ( LED_GREEN2_GPIO_Port , LED_GREEN2_Pin ,	GPIO_PIN_SET ) ;         //
  while (1)
  {
    /* USER CODE END WHILE */
    /* USER CODE BEGIN 3 */

	  if(time <= -1){                                          // if time <0 then reup to 9
		  time = 9;
	  }

	  	  if(time == 9) {
	  		  display = 2;                                      // GREEN LIGHT COUNTDOWN
	  	  }
	  	  if(time == 6) {
	  		  display = 1;                                      // YELLOW LIGHT COUNTDOWN
	  	  }
	  	  if(time == 4) {
	  		  display = 4;                                      // RED LIGHT    COUNTDOWN
	  	  }
	  	  if(time >=5 && time <10){

	  		  display7SEG1(display--);                                   // MAKE THE 7_SEG COUNTDOWN FROM 9 TO 0
	  		  HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);    // TURN OFF RED LIGHT AT FIRST
	  	// NUMBER 1 TRAFFIC LIGHT
	  		  if(time >= 7){
	  	  		  HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
	  	  		  HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, RESET);
	  		  }
	  		  if(time < 7){
	  	  		  HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, RESET);
	  	  		  HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
	  		  }

	  		  HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, RESET);
	  		  HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, SET);
	  		  HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, SET);
	  	  }
	//  	  SECOND TRAFFIC LIGHT
	  	  if(time >= 0 && time <5){

	  		  display7SEG1(display--);
	  		  HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);
	  		  HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
	  		  HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
	  		  HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, SET);
	  		  if(time < 2){
	  			  HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, RESET);
	  			  HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, SET);
	  		  }
	  		  if(time >= 2){
	  			  HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, SET);
				  HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, RESET);
	  		  }
	  	  }
	  	  time--;
	  	  HAL_Delay(1000);
	    /* USER CODE END WHILE */

	    /* USER CODE BEGIN 3 */
	  }

  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, LED_RED_Pin|LED_YELLOW_Pin|LED_GREEN_Pin|LED_RED2_Pin
                          |LED_YELLOW2_Pin|LED_GREEN2_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, SEG_0_Pin|SEG_1_Pin|SEG_2_Pin|SEG_3_Pin
                          |SEG_4_Pin|SEG_5_Pin|SEG_6_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : LED_RED_Pin LED_YELLOW_Pin LED_GREEN_Pin LED_RED2_Pin
                           LED_YELLOW2_Pin LED_GREEN2_Pin */
  GPIO_InitStruct.Pin = LED_RED_Pin|LED_YELLOW_Pin|LED_GREEN_Pin|LED_RED2_Pin
                          |LED_YELLOW2_Pin|LED_GREEN2_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : SEG_0_Pin SEG_1_Pin SEG_2_Pin SEG_3_Pin
                           SEG_4_Pin SEG_5_Pin SEG_6_Pin */
  GPIO_InitStruct.Pin = SEG_0_Pin|SEG_1_Pin|SEG_2_Pin|SEG_3_Pin
                          |SEG_4_Pin|SEG_5_Pin|SEG_6_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
