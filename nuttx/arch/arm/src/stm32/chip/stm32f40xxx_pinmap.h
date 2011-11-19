/************************************************************************************
 * arch/arm/src/stm32/chip/stm32f40xxx_pinmap.h
 *
 *   Copyright (C) 2011 Gregory Nutt. All rights reserved.
 *   Author: Gregory Nutt <spudmonkey@racsa.co.cr>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name NuttX nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ************************************************************************************/

#ifndef __ARCH_ARM_SRC_STM32_CHIP_STM32F40XXX_PINMAP_H
#define __ARCH_ARM_SRC_STM32_CHIP_STM32F40XXX_PINMAP_H

/************************************************************************************
 * Included Files
 ************************************************************************************/

#include <nuttx/config.h>

#include "stm32_gpio.h"

/************************************************************************************
 * Pre-processor Definitions
 ************************************************************************************/

/* Alternate Pin Functions.  All members of the STM32F40xxx family share the same
 * pin multiplexing (although they may differ in the pins physically available).
 *
 * Alternative pin selections are provided with a numeric suffix like _1, _2, etc.
 * Drivers, however, will use the pin selection without the numeric suffix.
 * Additional definitions are required in the board.h file.  For example, if
 * CAN1_RX connects vis PA11 on some board, then the following definitions should
 * appear inthe board.h header file for that board:
 *
 * #define GPIO_CAN1_RX GPIO_CAN1_RX_1
 *
 * The driver will then automatically configre PA11 as the CAN1 RX pin.
 */

/* CAN */

#define GPIO_CAN1_RX_1        (GPIO_ALT|GPIO_AF9|GPIO_PORTA|GPIO_PIN11)
#define GPIO_CAN1_RX_2        (GPIO_ALT|GPIO_AF9|GPIO_PORTB|GPIO_PIN8)
#define GPIO_CAN1_RX_3        (GPIO_ALT|GPIO_AF9|GPIO_PORTD|GPIO_PIN0)
#define GPIO_CAN1_RX_4        (GPIO_ALT|GPIO_AF9|GPIO_PORTI|GPIO_PIN9)
#define GPIO_CAN1_TX_1        (GPIO_ALT|GPIO_AF9|GPIO_PORTA|GPIO_PIN12)
#define GPIO_CAN1_TX_2        (GPIO_ALT|GPIO_AF9|GPIO_PORTB|GPIO_PIN9)
#define GPIO_CAN1_TX_3        (GPIO_ALT|GPIO_AF9|GPIO_PORTD|GPIO_PIN1)
#define GPIO_CAN1_TX_4        (GPIO_ALT|GPIO_AF9|GPIO_PORTH|GPIO_PIN13)

#define GPIO_CAN2_RX_1        (GPIO_ALT|GPIO_AF9|GPIO_PORTB|GPIO_PIN12)
#define GPIO_CAN2_RX_2        (GPIO_ALT|GPIO_AF9|GPIO_PORTB|GPIO_PIN5)
#define GPIO_CAN2_TX_1        (GPIO_ALT|GPIO_AF9|GPIO_PORTB|GPIO_PIN13)
#define GPIO_CAN2_TX_2        (GPIO_ALT|GPIO_AF9|GPIO_PORTB|GPIO_PIN6)

/* Digital Camera Interface (DCMI) */

#define GPIO_DCMI_D0_1        (GPIO_ALT|GPIO_AF13|GPIO_PORTA|GPIO_PIN9)
#define GPIO_DCMI_D0_2        (GPIO_ALT|GPIO_AF13|GPIO_PORTC|GPIO_PIN6)
#define GPIO_DCMI_D0_3        (GPIO_ALT|GPIO_AF13|GPIO_PORTH|GPIO_PIN9)
#define GPIO_DCMI_D1_1        (GPIO_ALT|GPIO_AF13|GPIO_PORTA|GPIO_PIN10)
#define GPIO_DCMI_D1_2        (GPIO_ALT|GPIO_AF13|GPIO_PORTC|GPIO_PIN7)
#define GPIO_DCMI_D1_3        (GPIO_ALT|GPIO_AF13|GPIO_PORTH|GPIO_PIN10)
#define GPIO_DCMI_D2_1        (GPIO_ALT|GPIO_AF13|GPIO_PORTC|GPIO_PIN8)
#define GPIO_DCMI_D2_2        (GPIO_ALT|GPIO_AF13|GPIO_PORTE|GPIO_PIN0)
#define GPIO_DCMI_D2_3        (GPIO_ALT|GPIO_AF13|GPIO_PORTH|GPIO_PIN11)
#define GPIO_DCMI_D3_1        (GPIO_ALT|GPIO_AF13|GPIO_PORTC|GPIO_PIN9)
#define GPIO_DCMI_D3_2        (GPIO_ALT|GPIO_AF13|GPIO_PORTE|GPIO_PIN1)
#define GPIO_DCMI_D3_3        (GPIO_ALT|GPIO_AF13|GPIO_PORTH|GPIO_PIN12)
#define GPIO_DCMI_D4_1        (GPIO_ALT|GPIO_AF13|GPIO_PORTC|GPIO_PIN11)
#define GPIO_DCMI_D4_2        (GPIO_ALT|GPIO_AF13|GPIO_PORTE|GPIO_PIN4)
#define GPIO_DCMI_D4_3        (GPIO_ALT|GPIO_AF13|GPIO_PORTH|GPIO_PIN14)
#define GPIO_DCMI_D5_1        (GPIO_ALT|GPIO_AF13|GPIO_PORTB|GPIO_PIN6)
#define GPIO_DCMI_D5_2        (GPIO_ALT|GPIO_AF13|GPIO_PORTI|GPIO_PIN4)
#define GPIO_DCMI_D6_1        (GPIO_ALT|GPIO_AF13|GPIO_PORTB|GPIO_PIN8)
#define GPIO_DCMI_D6_2        (GPIO_ALT|GPIO_AF13|GPIO_PORTE|GPIO_PIN5)
#define GPIO_DCMI_D6_3        (GPIO_ALT|GPIO_AF13|GPIO_PORTI|GPIO_PIN6)
#define GPIO_DCMI_D7_1        (GPIO_ALT|GPIO_AF13|GPIO_PORTB|GPIO_PIN9)
#define GPIO_DCMI_D7_2        (GPIO_ALT|GPIO_AF13|GPIO_PORTE|GPIO_PIN6)
#define GPIO_DCMI_D7_2        (GPIO_ALT|GPIO_AF13|GPIO_PORTI|GPIO_PIN7)
#define GPIO_DCMI_D8_1        (GPIO_ALT|GPIO_AF13|GPIO_PORTC|GPIO_PIN10)
#define GPIO_DCMI_D8_2        (GPIO_ALT|GPIO_AF13|GPIO_PORTI|GPIO_PIN1)
#define GPIO_DCMI_D9_1        (GPIO_ALT|GPIO_AF13|GPIO_PORTC|GPIO_PIN12)
#define GPIO_DCMI_D9_2        (GPIO_ALT|GPIO_AF13|GPIO_PORTI|GPIO_PIN2)
#define GPIO_DCMI_D10_1       (GPIO_ALT|GPIO_AF13|GPIO_PORTB|GPIO_PIN5)
#define GPIO_DCMI_D10_2       (GPIO_ALT|GPIO_AF13|GPIO_PORTI|GPIO_PIN3)
#define GPIO_DCMI_D11_1       (GPIO_ALT|GPIO_AF13|GPIO_PORTD|GPIO_PIN2)
#define GPIO_DCMI_D11_2       (GPIO_ALT|GPIO_AF13|GPIO_PORTH|GPIO_PIN15)
#define GPIO_DCMI_D12         (GPIO_ALT|GPIO_AF13|GPIO_PORTF|GPIO_PIN11)
#define GPIO_DCMI_D13_1       (GPIO_ALT|GPIO_AF13|GPIO_PORTG|GPIO_PIN15)
#define GPIO_DCMI_D13_2       (GPIO_ALT|GPIO_AF13|GPIO_PORTI|GPIO_PIN0)
#define GPIO_DCMI_HSYNC_1     (GPIO_ALT|GPIO_AF13|GPIO_PORTA|GPIO_PIN4)
#define GPIO_DCMI_HSYNC_2     (GPIO_ALT|GPIO_AF13|GPIO_PORTH|GPIO_PIN8)
#define GPIO_DCMI_PIXCK       (GPIO_ALT|GPIO_AF13|GPIO_PORTA|GPIO_PIN6)
#define GPIO_DCMI_VSYNC_1     (GPIO_ALT|GPIO_AF13|GPIO_PORTB|GPIO_PIN7)
#define GPIO_DCMI_VSYNC_2     (GPIO_ALT|GPIO_AF13|GPIO_PORTI|GPIO_PIN5)

