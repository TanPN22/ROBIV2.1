/*******************************************************************************
 *
 * Copyright (c) 2020
 * Lumi, JSC.
 * All Rights Reserved
 *
 *
 * Description: Include file for application
 *
 * Author: TanPN
 *
 * Last Changed By:  $Author: TanPN $
 * Revision:         $Revision: 1.0 $
 * Last Changed:     $Date: 4/1/2024 $
 *
 ******************************************************************************/


#ifndef SHARED_MIDDLE_SERIAL_UART_H_
#define SHARED_MIDDLE_SERIAL_UART_H_

#define countof(a)   (sizeof(a) / sizeof(*(a)))
#define TxBufferSize1   (countof(TxBuffer) - 1)

#define USART_CLK               RCC_APB2Periph_USART1
#define USART_GPIO_CLK          RCC_APB2Periph_GPIOA
#define USART_PORT 				GPIOA
#define USART_TX_PIN 			9
#define USART_RX_PIN 			10
#define USART_IRQn              USART1_IRQn
#define USART_IRQHandler        USART1_IRQHandler

//extern uint8_t data_rx;
//extern char uart_buff[50];
extern char cmd_buff[15];

void UART_Init(void);

/*
 * Use var data_rx to get one character data
 * Use uart_buff to get the array data
 */
void USART1_IRQHandler(void);

#endif /* SHARED_MIDDLE_SERIAL_UART_H_ */
