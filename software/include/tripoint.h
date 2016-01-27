#ifndef __TRIPOINT_H
#define __TRIPOINT_H

#include "stm32f0xx.h"


/******************************************************************************/
// LEDS
/******************************************************************************/
#define LEDn                             2

#define LED1                             0
#define LED1_PIN                         GPIO_Pin_9
#define LED1_GPIO_PORT                   GPIOC
#define LED1_GPIO_CLK                    RCC_AHBPeriph_GPIOC

#define LED2                             1
#define LED2_PIN                         GPIO_Pin_8
#define LED2_GPIO_PORT                   GPIOC
#define LED2_GPIO_CLK                    RCC_AHBPeriph_GPIOC


/******************************************************************************/
// INTERRUPT TO HOST DEVICE
/********************************************************************************/
#define INTERRUPT_PIN GPIO_Pin_5
#define INTERRUPT_PORT GPIOB
#define INTERRUPT_CLK RCC_AHBPeriph_GPIOB

/******************************************************************************/
// I2C
/******************************************************************************/
#define I2C_OWN_ADDRESS 0xe8
#define I2C_TIMING              0x00731012



/******************************************************************************/
// SPI
/******************************************************************************/

/* USER_TIMEOUT value for waiting loops. This timeout is just guarantee that the
   application will not remain stuck if the USART communication is corrupted.
   You may modify this timeout value depending on CPU frequency and application
   conditions (interrupts routines, number of data to transfer, baudrate, CPU
   frequency...). */
#define USER_TIMEOUT                    ((uint32_t)0x64) /* Waiting 1s */

/* Communication boards SPIx Interface */
#define SPI1_DR_ADDRESS                  0x4001300C
#define SPI1_TX_DMA_CHANNEL              DMA1_Channel3
#define SPI1_TX_DMA_FLAG_TC              DMA1_FLAG_TC3
#define SPI1_TX_DMA_FLAG_GL              DMA1_FLAG_GL3
#define SPI1_RX_DMA_CHANNEL              DMA1_Channel2
#define SPI1_RX_DMA_FLAG_TC              DMA1_FLAG_TC2
#define SPI1_RX_DMA_FLAG_GL              DMA1_FLAG_GL2
#define SPI1_DMA_IRQn                    DMA1_Channel2_3_IRQn


#define DMA1_CLK                         RCC_AHBPeriph_DMA1

#define SPI1_CLK                         RCC_APB2Periph_SPI1
#define SPI1_IRQn                        SPI1_IRQn
#define SPI1_IRQHandler                  SPI1_IRQHandler

#define SPI1_SCK_PIN                     GPIO_Pin_5
#define SPI1_SCK_GPIO_PORT               GPIOA
#define SPI1_SCK_GPIO_CLK                RCC_AHBPeriph_GPIOA
#define SPI1_SCK_SOURCE                  GPIO_PinSource5
#define SPI1_SCK_AF                      GPIO_AF_0

#define SPI1_MISO_PIN                    GPIO_Pin_4
#define SPI1_MISO_GPIO_PORT              GPIOB
#define SPI1_MISO_GPIO_CLK               RCC_AHBPeriph_GPIOB
#define SPI1_MISO_SOURCE                 GPIO_PinSource4
#define SPI1_MISO_AF                     GPIO_AF_0

#define SPI1_MOSI_PIN                    GPIO_Pin_7
#define SPI1_MOSI_GPIO_PORT              GPIOA
#define SPI1_MOSI_GPIO_CLK               RCC_AHBPeriph_GPIOA
#define SPI1_MOSI_SOURCE                 GPIO_PinSource7
#define SPI1_MOSI_AF                     GPIO_AF_0

#define SPI1_NSS_PIN                     GPIO_Pin_15
#define SPI1_NSS_GPIO_PORT               GPIOA
#define SPI1_NSS_GPIO_CLK                RCC_AHBPeriph_GPIOA
#define SPI1_NSS_SOURCE                  GPIO_PinSource15
#define SPI1_NSS_AF                      GPIO_AF_0


/******************************************************************************/
// INTERRUPT FROM DECAWAVE
/********************************************************************************/
#define DW_INTERRUPT_PIN GPIO_Pin_2
#define DW_INTERRUPT_PORT GPIOA
#define DW_INTERRUPT_CLK RCC_AHBPeriph_GPIOA
#define DW_INTERRUPT_EXTI_LINE EXTI_Line2
#define DW_INTERRUPT_EXTI_IRQn EXTI2_3_IRQn
#define DW_INTERRUPT_EXTI_PORT EXTI_PortSourceGPIOA
#define DW_INTERRUPT_EXTI_PIN EXTI_PinSource2

/******************************************************************************/
// DECAWAVE RESET
/********************************************************************************/
#define DW_RESET_PIN GPIO_Pin_0
#define DW_RESET_PORT GPIOB
#define DW_RESET_CLK RCC_AHBPeriph_GPIOB





#endif