/* Ethernet MAC */

#define GPIO_MCO1             (GPIO_ALT|GPIO_AF0|GPIO_PORTA|GPIO_PIN8)
#define GPIO_MCO2             (GPIO_ALT|GPIO_AF0|GPIO_PORTC|GPIO_PIN9)

#define GPIO_ETH_MDC          (GPIO_ALT|GPIO_AF11|GPIO_PORTC|GPIO_PIN1)
#define GPIO_ETH_MDIO         (GPIO_ALT|GPIO_AF11|GPIO_PORTA|GPIO_PIN2)
#define GPIO_ETH_MII_COL_1    (GPIO_ALT|GPIO_AF11|GPIO_PORTA|GPIO_PIN3)
#define GPIO_ETH_MII_COL_2    (GPIO_ALT|GPIO_AF11|GPIO_PORTH|GPIO_PIN3)
#define GPIO_ETH_MII_CRS_1    (GPIO_ALT|GPIO_AF11|GPIO_PORTA|GPIO_PIN0)
#define GPIO_ETH_MII_CRS_2    (GPIO_ALT|GPIO_AF11|GPIO_PORTH|GPIO_PIN2)
#define GPIO_ETH_MII_RXD0     (GPIO_ALT|GPIO_AF11|GPIO_PORTC|GPIO_PIN4)
#define GPIO_ETH_MII_RXD1     (GPIO_ALT|GPIO_AF11|GPIO_PORTC|GPIO_PIN5)
#define GPIO_ETH_MII_RXD2_1   (GPIO_ALT|GPIO_AF11|GPIO_PORTB|GPIO_PIN0)
#define GPIO_ETH_MII_RXD2_2   (GPIO_ALT|GPIO_AF11|GPIO_PORTH|GPIO_PIN6)
#define GPIO_ETH_MII_RXD3_1   (GPIO_ALT|GPIO_AF11|GPIO_PORTB|GPIO_PIN1)
#define GPIO_ETH_MII_RXD3_2   (GPIO_ALT|GPIO_AF11|GPIO_PORTH|GPIO_PIN7)
#define GPIO_ETH_MII_RX_CLK   (GPIO_ALT|GPIO_AF11|GPIO_PORTA|GPIO_PIN1)
#define GPIO_ETH_MII_RX_DV    (GPIO_ALT|GPIO_AF11|GPIO_PORTA|GPIO_PIN7)
#define GPIO_ETH_MII_RX_ER_1  (GPIO_ALT|GPIO_AF11|GPIO_PORTB|GPIO_PIN10)
#define GPIO_ETH_MII_RX_ER_2  (GPIO_ALT|GPIO_AF11|GPIO_PORTI|GPIO_PIN10)
#define GPIO_ETH_MII_TXD0_1   (GPIO_ALT|GPIO_AF11|GPIO_PORTB|GPIO_PIN12)
#define GPIO_ETH_MII_TXD0_2   (GPIO_ALT|GPIO_AF11|GPIO_PORTG|GPIO_PIN13)
#define GPIO_ETH_MII_TXD1_1   (GPIO_ALT|GPIO_AF11|GPIO_PORTB|GPIO_PIN13)
#define GPIO_ETH_MII_TXD1_2   (GPIO_ALT|GPIO_AF11|GPIO_PORTG|GPIO_PIN14)
#define GPIO_ETH_MII_TXD2     (GPIO_ALT|GPIO_AF11|GPIO_PORTC|GPIO_PIN2)
#define GPIO_ETH_MII_TXD3_1   (GPIO_ALT|GPIO_AF11|GPIO_PORTB|GPIO_PIN8)
#define GPIO_ETH_MII_TXD3_2   (GPIO_ALT|GPIO_AF11|GPIO_PORTE|GPIO_PIN2)
#define GPIO_ETH_MII_TX_CLK   (GPIO_ALT|GPIO_AF11|GPIO_PORTC|GPIO_PIN3)
#define GPIO_ETH_MII_TX_EN_1  (GPIO_ALT|GPIO_AF11|GPIO_PORTB|GPIO_PIN11)
#define GPIO_ETH_MII_TX_EN_2  (GPIO_ALT|GPIO_AF11|GPIO_PORTG|GPIO_PIN11)
#define GPIO_ETH_PPS_OUT_1    (GPIO_ALT|GPIO_AF11|GPIO_PORTB|GPIO_PIN5)
#define GPIO_ETH_PPS_OUT_2    (GPIO_ALT|GPIO_AF11|GPIO_PORTG|GPIO_PIN8)
#define GPIO_ETH_RMII_CRS_DV  (GPIO_ALT|GPIO_AF11|GPIO_PORTA|GPIO_PIN7)
#define GPIO_ETH_RMII_REF_CLK (GPIO_ALT|GPIO_AF11|GPIO_PORTA|GPIO_PIN1)
#define GPIO_ETH_RMII_RXD0    (GPIO_ALT|GPIO_AF11|GPIO_PORTC|GPIO_PIN4)
#define GPIO_ETH_RMII_RXD1    (GPIO_ALT|GPIO_AF11|GPIO_PORTC|GPIO_PIN5)
#define GPIO_ETH_RMII_TXD0_1  (GPIO_ALT|GPIO_AF11|GPIO_PORTB|GPIO_PIN12)
#define GPIO_ETH_RMII_TXD0_2  (GPIO_ALT|GPIO_AF11|GPIO_PORTG|GPIO_PIN13)
#define GPIO_ETH_RMII_TXD1_1  (GPIO_ALT|GPIO_AF11|GPIO_PORTB|GPIO_PIN13)
#define GPIO_ETH_RMII_TXD1_2  (GPIO_ALT|GPIO_AF11|GPIO_PORTG|GPIO_PIN14)
#define GPIO_ETH_RMII_TX_CLK  (GPIO_ALT|GPIO_AF11|GPIO_PORTC|GPIO_PIN3)
#define GPIO_ETH_RMII_TX_EN_1 (GPIO_ALT|GPIO_AF11|GPIO_PORTB|GPIO_PIN11)
#define GPIO_ETH_RMII_TX_EN_2 (GPIO_ALT|GPIO_AF11|GPIO_PORTG|GPIO_PIN11)

/* Flexible Static Memory Controller (FSMC) */

#define GPIO_FSMC_A0          (GPIO_ALT|GPIO_AF12|GPIO_PORTF|GPIO_PIN0)
#define GPIO_FSMC_A1          (GPIO_ALT|GPIO_AF12|GPIO_PORTF|GPIO_PIN1)
#define GPIO_FSMC_A2          (GPIO_ALT|GPIO_AF12|GPIO_PORTF|GPIO_PIN2)
#define GPIO_FSMC_A3          (GPIO_ALT|GPIO_AF12|GPIO_PORTF|GPIO_PIN3)
#define GPIO_FSMC_A4          (GPIO_ALT|GPIO_AF12|GPIO_PORTF|GPIO_PIN4)
#define GPIO_FSMC_A5          (GPIO_ALT|GPIO_AF12|GPIO_PORTF|GPIO_PIN5)
#define GPIO_FSMC_A6          (GPIO_ALT|GPIO_AF12|GPIO_PORTF|GPIO_PIN12)
#define GPIO_FSMC_A7          (GPIO_ALT|GPIO_AF12|GPIO_PORTF|GPIO_PIN13)
#define GPIO_FSMC_A8          (GPIO_ALT|GPIO_AF12|GPIO_PORTF|GPIO_PIN14)
#define GPIO_FSMC_A9          (GPIO_ALT|GPIO_AF12|GPIO_PORTF|GPIO_PIN15)
#define GPIO_FSMC_A10         (GPIO_ALT|GPIO_AF12|GPIO_PORTG|GPIO_PIN0)
#define GPIO_FSMC_A11         (GPIO_ALT|GPIO_AF12|GPIO_PORTG|GPIO_PIN1)
#define GPIO_FSMC_A12         (GPIO_ALT|GPIO_AF12|GPIO_PORTG|GPIO_PIN2)
#define GPIO_FSMC_A13         (GPIO_ALT|GPIO_AF12|GPIO_PORTG|GPIO_PIN3)
#define GPIO_FSMC_A14         (GPIO_ALT|GPIO_AF12|GPIO_PORTG|GPIO_PIN4)
#define GPIO_FSMC_A15         (GPIO_ALT|GPIO_AF12|GPIO_PORTG|GPIO_PIN5)
#define GPIO_FSMC_A16         (GPIO_ALT|GPIO_AF12|GPIO_PORTD|GPIO_PIN11)
#define GPIO_FSMC_A17         (GPIO_ALT|GPIO_AF12|GPIO_PORTD|GPIO_PIN12)
#define GPIO_FSMC_A18         (GPIO_ALT|GPIO_AF12|GPIO_PORTD|GPIO_PIN13)
#define GPIO_FSMC_A19         (GPIO_ALT|GPIO_AF12|GPIO_PORTE|GPIO_PIN3)
#define GPIO_FSMC_A20         (GPIO_ALT|GPIO_AF12|GPIO_PORTE|GPIO_PIN4)
#define GPIO_FSMC_A21         (GPIO_ALT|GPIO_AF12|GPIO_PORTE|GPIO_PIN5)
#define GPIO_FSMC_A22         (GPIO_ALT|GPIO_AF12|GPIO_PORTE|GPIO_PIN6)
#define GPIO_FSMC_A23         (GPIO_ALT|GPIO_AF12|GPIO_PORTE|GPIO_PIN2)
#define GPIO_FSMC_A24         (GPIO_ALT|GPIO_AF12|GPIO_PORTG|GPIO_PIN13)
#define GPIO_FSMC_A25         (GPIO_ALT|GPIO_AF12|GPIO_PORTG|GPIO_PIN14)
#define GPIO_FSMC_BLN1        (GPIO_ALT|GPIO_AF12|GPIO_PORTE|GPIO_PIN1)
#define GPIO_FSMC_CD          (GPIO_ALT|GPIO_AF12|GPIO_PORTF|GPIO_PIN9)
#define GPIO_FSMC_CLK         (GPIO_ALT|GPIO_AF12|GPIO_PORTD|GPIO_PIN3)
#define GPIO_FSMC_D0          (GPIO_ALT|GPIO_AF12|GPIO_PORTD|GPIO_PIN14)
#define GPIO_FSMC_D1          (GPIO_ALT|GPIO_AF12|GPIO_PORTD|GPIO_PIN15)
#define GPIO_FSMC_D2          (GPIO_ALT|GPIO_AF12|GPIO_PORTD|GPIO_PIN0)
#define GPIO_FSMC_D3          (GPIO_ALT|GPIO_AF12|GPIO_PORTD|GPIO_PIN1)
#define GPIO_FSMC_D4          (GPIO_ALT|GPIO_AF12|GPIO_PORTE|GPIO_PIN7)
#define GPIO_FSMC_D5          (GPIO_ALT|GPIO_AF12|GPIO_PORTE|GPIO_PIN8)
#define GPIO_FSMC_D6          (GPIO_ALT|GPIO_AF12|GPIO_PORTE|GPIO_PIN9)
#define GPIO_FSMC_D7          (GPIO_ALT|GPIO_AF12|GPIO_PORTE|GPIO_PIN10)
#define GPIO_FSMC_D8          (GPIO_ALT|GPIO_AF12|GPIO_PORTE|GPIO_PIN11)
#define GPIO_FSMC_D9          (GPIO_ALT|GPIO_AF12|GPIO_PORTE|GPIO_PIN12)
#define GPIO_FSMC_D10         (GPIO_ALT|GPIO_AF12|GPIO_PORTE|GPIO_PIN13)
#define GPIO_FSMC_D11         (GPIO_ALT|GPIO_AF12|GPIO_PORTE|GPIO_PIN14)
#define GPIO_FSMC_D12         (GPIO_ALT|GPIO_AF12|GPIO_PORTE|GPIO_PIN15)
#define GPIO_FSMC_D13         (GPIO_ALT|GPIO_AF12|GPIO_PORTD|GPIO_PIN8)
#define GPIO_FSMC_D14         (GPIO_ALT|GPIO_AF12|GPIO_PORTD|GPIO_PIN9)
#define GPIO_FSMC_D15         (GPIO_ALT|GPIO_AF12|GPIO_PORTD|GPIO_PIN10)
#define GPIO_FSMC_INT2        (GPIO_ALT|GPIO_AF12|GPIO_PORTG|GPIO_PIN6)
#define GPIO_FSMC_INT3        (GPIO_ALT|GPIO_AF12|GPIO_PORTG|GPIO_PIN7)
#define GPIO_FSMC_INTR        (GPIO_ALT|GPIO_AF12|GPIO_PORTF|GPIO_PIN10)
#define GPIO_FSMC_NBL0        (GPIO_ALT|GPIO_AF12|GPIO_PORTE|GPIO_PIN0)
#define GPIO_FSMC_NCE2        (GPIO_ALT|GPIO_AF12|GPIO_PORTD|GPIO_PIN7)
#define GPIO_FSMC_NCE3        (GPIO_ALT|GPIO_AF12|GPIO_PORTG|GPIO_PIN9)
#define GPIO_FSMC_NCE4_1      (GPIO_ALT|GPIO_AF12|GPIO_PORTG|GPIO_PIN10)
#define GPIO_FSMC_NCE4_2      (GPIO_ALT|GPIO_AF12|GPIO_PORTG|GPIO_PIN11)
#define GPIO_FSMC_NE1         (GPIO_ALT|GPIO_AF12|GPIO_PORTD|GPIO_PIN7)
#define GPIO_FSMC_NE2         (GPIO_ALT|GPIO_AF12|GPIO_PORTG|GPIO_PIN9)
#define GPIO_FSMC_NE3         (GPIO_ALT|GPIO_AF12|GPIO_PORTG|GPIO_PIN10)
#define GPIO_FSMC_NE4         (GPIO_ALT|GPIO_AF12|GPIO_PORTG|GPIO_PIN12)
#define GPIO_FSMC_NIORD       (GPIO_ALT|GPIO_AF12|GPIO_PORTF|GPIO_PIN6)
#define GPIO_FSMC_NIOWR       (GPIO_ALT|GPIO_AF12|GPIO_PORTF|GPIO_PIN8)
#define GPIO_FSMC_NL          (GPIO_ALT|GPIO_AF12|GPIO_PORTB|GPIO_PIN7)
#define GPIO_FSMC_NOE         (GPIO_ALT|GPIO_AF12|GPIO_PORTD|GPIO_PIN4)
#define GPIO_FSMC_NREG        (GPIO_ALT|GPIO_AF12|GPIO_PORTF|GPIO_PIN7)
#define GPIO_FSMC_NWAIT       (GPIO_ALT|GPIO_AF12|GPIO_PORTD|GPIO_PIN6)
#define GPIO_FSMC_NWE         (GPIO_ALT|GPIO_AF12|GPIO_PORTD|GPIO_PIN5)

/* I2C */

#define GPIO_I2C1_SCL_1       (GPIO_ALT|GPIO_AF4|GPIO_PORTB|GPIO_PIN6)
#define GPIO_I2C1_SCL_2       (GPIO_ALT|GPIO_AF4|GPIO_PORTB|GPIO_PIN8)
#define GPIO_I2C1_SDA_1       (GPIO_ALT|GPIO_AF4|GPIO_PORTB|GPIO_PIN7)
#define GPIO_I2C1_SDA_2       (GPIO_ALT|GPIO_AF4|GPIO_PORTB|GPIO_PIN9)
#define GPIO_I2C1_SMBA        (GPIO_ALT|GPIO_AF4|GPIO_PORTB|GPIO_PIN5)

#define GPIO_I2C2_SCL_1       (GPIO_ALT|GPIO_AF4|GPIO_PORTB|GPIO_PIN10)
#define GPIO_I2C2_SCL_2       (GPIO_ALT|GPIO_AF4|GPIO_PORTF|GPIO_PIN1)
#define GPIO_I2C2_SCL_3       (GPIO_ALT|GPIO_AF4|GPIO_PORTH|GPIO_PIN4)
#define GPIO_I2C2_SDA_1       (GPIO_ALT|GPIO_AF4|GPIO_PORTB|GPIO_PIN11)
#define GPIO_I2C2_SDA_2       (GPIO_ALT|GPIO_AF4|GPIO_PORTF|GPIO_PIN0)
#define GPIO_I2C2_SDA_3       (GPIO_ALT|GPIO_AF4|GPIO_PORTH|GPIO_PIN5)
#define GPIO_I2C2_SMBA_1      (GPIO_ALT|GPIO_AF4|GPIO_PORTB|GPIO_PIN12)
#define GPIO_I2C2_SMBA_2      (GPIO_ALT|GPIO_AF4|GPIO_PORTF|GPIO_PIN2)
#define GPIO_I2C2_SMBA_3      (GPIO_ALT|GPIO_AF4|GPIO_PORTH|GPIO_PIN6)

#define GPIO_I2C3_SCL_1       (GPIO_ALT|GPIO_AF4|GPIO_PORTA|GPIO_PIN8)
#define GPIO_I2C3_SCL_2       (GPIO_ALT|GPIO_AF4|GPIO_PORTH|GPIO_PIN7)
#define GPIO_I2C3_SDA_1       (GPIO_ALT|GPIO_AF4|GPIO_PORTC|GPIO_PIN9)
#define GPIO_I2C3_SDA_2       (GPIO_ALT|GPIO_AF4|GPIO_PORTH|GPIO_PIN8)
#define GPIO_I2C3_SMBA_1      (GPIO_ALT|GPIO_AF4|GPIO_PORTA|GPIO_PIN9)
#define GPIO_I2C3_SMBA_2      (GPIO_ALT|GPIO_AF4|GPIO_PORTH|GPIO_PIN9)

/* I2S */

#define GPIO_I2S2_CK_1        (GPIO_ALT|GPIO_AF5|GPIO_PORTB|GPIO_PIN10)
#define GPIO_I2S2_CK_2        (GPIO_ALT|GPIO_AF5|GPIO_PORTB|GPIO_PIN13)
#define GPIO_I2S2_CK_3        (GPIO_ALT|GPIO_AF5|GPIO_PORTI|GPIO_PIN1)
#define GPIO_I2S2_MCK         (GPIO_ALT|GPIO_AF5|GPIO_PORTC|GPIO_PIN6)
#define GPIO_I2S2_SD_1        (GPIO_ALT|GPIO_AF5|GPIO_PORTC|GPIO_PIN15)
#define GPIO_I2S2_SD_2        (GPIO_ALT|GPIO_AF5|GPIO_PORTC|GPIO_PIN3)
#define GPIO_I2S2_SD_3        (GPIO_ALT|GPIO_AF5|GPIO_PORTI|GPIO_PIN3)
#define GPIO_I2S2_WS_1        (GPIO_ALT|GPIO_AF5|GPIO_PORTB|GPIO_PIN12)
#define GPIO_I2S2_WS_2        (GPIO_ALT|GPIO_AF5|GPIO_PORTB|GPIO_PIN6)
#define GPIO_I2S2_WS_3        (GPIO_ALT|GPIO_AF5|GPIO_PORTB|GPIO_PIN9)
#define GPIO_I2S2_WS_4        (GPIO_ALT|GPIO_AF5|GPIO_PORTI|GPIO_PIN0)

#define GPIO_I2S2EXT_SD_1     (GPIO_ALT|GPIO_AF6|GPIO_PORTB|GPIO_PIN14)
#define GPIO_I2S2EXT_SD_2     (GPIO_ALT|GPIO_AF6|GPIO_PORTC|GPIO_PIN2)
#define GPIO_I2S2EXT_SD_3     (GPIO_ALT|GPIO_AF6|GPIO_PORTI|GPIO_PIN2)

#define GPIO_I2S3_CK_1        (GPIO_ALT|GPIO_AF6|GPIO_PORTB|GPIO_PIN3)
#define GPIO_I2S3_CK_2        (GPIO_ALT|GPIO_AF6|GPIO_PORTC|GPIO_PIN10)
#define GPIO_I2S3_MCK         (GPIO_ALT|GPIO_AF6|GPIO_PORTC|GPIO_PIN7)
#define GPIO_I2S3_SD_1        (GPIO_ALT|GPIO_AF6|GPIO_PORTB|GPIO_PIN5)
#define GPIO_I2S3_SD_2        (GPIO_ALT|GPIO_AF6|GPIO_PORTC|GPIO_PIN12)
#define GPIO_I2S3_WS_1        (GPIO_ALT|GPIO_AF6|GPIO_PORTA|GPIO_PIN4)
#define GPIO_I2S3_WS_2        (GPIO_ALT|GPIO_AF6|GPIO_PORTA|GPIO_PIN15)

#define GPIO_I2S3EXT_SD_1     (GPIO_ALT|GPIO_AF6|GPIO_PORTC|GPIO_PIN11)
#define GPIO_I2S3EXT_SD_2     (GPIO_ALT|GPIO_AF7|GPIO_PORTB|GPIO_PIN4)

#define GPIO_I2S_CKIN         (GPIO_ALT|GPIO_AF5|GPIO_PORTC|GPIO_PIN9)

/* JTAG */

#define GPIO_JTCK_SWCLK       (GPIO_ALT|GPIO_AF0|GPIO_PORTA|GPIO_PIN14)
#define GPIO_JTDI             (GPIO_ALT|GPIO_AF0|GPIO_PORTA|GPIO_PIN15)
#define GPIO_JTDO             (GPIO_ALT|GPIO_AF0|GPIO_PORTB|GPIO_PIN3)
#define GPIO_JTMS_SWDIO       (GPIO_ALT|GPIO_AF0|GPIO_PORTA|GPIO_PIN13)
#define GPIO_JTRST            (GPIO_ALT|GPIO_AF0|GPIO_PORTB|GPIO_PIN4)

/* OTG FS/HS */

#define GPIO_OTGFS_DM         (GPIO_ALT|GPIO_AF10|GPIO_PORTA|GPIO_PIN11)
#define GPIO_OTGFS_DP         (GPIO_ALT|GPIO_AF10|GPIO_PORTA|GPIO_PIN12)
#define GPIO_OTGFS_ID         (GPIO_ALT|GPIO_AF10|GPIO_PORTA|GPIO_PIN10)
#define GPIO_OTGFS_SCL        (GPIO_ALT|GPIO_AF10|GPIO_PORTB|GPIO_PIN8)
#define GPIO_OTGFS_SDA        (GPIO_ALT|GPIO_AF10|GPIO_PORTB|GPIO_PIN9)
#define GPIO_OTGFS_SOF        (GPIO_ALT|GPIO_AF10|GPIO_PORTA|GPIO_PIN8)

#define GPIO_OTGHS_DM         (GPIO_ALT|GPIO_AF12|GPIO_PORTB|GPIO_PIN14)
#define GPIO_OTGHS_DP         (GPIO_ALT|GPIO_AF12|GPIO_PORTC|GPIO_PIN15)
#define GPIO_OTGHS_ID         (GPIO_ALT|GPIO_AF12|GPIO_PORTB|GPIO_PIN12)
#define GPIO_OTGHS_INTN_1     (GPIO_ALT|GPIO_AF12|GPIO_PORTB|GPIO_PIN1)
#define GPIO_OTGFS_INTN_2     (GPIO_ALT|GPIO_AF10|GPIO_PORTB|GPIO_PIN6)
#define GPIO_OTGHS_SCL        (GPIO_ALT|GPIO_AF12|GPIO_PORTB|GPIO_PIN10)
#define GPIO_OTGHS_SDA        (GPIO_ALT|GPIO_AF12|GPIO_PORTB|GPIO_PIN11)
#define GPIO_OTGHS_SOF        (GPIO_ALT|GPIO_AF12|GPIO_PORTA|GPIO_PIN4)
#define GPIO_OTGHS_ULPI_CK    (GPIO_ALT|GPIO_AF10|GPIO_PORTA|GPIO_PIN5)
#define GPIO_OTGHS_ULPI_D0    (GPIO_ALT|GPIO_AF10|GPIO_PORTA|GPIO_PIN3)
#define GPIO_OTGHS_ULPI_D1    (GPIO_ALT|GPIO_AF10|GPIO_PORTB|GPIO_PIN0)
#define GPIO_OTGHS_ULPI_D2    (GPIO_ALT|GPIO_AF10|GPIO_PORTB|GPIO_PIN1)
#define GPIO_OTGHS_ULPI_D3    (GPIO_ALT|GPIO_AF10|GPIO_PORTB|GPIO_PIN10)
#define GPIO_OTGHS_ULPI_D4    (GPIO_ALT|GPIO_AF10|GPIO_PORTB|GPIO_PIN11)
#define GPIO_OTGHS_ULPI_D5    (GPIO_ALT|GPIO_AF10|GPIO_PORTB|GPIO_PIN12)
#define GPIO_OTGHS_ULPI_D6    (GPIO_ALT|GPIO_AF10|GPIO_PORTB|GPIO_PIN13)
#define GPIO_OTGHS_ULPI_D7    (GPIO_ALT|GPIO_AF10|GPIO_PORTB|GPIO_PIN5)
#define GPIO_OTGHS_ULPI_DIR_1 (GPIO_ALT|GPIO_AF10|GPIO_PORTC|GPIO_PIN2)
#define GPIO_OTGHS_ULPI_DIR_2 (GPIO_ALT|GPIO_AF10|GPIO_PORTI|GPIO_PIN11)
#define GPIO_OTGHS_ULPI_NXT_1 (GPIO_ALT|GPIO_AF10|GPIO_PORTC|GPIO_PIN3)
#define GPIO_OTGHS_ULPI_NXT_2 (GPIO_ALT|GPIO_AF10|GPIO_PORTH|GPIO_PIN4)
#define GPIO_OTGHS_ULPI_STP   (GPIO_ALT|GPIO_AF10|GPIO_PORTC|GPIO_PIN0)

/* RTC */

#define GPIO_RTC_50HZ         (GPIO_ALT|GPIO_AF0|GPIO_PORTC|GPIO_PIN15)

/* SDIO */

#define GPIO_SDIO_CK          (GPIO_ALT|GPIO_AF12|GPIO_PORTC|GPIO_PIN12)
#define GPIO_SDIO_CMD         (GPIO_ALT|GPIO_AF12|GPIO_PORTD|GPIO_PIN2)
#define GPIO_SDIO_D0          (GPIO_ALT|GPIO_AF12|GPIO_PORTC|GPIO_PIN8)
#define GPIO_SDIO_D1          (GPIO_ALT|GPIO_AF12|GPIO_PORTC|GPIO_PIN9)
#define GPIO_SDIO_D2          (GPIO_ALT|GPIO_AF12|GPIO_PORTC|GPIO_PIN10)
#define GPIO_SDIO_D3          (GPIO_ALT|GPIO_AF12|GPIO_PORTC|GPIO_PIN11)
#define GPIO_SDIO_D4          (GPIO_ALT|GPIO_AF12|GPIO_PORTB|GPIO_PIN8)
#define GPIO_SDIO_D5          (GPIO_ALT|GPIO_AF12|GPIO_PORTB|GPIO_PIN9)
#define GPIO_SDIO_D6          (GPIO_ALT|GPIO_AF12|GPIO_PORTC|GPIO_PIN6)
#define GPIO_SDIO_D7          (GPIO_ALT|GPIO_AF12|GPIO_PORTC|GPIO_PIN7)

/* SPI */

#define GPIO_SPI1_MISO_1      (GPIO_ALT|GPIO_AF5|GPIO_PORTA|GPIO_PIN6)
#define GPIO_SPI1_MISO_2      (GPIO_ALT|GPIO_AF5|GPIO_PORTB|GPIO_PIN4)
#define GPIO_SPI1_MOSI_1      (GPIO_ALT|GPIO_AF5|GPIO_PORTA|GPIO_PIN7)
#define GPIO_SPI1_MOSI_2      (GPIO_ALT|GPIO_AF5|GPIO_PORTB|GPIO_PIN5)
#define GPIO_SPI1_NSS_1       (GPIO_ALT|GPIO_AF5|GPIO_PORTA|GPIO_PIN15)
#define GPIO_SPI1_NSS_2       (GPIO_ALT|GPIO_AF5|GPIO_PORTA|GPIO_PIN4)
#define GPIO_SPI1_SCK_1       (GPIO_ALT|GPIO_AF5|GPIO_PORTA|GPIO_PIN5)
#define GPIO_SPI1_SCK_2       (GPIO_ALT|GPIO_AF5|GPIO_PORTB|GPIO_PIN3)

#define GPIO_SPI2_MISO_1      (GPIO_ALT|GPIO_AF5|GPIO_PORTB|GPIO_PIN14)
#define GPIO_SPI2_MISO_2      (GPIO_ALT|GPIO_AF5|GPIO_PORTC|GPIO_PIN2)
#define GPIO_SPI2_MISO_3      (GPIO_ALT|GPIO_AF5|GPIO_PORTI|GPIO_PIN2)
#define GPIO_SPI2_MOSI_1      (GPIO_ALT|GPIO_AF5|GPIO_PORTC|GPIO_PIN15)
#define GPIO_SPI2_MOSI_2      (GPIO_ALT|GPIO_AF5|GPIO_PORTC|GPIO_PIN3)
#define GPIO_SPI2_MOSI_3      (GPIO_ALT|GPIO_AF5|GPIO_PORTI|GPIO_PIN3)
#define GPIO_SPI2_NSS_1       (GPIO_ALT|GPIO_AF5|GPIO_PORTB|GPIO_PIN12)
#define GPIO_SPI2_NSS_2       (GPIO_ALT|GPIO_AF5|GPIO_PORTB|GPIO_PIN9)
#define GPIO_SPI2_NSS_3       (GPIO_ALT|GPIO_AF5|GPIO_PORTI|GPIO_PIN0)
#define GPIO_SPI2_SCK_1       (GPIO_ALT|GPIO_AF5|GPIO_PORTB|GPIO_PIN10)
#define GPIO_SPI2_SCK_2       (GPIO_ALT|GPIO_AF5|GPIO_PORTB|GPIO_PIN13)
#define GPIO_SPI2_SCK_3       (GPIO_ALT|GPIO_AF5|GPIO_PORTI|GPIO_PIN1)

#define GPIO_SPI3_MISO_1      (GPIO_ALT|GPIO_AF6|GPIO_PORTB|GPIO_PIN4)
#define GPIO_SPI3_MISO_2      (GPIO_ALT|GPIO_AF6|GPIO_PORTC|GPIO_PIN11)
#define GPIO_SPI3_MOSI_1      (GPIO_ALT|GPIO_AF6|GPIO_PORTB|GPIO_PIN5)
#define GPIO_SPI3_MOSI_2      (GPIO_ALT|GPIO_AF6|GPIO_PORTC|GPIO_PIN12)
#define GPIO_SPI3_NSS_1       (GPIO_ALT|GPIO_AF6|GPIO_PORTA|GPIO_PIN15)
#define GPIO_SPI3_NSS_2       (GPIO_ALT|GPIO_AF6|GPIO_PORTA|GPIO_PIN4)
#define GPIO_SPI3_SCK_1       (GPIO_ALT|GPIO_AF6|GPIO_PORTB|GPIO_PIN3)
#define GPIO_SPI3_SCK_2       (GPIO_ALT|GPIO_AF6|GPIO_PORTC|GPIO_PIN10)

/* Timers */

#define GPIO_TIM1_BKIN_1      (GPIO_ALT|GPIO_AF1|GPIO_PORTA|GPIO_PIN6)
#define GPIO_TIM1_BKIN_2      (GPIO_ALT|GPIO_AF1|GPIO_PORTB|GPIO_PIN12)
#define GPIO_TIM1_BKIN_3      (GPIO_ALT|GPIO_AF1|GPIO_PORTE|GPIO_PIN15)
#define GPIO_TIM1_CH1_1       (GPIO_ALT|GPIO_AF1|GPIO_PORTA|GPIO_PIN8)
#define GPIO_TIM1_CH1_2       (GPIO_ALT|GPIO_AF1|GPIO_PORTE|GPIO_PIN9)
#define GPIO_TIM1_CH1N_1      (GPIO_ALT|GPIO_AF1|GPIO_PORTA|GPIO_PIN7)
#define GPIO_TIM1_CH1N_2      (GPIO_ALT|GPIO_AF1|GPIO_PORTB|GPIO_PIN13)
#define GPIO_TIM1_CH1N_3      (GPIO_ALT|GPIO_AF1|GPIO_PORTE|GPIO_PIN8)
#define GPIO_TIM1_CH2_1       (GPIO_ALT|GPIO_AF1|GPIO_PORTA|GPIO_PIN9)
#define GPIO_TIM1_CH2_2       (GPIO_ALT|GPIO_AF1|GPIO_PORTE|GPIO_PIN11)
#define GPIO_TIM1_CH2N_1      (GPIO_ALT|GPIO_AF1|GPIO_PORTB|GPIO_PIN0)
#define GPIO_TIM1_CH2N_2      (GPIO_ALT|GPIO_AF1|GPIO_PORTB|GPIO_PIN14)
#define GPIO_TIM1_CH2N_3      (GPIO_ALT|GPIO_AF1|GPIO_PORTE|GPIO_PIN10)
#define GPIO_TIM1_CH3_1       (GPIO_ALT|GPIO_AF1|GPIO_PORTA|GPIO_PIN10)
#define GPIO_TIM1_CH3_2       (GPIO_ALT|GPIO_AF1|GPIO_PORTE|GPIO_PIN13)
#define GPIO_TIM1_CH3N_1      (GPIO_ALT|GPIO_AF1|GPIO_PORTB|GPIO_PIN1)
#define GPIO_TIM1_CH3N_2      (GPIO_ALT|GPIO_AF1|GPIO_PORTC|GPIO_PIN15)
#define GPIO_TIM1_CH3N_3      (GPIO_ALT|GPIO_AF1|GPIO_PORTE|GPIO_PIN12)
#define GPIO_TIM1_CH4_1       (GPIO_ALT|GPIO_AF1|GPIO_PORTA|GPIO_PIN11)
#define GPIO_TIM1_CH4_2       (GPIO_ALT|GPIO_AF1|GPIO_PORTE|GPIO_PIN14)
#define GPIO_TIM1_ETR_1       (GPIO_ALT|GPIO_AF1|GPIO_PORTA|GPIO_PIN12)
#define GPIO_TIM1_ETR_2       (GPIO_ALT|GPIO_AF1|GPIO_PORTE|GPIO_PIN7)

#define GPIO_TIM2_CH1_1       (GPIO_ALT|GPIO_AF1|GPIO_PORTA|GPIO_PIN0)
#define GPIO_TIM2_CH1_2       (GPIO_ALT|GPIO_AF1|GPIO_PORTA|GPIO_PIN15)
#define GPIO_TIM2_CH1_3       (GPIO_ALT|GPIO_AF1|GPIO_PORTA|GPIO_PIN5)
#define GPIO_TIM2_CH2_1       (GPIO_ALT|GPIO_AF1|GPIO_PORTA|GPIO_PIN1)
#define GPIO_TIM2_CH2_2       (GPIO_ALT|GPIO_AF1|GPIO_PORTB|GPIO_PIN3)
#define GPIO_TIM2_CH3_1       (GPIO_ALT|GPIO_AF1|GPIO_PORTA|GPIO_PIN2)
#define GPIO_TIM2_CH3_2       (GPIO_ALT|GPIO_AF1|GPIO_PORTB|GPIO_PIN10)
#define GPIO_TIM2_CH4_1       (GPIO_ALT|GPIO_AF1|GPIO_PORTA|GPIO_PIN3)
#define GPIO_TIM2_CH4_2       (GPIO_ALT|GPIO_AF1|GPIO_PORTB|GPIO_PIN11)
#define GPIO_TIM2_ETR_1       (GPIO_ALT|GPIO_AF1|GPIO_PORTA|GPIO_PIN0)
#define GPIO_TIM2_ETR_2       (GPIO_ALT|GPIO_AF1|GPIO_PORTA|GPIO_PIN15)
#define GPIO_TIM2_ETR_3       (GPIO_ALT|GPIO_AF1|GPIO_PORTA|GPIO_PIN5)

#define GPIO_TIM3_CH1_1       (GPIO_ALT|GPIO_AF2|GPIO_PORTA|GPIO_PIN6)
#define GPIO_TIM3_CH1_2       (GPIO_ALT|GPIO_AF2|GPIO_PORTB|GPIO_PIN4)
#define GPIO_TIM3_CH1_3       (GPIO_ALT|GPIO_AF2|GPIO_PORTC|GPIO_PIN6)
#define GPIO_TIM3_CH2_1       (GPIO_ALT|GPIO_AF2|GPIO_PORTA|GPIO_PIN7)
#define GPIO_TIM3_CH2_2       (GPIO_ALT|GPIO_AF2|GPIO_PORTB|GPIO_PIN5)
#define GPIO_TIM3_CH2_3       (GPIO_ALT|GPIO_AF2|GPIO_PORTC|GPIO_PIN7)
#define GPIO_TIM3_CH3_1       (GPIO_ALT|GPIO_AF2|GPIO_PORTB|GPIO_PIN0)
#define GPIO_TIM3_CH3_2       (GPIO_ALT|GPIO_AF2|GPIO_PORTC|GPIO_PIN8)
#define GPIO_TIM3_CH4_1       (GPIO_ALT|GPIO_AF2|GPIO_PORTB|GPIO_PIN1)
#define GPIO_TIM3_CH4_3       (GPIO_ALT|GPIO_AF2|GPIO_PORTC|GPIO_PIN9)
#define GPIO_TIM3_ETR         (GPIO_ALT|GPIO_AF2|GPIO_PORTD|GPIO_PIN2)

#define GPIO_TIM4_CH1_1       (GPIO_ALT|GPIO_AF2|GPIO_PORTB|GPIO_PIN6)
#define GPIO_TIM4_CH1_2       (GPIO_ALT|GPIO_AF2|GPIO_PORTD|GPIO_PIN12)
#define GPIO_TIM4_CH2_1       (GPIO_ALT|GPIO_AF2|GPIO_PORTB|GPIO_PIN7)
#define GPIO_TIM4_CH2_2       (GPIO_ALT|GPIO_AF2|GPIO_PORTD|GPIO_PIN13)
#define GPIO_TIM4_CH3_1       (GPIO_ALT|GPIO_AF2|GPIO_PORTB|GPIO_PIN8)
#define GPIO_TIM4_CH3_2       (GPIO_ALT|GPIO_AF2|GPIO_PORTD|GPIO_PIN14)
#define GPIO_TIM4_CH4_1       (GPIO_ALT|GPIO_AF2|GPIO_PORTB|GPIO_PIN9)
#define GPIO_TIM4_CH4_3       (GPIO_ALT|GPIO_AF2|GPIO_PORTD|GPIO_PIN15)
#define GPIO_TIM4_ETR         (GPIO_ALT|GPIO_AF2|GPIO_PORTE|GPIO_PIN0)

#define GPIO_TIM5_CH1_1       (GPIO_ALT|GPIO_AF2|GPIO_PORTA|GPIO_PIN0)
#define GPIO_TIM5_CH1_2       (GPIO_ALT|GPIO_AF2|GPIO_PORTH|GPIO_PIN10)
#define GPIO_TIM5_CH2_1       (GPIO_ALT|GPIO_AF2|GPIO_PORTA|GPIO_PIN1)
#define GPIO_TIM5_CH2_2       (GPIO_ALT|GPIO_AF2|GPIO_PORTH|GPIO_PIN11)
#define GPIO_TIM5_CH3_1       (GPIO_ALT|GPIO_AF2|GPIO_PORTA|GPIO_PIN2)
#define GPIO_TIM5_CH3_2       (GPIO_ALT|GPIO_AF2|GPIO_PORTH|GPIO_PIN12)
#define GPIO_TIM5_CH4_1       (GPIO_ALT|GPIO_AF2|GPIO_PORTA|GPIO_PIN3)
#define GPIO_TIM5_CH4_2       (GPIO_ALT|GPIO_AF2|GPIO_PORTI|GPIO_PIN0)
#define GPIO_TIM5_ETR         (GPIO_ALT|GPIO_AF2|GPIO_PORTH|GPIO_PIN10)

#define GPIO_TIM8_BKIN_1      (GPIO_ALT|GPIO_AF3|GPIO_PORTA|GPIO_PIN6)
#define GPIO_TIM8_BKIN_2      (GPIO_ALT|GPIO_AF3|GPIO_PORTI|GPIO_PIN4)
#define GPIO_TIM8_CH1_1       (GPIO_ALT|GPIO_AF3|GPIO_PORTC|GPIO_PIN6)
#define GPIO_TIM8_CH1_2       (GPIO_ALT|GPIO_AF3|GPIO_PORTI|GPIO_PIN5)
#define GPIO_TIM8_CH1N_1      (GPIO_ALT|GPIO_AF3|GPIO_PORTA|GPIO_PIN5)
#define GPIO_TIM8_CH1N_2      (GPIO_ALT|GPIO_AF3|GPIO_PORTA|GPIO_PIN7)
#define GPIO_TIM8_CH1N_3      (GPIO_ALT|GPIO_AF3|GPIO_PORTH|GPIO_PIN13)
#define GPIO_TIM8_CH2_1       (GPIO_ALT|GPIO_AF3|GPIO_PORTC|GPIO_PIN7)
#define GPIO_TIM8_CH2_2       (GPIO_ALT|GPIO_AF3|GPIO_PORTI|GPIO_PIN6)
#define GPIO_TIM8_CH2N_1      (GPIO_ALT|GPIO_AF3|GPIO_PORTB|GPIO_PIN0)
#define GPIO_TIM8_CH2N_2      (GPIO_ALT|GPIO_AF3|GPIO_PORTB|GPIO_PIN14)
#define GPIO_TIM8_CH2N_3      (GPIO_ALT|GPIO_AF3|GPIO_PORTH|GPIO_PIN14)
#define GPIO_TIM8_CH3_1       (GPIO_ALT|GPIO_AF3|GPIO_PORTC|GPIO_PIN8)
#define GPIO_TIM8_CH3_2       (GPIO_ALT|GPIO_AF3|GPIO_PORTI|GPIO_PIN7)
#define GPIO_TIM8_CH3N_1      (GPIO_ALT|GPIO_AF3|GPIO_PORTB|GPIO_PIN1)
#define GPIO_TIM8_CH3N_2      (GPIO_ALT|GPIO_AF3|GPIO_PORTC|GPIO_PIN15)
#define GPIO_TIM8_CH3N_3      (GPIO_ALT|GPIO_AF3|GPIO_PORTH|GPIO_PIN15)
#define GPIO_TIM8_CH4_1       (GPIO_ALT|GPIO_AF3|GPIO_PORTC|GPIO_PIN9)
#define GPIO_TIM8_CH4_2       (GPIO_ALT|GPIO_AF3|GPIO_PORTI|GPIO_PIN2)
#define GPIO_TIM8_ETR_1       (GPIO_ALT|GPIO_AF3|GPIO_PORTA|GPIO_PIN0)
#define GPIO_TIM8_ETR_2       (GPIO_ALT|GPIO_AF3|GPIO_PORTI|GPIO_PIN3)

#define GPIO_TIM9_CH1_1       (GPIO_ALT|GPIO_AF3|GPIO_PORTA|GPIO_PIN2)
#define GPIO_TIM9_CH1_2       (GPIO_ALT|GPIO_AF3|GPIO_PORTE|GPIO_PIN5)
#define GPIO_TIM9_CH2_1       (GPIO_ALT|GPIO_AF3|GPIO_PORTA|GPIO_PIN3)
#define GPIO_TIM9_CH2_2       (GPIO_ALT|GPIO_AF3|GPIO_PORTE|GPIO_PIN6)

#define GPIO_TIM10_CH1_1      (GPIO_ALT|GPIO_AF3|GPIO_PORTB|GPIO_PIN8)
#define GPIO_TIM10_CH1_2      (GPIO_ALT|GPIO_AF3|GPIO_PORTF|GPIO_PIN6)

#define GPIO_TIM11_CH1_1      (GPIO_ALT|GPIO_AF3|GPIO_PORTB|GPIO_PIN9)
#define GPIO_TIM11_CH1_2      (GPIO_ALT|GPIO_AF3|GPIO_PORTF|GPIO_PIN7)

#define GPIO_TIM12_CH1_1      (GPIO_ALT|GPIO_AF8|GPIO_PORTH|GPIO_PIN6)
#define GPIO_TIM12_CH1_2      (GPIO_ALT|GPIO_AF9|GPIO_PORTB|GPIO_PIN14)
#define GPIO_TIM12_CH2_1      (GPIO_ALT|GPIO_AF9|GPIO_PORTC|GPIO_PIN15)
#define GPIO_TIM12_CH2_2      (GPIO_ALT|GPIO_AF9|GPIO_PORTH|GPIO_PIN9)

#define GPIO_TIM13_CH1_1      (GPIO_ALT|GPIO_AF9|GPIO_PORTA|GPIO_PIN6)
#define GPIO_TIM13_CH1_2      (GPIO_ALT|GPIO_AF9|GPIO_PORTF|GPIO_PIN8)

#define GPIO_TIM14_CH1_1      (GPIO_ALT|GPIO_AF9|GPIO_PORTA|GPIO_PIN7)
#define GPIO_TIM14_CH1_2      (GPIO_ALT|GPIO_AF9|GPIO_PORTF|GPIO_PIN9)

/* Trace */

#define GPIO_TRACECLK         (GPIO_ALT|GPIO_AF0|GPIO_PORTE|GPIO_PIN2)
#define GPIO_TRACED0          (GPIO_ALT|GPIO_AF0|GPIO_PORTE|GPIO_PIN3)
#define GPIO_TRACED1          (GPIO_ALT|GPIO_AF0|GPIO_PORTE|GPIO_PIN4)
#define GPIO_TRACED2          (GPIO_ALT|GPIO_AF0|GPIO_PORTE|GPIO_PIN5)
#define GPIO_TRACED3          (GPIO_ALT|GPIO_AF0|GPIO_PORTE|GPIO_PIN6)
#define GPIO_TRACESWO         (GPIO_ALT|GPIO_AF0|GPIO_PORTB|GPIO_PIN3)

/* UARTs/USARTs */

#define GPIO_USART1_CK        (GPIO_ALT|GPIO_AF7|GPIO_PORTA|GPIO_PIN8)
#define GPIO_USART1_CTS       (GPIO_ALT|GPIO_AF7|GPIO_PORTA|GPIO_PIN11)
#define GPIO_USART1_RTS       (GPIO_ALT|GPIO_AF7|GPIO_PORTA|GPIO_PIN12)
#define GPIO_USART1_RX_1      (GPIO_ALT|GPIO_AF7|GPIO_PORTA|GPIO_PIN10)
#define GPIO_USART1_RX_2      (GPIO_ALT|GPIO_AF7|GPIO_PORTB|GPIO_PIN7)
#define GPIO_USART1_TX_1      (GPIO_ALT|GPIO_AF7|GPIO_PORTA|GPIO_PIN9)
#define GPIO_USART1_TX_2      (GPIO_ALT|GPIO_AF7|GPIO_PORTB|GPIO_PIN6)

#define GPIO_USART2_CK_1      (GPIO_ALT|GPIO_AF7|GPIO_PORTA|GPIO_PIN4)
#define GPIO_USART2_CK_2      (GPIO_ALT|GPIO_AF7|GPIO_PORTD|GPIO_PIN7)
#define GPIO_USART2_CTS_1     (GPIO_ALT|GPIO_AF7|GPIO_PORTA|GPIO_PIN0)
#define GPIO_USART2_CTS_2     (GPIO_ALT|GPIO_AF7|GPIO_PORTD|GPIO_PIN3)
#define GPIO_USART2_RTS_1     (GPIO_ALT|GPIO_AF7|GPIO_PORTA|GPIO_PIN1)
#define GPIO_USART2_RTS_2     (GPIO_ALT|GPIO_AF7|GPIO_PORTD|GPIO_PIN4)
#define GPIO_USART2_RX_1      (GPIO_ALT|GPIO_AF7|GPIO_PORTA|GPIO_PIN3)
#define GPIO_USART2_RX_2      (GPIO_ALT|GPIO_AF7|GPIO_PORTD|GPIO_PIN6)
#define GPIO_USART2_TX_1      (GPIO_ALT|GPIO_AF7|GPIO_PORTA|GPIO_PIN2)
#define GPIO_USART2_TX_2      (GPIO_ALT|GPIO_AF7|GPIO_PORTD|GPIO_PIN5)

#define GPIO_USART3_CK_1      (GPIO_ALT|GPIO_AF7|GPIO_PORTB|GPIO_PIN12)
#define GPIO_USART3_CK_2      (GPIO_ALT|GPIO_AF7|GPIO_PORTC|GPIO_PIN12)
#define GPIO_USART3_CK_3      (GPIO_ALT|GPIO_AF7|GPIO_PORTD|GPIO_PIN10)
#define GPIO_USART3_CTS_1     (GPIO_ALT|GPIO_AF7|GPIO_PORTB|GPIO_PIN13)
#define GPIO_USART3_CTS_2     (GPIO_ALT|GPIO_AF7|GPIO_PORTD|GPIO_PIN11)
#define GPIO_USART3_RTS_1     (GPIO_ALT|GPIO_AF7|GPIO_PORTB|GPIO_PIN14)
#define GPIO_USART3_RTS_2     (GPIO_ALT|GPIO_AF7|GPIO_PORTD|GPIO_PIN12)
#define GPIO_USART3_RX_1      (GPIO_ALT|GPIO_AF7|GPIO_PORTB|GPIO_PIN11)
#define GPIO_USART3_RX_2      (GPIO_ALT|GPIO_AF7|GPIO_PORTC|GPIO_PIN11)
#define GPIO_USART3_RX_3      (GPIO_ALT|GPIO_AF7|GPIO_PORTD|GPIO_PIN9)
#define GPIO_USART3_TX_1      (GPIO_ALT|GPIO_AF7|GPIO_PORTB|GPIO_PIN10)
#define GPIO_USART3_TX_2      (GPIO_ALT|GPIO_AF7|GPIO_PORTC|GPIO_PIN10)
#define GPIO_USART3_TX_3      (GPIO_ALT|GPIO_AF7|GPIO_PORTD|GPIO_PIN8)

#define GPIO_UART4_RX_1       (GPIO_ALT|GPIO_AF8|GPIO_PORTA|GPIO_PIN1)
#define GPIO_UART4_RX_2       (GPIO_ALT|GPIO_AF8|GPIO_PORTC|GPIO_PIN11)
#define GPIO_UART4_TX_1       (GPIO_ALT|GPIO_AF8|GPIO_PORTA|GPIO_PIN0)
#define GPIO_UART4_TX_2       (GPIO_ALT|GPIO_AF8|GPIO_PORTC|GPIO_PIN10)

#define GPIO_UART5_RX         (GPIO_ALT|GPIO_AF8|GPIO_PORTD|GPIO_PIN2)
#define GPIO_UART5_TX         (GPIO_ALT|GPIO_AF8|GPIO_PORTC|GPIO_PIN12)

#define GPIO_USART6_CK_1      (GPIO_ALT|GPIO_AF8|GPIO_PORTC|GPIO_PIN8)
#define GPIO_USART6_CK_2      (GPIO_ALT|GPIO_AF8|GPIO_PORTG|GPIO_PIN7)
#define GPIO_USART6_CTS_1     (GPIO_ALT|GPIO_AF8|GPIO_PORTG|GPIO_PIN13)
#define GPIO_USART6_CTS_2     (GPIO_ALT|GPIO_AF8|GPIO_PORTG|GPIO_PIN15)
#define GPIO_USART6_RTS_1     (GPIO_ALT|GPIO_AF8|GPIO_PORTG|GPIO_PIN12)
#define GPIO_USART6_RTS_2     (GPIO_ALT|GPIO_AF8|GPIO_PORTG|GPIO_PIN8)
#define GPIO_USART6_RX_1      (GPIO_ALT|GPIO_AF8|GPIO_PORTC|GPIO_PIN7)
#define GPIO_USART6_RX_2      (GPIO_ALT|GPIO_AF8|GPIO_PORTG|GPIO_PIN9)
#define GPIO_USART6_TX_1      (GPIO_ALT|GPIO_AF8|GPIO_PORTC|GPIO_PIN6)
#define GPIO_USART6_TX_2      (GPIO_ALT|GPIO_AF8|GPIO_PORTG|GPIO_PIN14)

#endif /* __ARCH_ARM_SRC_STM32_CHIP_STM32F40XXX_PINMAP_H */

