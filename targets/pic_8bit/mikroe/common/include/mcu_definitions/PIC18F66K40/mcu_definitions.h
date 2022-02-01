/****************************************************************************
**
** Copyright (C) 2022 MikroElektronika d.o.o.
** Contact: https://www.mikroe.com/contact
**
** This file is part of the mikroSDK package
**
** Commercial License Usage
**
** Licensees holding valid commercial NECTO compilers AI licenses may use this
** file in accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The MikroElektronika Company.
** For licensing terms and conditions see
** https://www.mikroe.com/legal/software-license-agreement.
** For further information use the contact form at
** https://www.mikroe.com/contact.
**
**
** GNU Lesser General Public License Usage
**
** Alternatively, this file may be used for
** non-commercial projects under the terms of the GNU Lesser
** General Public License version 3 as published by the Free Software
** Foundation: https://www.gnu.org/licenses/lgpl-3.0.html.
**
** The above copyright notice and this permission notice shall be
** included in all copies or substantial portions of the Software.
**
** THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
** OF MERCHANTABILITY, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED
** TO THE WARRANTIES FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
** IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
** DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT
** OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE
** OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
**
****************************************************************************/
/*!
 * @file  mcu_definitions.h
 * @brief MCU specific pin and module definitions.
 */

#ifndef _MCU_DEFINITIONS_H_
#define _MCU_DEFINITIONS_H_

//ADC
#define HAL_LL_RA0_ANA0_ANSELA_BIT 0
#define HAL_LL_RA0_ANA0_ANSELA 0
#define HAL_LL_RA1_ANA1_ANSELA_BIT 1
#define HAL_LL_RA1_ANA1_ANSELA 1
#define HAL_LL_RA2_ANA2_ANSELA_BIT 2
#define HAL_LL_RA2_ANA2_ANSELA 2
#define HAL_LL_RA3_ANA3_ANSELA_BIT 3
#define HAL_LL_RA3_ANA3_ANSELA 3
#define HAL_LL_RA4_ANA4_ANSELA_BIT 4
#define HAL_LL_RA4_ANA4_ANSELA 4
#define HAL_LL_RA5_ANA5_ANSELA_BIT 5
#define HAL_LL_RA5_ANA5_ANSELA 5
#define HAL_LL_RA6_ANA6_ANSELA_BIT 6
#define HAL_LL_RA6_ANA6_ANSELA 6
#define HAL_LL_RA7_ANA7_ANSELA_BIT 7
#define HAL_LL_RA7_ANA7_ANSELA 7
#define HAL_LL_RB0_ANB0_ANSELB_BIT 0
#define HAL_LL_RB0_ANB0_ANSELB 8
#define HAL_LL_RB1_ANB1_ANSELB_BIT 1
#define HAL_LL_RB1_ANB1_ANSELB 9
#define HAL_LL_RB2_ANB2_ANSELB_BIT 2
#define HAL_LL_RB2_ANB2_ANSELB 10
#define HAL_LL_RB3_ANB3_ANSELB_BIT 3
#define HAL_LL_RB3_ANB3_ANSELB 11
#define HAL_LL_RB4_ANB4_ANSELB_BIT 4
#define HAL_LL_RB4_ANB4_ANSELB 12
#define HAL_LL_RB5_ANB5_ANSELB_BIT 5
#define HAL_LL_RB5_ANB5_ANSELB 13
#define HAL_LL_RB6_ANB6_ANSELB_BIT 6
#define HAL_LL_RB6_ANB6_ANSELB 14
#define HAL_LL_RB7_ANB7_ANSELB_BIT 7
#define HAL_LL_RB7_ANB7_ANSELB 15
#define HAL_LL_RD0_AND0_ANSELD_BIT 0
#define HAL_LL_RD0_AND0_ANSELD 24
#define HAL_LL_RD1_AND1_ANSELD_BIT 1
#define HAL_LL_RD1_AND1_ANSELD 25
#define HAL_LL_RD2_AND2_ANSELD_BIT 2
#define HAL_LL_RD2_AND2_ANSELD 26
#define HAL_LL_RD3_AND3_ANSELD_BIT 3
#define HAL_LL_RD3_AND3_ANSELD 27
#define HAL_LL_RD4_AND4_ANSELD_BIT 4
#define HAL_LL_RD4_AND4_ANSELD 28
#define HAL_LL_RD5_AND5_ANSELD_BIT 5
#define HAL_LL_RD5_AND5_ANSELD 29
#define HAL_LL_RD6_AND6_ANSELD_BIT 6
#define HAL_LL_RD6_AND6_ANSELD 30
#define HAL_LL_RD7_AND7_ANSELD_BIT 7
#define HAL_LL_RD7_AND7_ANSELD 31
#define HAL_LL_RE0_ANE0_ANSELE_BIT 0
#define HAL_LL_RE0_ANE0_ANSELE 0
#define HAL_LL_RE1_ANE1_ANSELE_BIT 1
#define HAL_LL_RE1_ANE1_ANSELE 1
#define HAL_LL_RE2_ANE2_ANSELE_BIT 2
#define HAL_LL_RE2_ANE2_ANSELE 2
#define HAL_LL_RE3_ANE3_ANSELE_BIT 3
#define HAL_LL_RE3_ANE3_ANSELE 3
#define HAL_LL_RE4_ANE4_ANSELE_BIT 4
#define HAL_LL_RE4_ANE4_ANSELE 4
#define HAL_LL_RE5_ANE5_ANSELE_BIT 5
#define HAL_LL_RE5_ANE5_ANSELE 5
#define HAL_LL_RE6_ANE6_ANSELE_BIT 6
#define HAL_LL_RE6_ANE6_ANSELE 6
#define HAL_LL_RE7_ANE7_ANSELE_BIT 7
#define HAL_LL_RE7_ANE7_ANSELE 7
#define HAL_LL_RF0_ANF0_ANSELF_BIT 0
#define HAL_LL_RF0_ANF0_ANSELF 0
#define HAL_LL_RF1_ANF1_ANSELF_BIT 1
#define HAL_LL_RF1_ANF1_ANSELF 1
#define HAL_LL_RF2_ANF2_ANSELF_BIT 2
#define HAL_LL_RF2_ANF2_ANSELF 2
#define HAL_LL_RF3_ANF3_ANSELF_BIT 3
#define HAL_LL_RF3_ANF3_ANSELF 3
#define HAL_LL_RF4_ANF4_ANSELF_BIT 4
#define HAL_LL_RF4_ANF4_ANSELF 4
#define HAL_LL_RF5_ANF5_ANSELF_BIT 5
#define HAL_LL_RF5_ANF5_ANSELF 5
#define HAL_LL_RF6_ANF6_ANSELF_BIT 6
#define HAL_LL_RF6_ANF6_ANSELF 6
#define HAL_LL_RF7_ANF7_ANSELF_BIT 7
#define HAL_LL_RF7_ANF7_ANSELF 7
#define HAL_LL_RG0_ANG0_ANSELG_BIT 0
#define HAL_LL_RG0_ANG0_ANSELG 0
#define HAL_LL_RG1_ANG1_ANSELG_BIT 1
#define HAL_LL_RG1_ANG1_ANSELG 1
#define HAL_LL_RG2_ANG2_ANSELG_BIT 2
#define HAL_LL_RG2_ANG2_ANSELG 2
#define HAL_LL_RG3_ANG3_ANSELG_BIT 3
#define HAL_LL_RG3_ANG3_ANSELG 3
#define HAL_LL_RG4_ANG4_ANSELG_BIT 4
#define HAL_LL_RG4_ANG4_ANSELG 4
#define HAL_LL_RG6_ANG6_ANSELG_BIT 6
#define HAL_LL_RG6_ANG6_ANSELG 6
#define HAL_LL_RG7_ANG7_ANSELG_BIT 7
#define HAL_LL_RG7_ANG7_ANSELG 7


#define HAL_LL_ADRESL_ADDRESS 0xF63U
#define HAL_LL_FVRCON_ADDRESS 0xEC4U
#define HAL_LL_ANSELG_ADDRESS 0xEBCU
#define HAL_LL_ANSELF_ADDRESS 0xEB4U
#define HAL_LL_ANSELE_ADDRESS 0xEAFU
#define HAL_LL_ANSELD_ADDRESS 0xEA7U
#define HAL_LL_ANSELB_ADDRESS 0xE9AU
#define HAL_LL_ANSELA_ADDRESS 0xE92U
#define HAL_LL_ADREF_ADDRESS 0xF58U
#define HAL_LL_ADPCH_ADDRESS 0xF5FU
#define HAL_LL_ADCON3_ADDRESS 0xF5BU
#define HAL_LL_ADCON2_ADDRESS 0xF5AU
#define HAL_LL_ADCON1_ADDRESS 0xF59U
#define HAL_LL_ADCON0_ADDRESS 0xF60U

#define HAL_LL_AN_COUNT 47
#define ADC_MODULE 1
#define ADC_MODULE_COUNT 1
//EOF ADC

//I2C
#define I2C1_SCL_RB0
#define I2C1_SCL_RB1
#define I2C1_SCL_RB2
#define I2C1_SCL_RB3
#define I2C1_SCL_RB4
#define I2C1_SCL_RB5
#define I2C1_SCL_RB6
#define I2C1_SCL_RB7
#define I2C1_SCL_RC0
#define I2C1_SCL_RC1
#define I2C1_SCL_RC2
#define I2C1_SCL_RC3
#define I2C1_SCL_RC4
#define I2C1_SCL_RC5
#define I2C1_SCL_RC6
#define I2C1_SCL_RC7
#define I2C1_SDA_RB0
#define I2C1_SDA_RB1
#define I2C1_SDA_RB2
#define I2C1_SDA_RB3
#define I2C1_SDA_RB4
#define I2C1_SDA_RB5
#define I2C1_SDA_RB6
#define I2C1_SDA_RB7
#define I2C1_SDA_RC0
#define I2C1_SDA_RC1
#define I2C1_SDA_RC2
#define I2C1_SDA_RC3
#define I2C1_SDA_RC4
#define I2C1_SDA_RC5
#define I2C1_SDA_RC6
#define I2C1_SDA_RC7
#define I2C2_SCL_RB0
#define I2C2_SCL_RB1
#define I2C2_SCL_RB2
#define I2C2_SCL_RB3
#define I2C2_SCL_RB4
#define I2C2_SCL_RB5
#define I2C2_SCL_RB6
#define I2C2_SCL_RB7
#define I2C2_SCL_RD0
#define I2C2_SCL_RD1
#define I2C2_SCL_RD2
#define I2C2_SCL_RD3
#define I2C2_SCL_RD4
#define I2C2_SCL_RD5
#define I2C2_SCL_RD6
#define I2C2_SCL_RD7
#define I2C2_SDA_RB0
#define I2C2_SDA_RB1
#define I2C2_SDA_RB2
#define I2C2_SDA_RB3
#define I2C2_SDA_RB4
#define I2C2_SDA_RB5
#define I2C2_SDA_RB6
#define I2C2_SDA_RB7
#define I2C2_SDA_RD0
#define I2C2_SDA_RD1
#define I2C2_SDA_RD2
#define I2C2_SDA_RD3
#define I2C2_SDA_RD4
#define I2C2_SDA_RD5
#define I2C2_SDA_RD6
#define I2C2_SDA_RD7

#define I2C_MODULE_1 1
#define I2C_MODULE_2 2

#define I2C_MODULE_COUNT 2

#define HAL_LL_I2C_PPS_ENABLED true
//EOF I2C

//UART
#define UART1_RX_RC0
#define UART1_RX_RC1
#define UART1_RX_RC2
#define UART1_RX_RC3
#define UART1_RX_RC4
#define UART1_RX_RC5
#define UART1_RX_RC6
#define UART1_RX_RC7
#define UART1_RX_RD0
#define UART1_RX_RD1
#define UART1_RX_RD2
#define UART1_RX_RD3
#define UART1_RX_RD4
#define UART1_RX_RD5
#define UART1_RX_RD6
#define UART1_RX_RD7
#define UART1_TX_RC0
#define UART1_TX_RC1
#define UART1_TX_RC2
#define UART1_TX_RC3
#define UART1_TX_RC4
#define UART1_TX_RC5
#define UART1_TX_RC6
#define UART1_TX_RC7
#define UART1_TX_RD0
#define UART1_TX_RD1
#define UART1_TX_RD2
#define UART1_TX_RD3
#define UART1_TX_RD4
#define UART1_TX_RD5
#define UART1_TX_RD6
#define UART1_TX_RD7
#define UART2_RX_RD0
#define UART2_RX_RD1
#define UART2_RX_RD2
#define UART2_RX_RD3
#define UART2_RX_RD4
#define UART2_RX_RD5
#define UART2_RX_RD6
#define UART2_RX_RD7
#define UART2_RX_RG0
#define UART2_RX_RG1
#define UART2_RX_RG2
#define UART2_RX_RG3
#define UART2_RX_RG4
#define UART2_RX_RG5
#define UART2_RX_RG6
#define UART2_RX_RG7
#define UART2_TX_RD0
#define UART2_TX_RD1
#define UART2_TX_RD2
#define UART2_TX_RD3
#define UART2_TX_RD4
#define UART2_TX_RD5
#define UART2_TX_RD6
#define UART2_TX_RD7
#define UART2_TX_RG0
#define UART2_TX_RG1
#define UART2_TX_RG2
#define UART2_TX_RG3
#define UART2_TX_RG4
#define UART2_TX_RG5
#define UART2_TX_RG6
#define UART2_TX_RG7
#define UART3_RX_RB0
#define UART3_RX_RB1
#define UART3_RX_RB2
#define UART3_RX_RB3
#define UART3_RX_RB4
#define UART3_RX_RB5
#define UART3_RX_RB6
#define UART3_RX_RB7
#define UART3_RX_RE0
#define UART3_RX_RE1
#define UART3_RX_RE2
#define UART3_RX_RE3
#define UART3_RX_RE4
#define UART3_RX_RE5
#define UART3_RX_RE6
#define UART3_RX_RE7
#define UART3_TX_RB0
#define UART3_TX_RB1
#define UART3_TX_RB2
#define UART3_TX_RB3
#define UART3_TX_RB4
#define UART3_TX_RB5
#define UART3_TX_RB6
#define UART3_TX_RB7
#define UART3_TX_RE0
#define UART3_TX_RE1
#define UART3_TX_RE2
#define UART3_TX_RE3
#define UART3_TX_RE4
#define UART3_TX_RE5
#define UART3_TX_RE6
#define UART3_TX_RE7
#define UART4_RX_RB0
#define UART4_RX_RB1
#define UART4_RX_RB2
#define UART4_RX_RB3
#define UART4_RX_RB4
#define UART4_RX_RB5
#define UART4_RX_RB6
#define UART4_RX_RB7
#define UART4_RX_RC0
#define UART4_RX_RC1
#define UART4_RX_RC2
#define UART4_RX_RC3
#define UART4_RX_RC4
#define UART4_RX_RC5
#define UART4_RX_RC6
#define UART4_RX_RC7
#define UART4_TX_RB0
#define UART4_TX_RB1
#define UART4_TX_RB2
#define UART4_TX_RB3
#define UART4_TX_RB4
#define UART4_TX_RB5
#define UART4_TX_RB6
#define UART4_TX_RB7
#define UART4_TX_RC0
#define UART4_TX_RC1
#define UART4_TX_RC2
#define UART4_TX_RC3
#define UART4_TX_RC4
#define UART4_TX_RC5
#define UART4_TX_RC6
#define UART4_TX_RC7
#define UART5_RX_RE0
#define UART5_RX_RE1
#define UART5_RX_RE2
#define UART5_RX_RE3
#define UART5_RX_RE4
#define UART5_RX_RE5
#define UART5_RX_RE6
#define UART5_RX_RE7
#define UART5_RX_RG0
#define UART5_RX_RG1
#define UART5_RX_RG2
#define UART5_RX_RG3
#define UART5_RX_RG4
#define UART5_RX_RG5
#define UART5_RX_RG6
#define UART5_RX_RG7
#define UART5_TX_RE0
#define UART5_TX_RE1
#define UART5_TX_RE2
#define UART5_TX_RE3
#define UART5_TX_RE4
#define UART5_TX_RE5
#define UART5_TX_RE6
#define UART5_TX_RE7
#define UART5_TX_RG0
#define UART5_TX_RG1
#define UART5_TX_RG2
#define UART5_TX_RG3
#define UART5_TX_RG4
#define UART5_TX_RG5
#define UART5_TX_RG6
#define UART5_TX_RG7

#define UART_MODULE_1 1
#define UART_MODULE_2 2
#define UART_MODULE_3 3
#define UART_MODULE_4 4
#define UART_MODULE_5 5

#define UART_MODULE_COUNT 5

#define HAL_LL_UART_PPS_ENABLED true
//EOF UART

//SPI
#define SPI1_MISO_RB0
#define SPI1_MISO_RB1
#define SPI1_MISO_RB2
#define SPI1_MISO_RB3
#define SPI1_MISO_RB4
#define SPI1_MISO_RB5
#define SPI1_MISO_RB6
#define SPI1_MISO_RB7
#define SPI1_MISO_RC0
#define SPI1_MISO_RC1
#define SPI1_MISO_RC2
#define SPI1_MISO_RC3
#define SPI1_MISO_RC4
#define SPI1_MISO_RC5
#define SPI1_MISO_RC6
#define SPI1_MISO_RC7
#define SPI1_MOSI_RB0
#define SPI1_MOSI_RB1
#define SPI1_MOSI_RB2
#define SPI1_MOSI_RB3
#define SPI1_MOSI_RB4
#define SPI1_MOSI_RB5
#define SPI1_MOSI_RB6
#define SPI1_MOSI_RB7
#define SPI1_MOSI_RC0
#define SPI1_MOSI_RC1
#define SPI1_MOSI_RC2
#define SPI1_MOSI_RC3
#define SPI1_MOSI_RC4
#define SPI1_MOSI_RC5
#define SPI1_MOSI_RC6
#define SPI1_MOSI_RC7
#define SPI1_SCK_RB0
#define SPI1_SCK_RB1
#define SPI1_SCK_RB2
#define SPI1_SCK_RB3
#define SPI1_SCK_RB4
#define SPI1_SCK_RB5
#define SPI1_SCK_RB6
#define SPI1_SCK_RB7
#define SPI1_SCK_RC0
#define SPI1_SCK_RC1
#define SPI1_SCK_RC2
#define SPI1_SCK_RC3
#define SPI1_SCK_RC4
#define SPI1_SCK_RC5
#define SPI1_SCK_RC6
#define SPI1_SCK_RC7
#define SPI2_MISO_RB0
#define SPI2_MISO_RB1
#define SPI2_MISO_RB2
#define SPI2_MISO_RB3
#define SPI2_MISO_RB4
#define SPI2_MISO_RB5
#define SPI2_MISO_RB6
#define SPI2_MISO_RB7
#define SPI2_MISO_RD0
#define SPI2_MISO_RD1
#define SPI2_MISO_RD2
#define SPI2_MISO_RD3
#define SPI2_MISO_RD4
#define SPI2_MISO_RD5
#define SPI2_MISO_RD6
#define SPI2_MISO_RD7
#define SPI2_MOSI_RB0
#define SPI2_MOSI_RB1
#define SPI2_MOSI_RB2
#define SPI2_MOSI_RB3
#define SPI2_MOSI_RB4
#define SPI2_MOSI_RB5
#define SPI2_MOSI_RB6
#define SPI2_MOSI_RB7
#define SPI2_MOSI_RD0
#define SPI2_MOSI_RD1
#define SPI2_MOSI_RD2
#define SPI2_MOSI_RD3
#define SPI2_MOSI_RD4
#define SPI2_MOSI_RD5
#define SPI2_MOSI_RD6
#define SPI2_MOSI_RD7
#define SPI2_SCK_RB0
#define SPI2_SCK_RB1
#define SPI2_SCK_RB2
#define SPI2_SCK_RB3
#define SPI2_SCK_RB4
#define SPI2_SCK_RB5
#define SPI2_SCK_RB6
#define SPI2_SCK_RB7
#define SPI2_SCK_RD0
#define SPI2_SCK_RD1
#define SPI2_SCK_RD2
#define SPI2_SCK_RD3
#define SPI2_SCK_RD4
#define SPI2_SCK_RD5
#define SPI2_SCK_RD6
#define SPI2_SCK_RD7

#define SPI_MODULE_1 1
#define SPI_MODULE_2 2

#define SPI_MODULE_COUNT 2

#define HAL_LL_SPI_PPS_ENABLED true
//EOF SPI

//PWM
#define PWM_CCP1_RC0
#define PWM_CCP1_RC1
#define PWM_CCP1_RC2
#define PWM_CCP1_RC3
#define PWM_CCP1_RC4
#define PWM_CCP1_RC5
#define PWM_CCP1_RC6
#define PWM_CCP1_RC7
#define PWM_CCP1_RE0
#define PWM_CCP1_RE1
#define PWM_CCP1_RE2
#define PWM_CCP1_RE3
#define PWM_CCP1_RE4
#define PWM_CCP1_RE5
#define PWM_CCP1_RE6
#define PWM_CCP1_RE7
#define PWM_CCP2_RC0
#define PWM_CCP2_RC1
#define PWM_CCP2_RC2
#define PWM_CCP2_RC3
#define PWM_CCP2_RC4
#define PWM_CCP2_RC5
#define PWM_CCP2_RC6
#define PWM_CCP2_RC7
#define PWM_CCP2_RE0
#define PWM_CCP2_RE1
#define PWM_CCP2_RE2
#define PWM_CCP2_RE3
#define PWM_CCP2_RE4
#define PWM_CCP2_RE5
#define PWM_CCP2_RE6
#define PWM_CCP2_RE7
#define PWM_CCP3_RC0
#define PWM_CCP3_RC1
#define PWM_CCP3_RC2
#define PWM_CCP3_RC3
#define PWM_CCP3_RC4
#define PWM_CCP3_RC5
#define PWM_CCP3_RC6
#define PWM_CCP3_RC7
#define PWM_CCP3_RE0
#define PWM_CCP3_RE1
#define PWM_CCP3_RE2
#define PWM_CCP3_RE3
#define PWM_CCP3_RE4
#define PWM_CCP3_RE5
#define PWM_CCP3_RE6
#define PWM_CCP3_RE7
#define PWM_CCP4_RE0
#define PWM_CCP4_RE1
#define PWM_CCP4_RE2
#define PWM_CCP4_RE3
#define PWM_CCP4_RE4
#define PWM_CCP4_RE5
#define PWM_CCP4_RE6
#define PWM_CCP4_RE7
#define PWM_CCP4_RG0
#define PWM_CCP4_RG1
#define PWM_CCP4_RG2
#define PWM_CCP4_RG3
#define PWM_CCP4_RG4
#define PWM_CCP4_RG5
#define PWM_CCP4_RG6
#define PWM_CCP4_RG7
#define PWM_CCP5_RE0
#define PWM_CCP5_RE1
#define PWM_CCP5_RE2
#define PWM_CCP5_RE3
#define PWM_CCP5_RE4
#define PWM_CCP5_RE5
#define PWM_CCP5_RE6
#define PWM_CCP5_RE7
#define PWM_CCP5_RG0
#define PWM_CCP5_RG1
#define PWM_CCP5_RG2
#define PWM_CCP5_RG3
#define PWM_CCP5_RG4
#define PWM_CCP5_RG5
#define PWM_CCP5_RG6
#define PWM_CCP5_RG7

#define CCP_MODULE_1 1
#define CCP_MODULE_2 2
#define CCP_MODULE_3 3
#define CCP_MODULE_4 4
#define CCP_MODULE_5 5

#define CCP_MODULE_COUNT 5

#define TIM_MODULE_COUNT CCP_MODULE_COUNT

#define HAL_LL_TIM_PPS_ENABLED true
//EOF PWM

//IO
#define __RA0_CN
#define __RA1_CN
#define __RA2_CN
#define __RA3_CN
#define __RA4_CN
#define __RA5_CN
#define __RA6_CN
#define __RA7_CN
#define __RB0_CN
#define __RB1_CN
#define __RB2_CN
#define __RB3_CN
#define __RB4_CN
#define __RB5_CN
#define __RB6_CN
#define __RB7_CN
#define __RC0_CN
#define __RC1_CN
#define __RC2_CN
#define __RC3_CN
#define __RC4_CN
#define __RC5_CN
#define __RC6_CN
#define __RC7_CN
#define __RD0_CN
#define __RD1_CN
#define __RD2_CN
#define __RD3_CN
#define __RD4_CN
#define __RD5_CN
#define __RD6_CN
#define __RD7_CN
#define __RE0_CN
#define __RE1_CN
#define __RE2_CN
#define __RE3_CN
#define __RE4_CN
#define __RE5_CN
#define __RE6_CN
#define __RE7_CN
#define __RF0_CN
#define __RF1_CN
#define __RF2_CN
#define __RF3_CN
#define __RF4_CN
#define __RF5_CN
#define __RF6_CN
#define __RF7_CN
#define __RG0_CN
#define __RG1_CN
#define __RG2_CN
#define __RG3_CN
#define __RG4_CN
#define __RG5_CN
#define __RG6_CN
#define __RG7_CN
#define __RH0_CN
#define __RH1_CN
#define __RH2_CN
#define __RH3_CN

#define __PORT_A_CN
#define __PORT_B_CN
#define __PORT_C_CN
#define __PORT_D_CN
#define __PORT_E_CN
#define __PORT_F_CN
#define __PORT_G_CN
#define __PORT_H_CN
#define PORT_COUNT (8)
#define PORT_SIZE (8)
//EOF IO

// GPIO Register addresses and offsets
#define LATA_BASE_ADDRESS 0xF79U
#define LATB_BASE_ADDRESS 0xF7AU
#define LATC_BASE_ADDRESS 0xF7BU
#define LATD_BASE_ADDRESS 0xF7CU
#define LATE_BASE_ADDRESS 0xF7DU
#define LATF_BASE_ADDRESS 0xF7EU
#define LATG_BASE_ADDRESS 0xF7FU
#define LATH_BASE_ADDRESS 0xF80U
#define PORTA_BASE_ADDRESS 0xF89U
#define PORTB_BASE_ADDRESS 0xF8AU
#define PORTC_BASE_ADDRESS 0xF8BU
#define PORTD_BASE_ADDRESS 0xF8CU
#define PORTE_BASE_ADDRESS 0xF8DU
#define PORTF_BASE_ADDRESS 0xF8EU
#define PORTG_BASE_ADDRESS 0xF8FU
#define PORTH_BASE_ADDRESS 0xF90U
#define TRISA_BASE_ADDRESS 0xF81U
#define TRISB_BASE_ADDRESS 0xF82U
#define TRISC_BASE_ADDRESS 0xF83U
#define TRISD_BASE_ADDRESS 0xF84U
#define TRISE_BASE_ADDRESS 0xF85U
#define TRISF_BASE_ADDRESS 0xF86U
#define TRISG_BASE_ADDRESS 0xF87U
#define TRISH_BASE_ADDRESS 0xF88U
// EOF GPIO Register addresses and offsets

// PMD Register addresses
#define HAL_LL_PIE0_ADDRESS 0xE29U
#define HAL_LL_PIE1_ADDRESS 0xE2AU
#define HAL_LL_PIE2_ADDRESS 0xE2BU
#define HAL_LL_PIE3_ADDRESS 0xE2CU
#define HAL_LL_PIE4_ADDRESS 0xE2DU
#define HAL_LL_PIE5_ADDRESS 0xE2EU
#define HAL_LL_PIE6_ADDRESS 0xE2FU
#define HAL_LL_PIE7_ADDRESS 0xE30U
#define HAL_LL_PIE8_ADDRESS 0xE31U
#define HAL_LL_PIE9_ADDRESS 0xE32U
#define HAL_LL_PIR0_ADDRESS 0xE33U
#define HAL_LL_PIR1_ADDRESS 0xE34U
#define HAL_LL_PIR2_ADDRESS 0xE35U
#define HAL_LL_PIR3_ADDRESS 0xE36U
#define HAL_LL_PIR4_ADDRESS 0xE37U
#define HAL_LL_PIR5_ADDRESS 0xE38U
#define HAL_LL_PIR6_ADDRESS 0xE39U
#define HAL_LL_PIR7_ADDRESS 0xE3AU
#define HAL_LL_PIR8_ADDRESS 0xE3BU
#define HAL_LL_PIR9_ADDRESS 0xE3CU
#define HAL_LL_PMD0_ADDRESS 0xE4CU
#define HAL_LL_PMD1_ADDRESS 0xE4DU
#define HAL_LL_PMD2_ADDRESS 0xE4EU
#define HAL_LL_PMD3_ADDRESS 0xE4FU
#define HAL_LL_PMD4_ADDRESS 0xE50U
#define HAL_LL_PMD5_ADDRESS 0xE51U
// EOF PMD Register addresses

// I2C and SPI Register addresses
#define HAL_LL_OSCEN_ADDRESS 0xE47U
#define HAL_LL_OSCSTAT_ADDRESS 0xE46U
#define HAL_LL_SSP1ADD_ADDRESS 0xF92U
#define HAL_LL_SSP1BUF_ADDRESS 0xF91U
#define HAL_LL_SSP1CON1_ADDRESS 0xF95U
#define HAL_LL_SSP1CON2_ADDRESS 0xF96U
#define HAL_LL_SSP1STAT_ADDRESS 0xF94U
#define HAL_LL_SSP2ADD_ADDRESS 0xED6U
#define HAL_LL_SSP2BUF_ADDRESS 0xED5U
#define HAL_LL_SSP2CON1_ADDRESS 0xED9U
#define HAL_LL_SSP2CON2_ADDRESS 0xEDAU
#define HAL_LL_SSP2STAT_ADDRESS 0xED8U
#define HAL_LL_SSPBUF_SPI_MASTER_MODULE_1 HAL_LL_SSP1BUF_ADDRESS
#define HAL_LL_SSPBUF_SPI_MASTER_MODULE_2 HAL_LL_SSP2BUF_ADDRESS
#define HAL_LL_SSPCON1_SPI_MASTER_MODULE_1 HAL_LL_SSP1CON1_ADDRESS
#define HAL_LL_SSPCON1_SPI_MASTER_MODULE_2 HAL_LL_SSP2CON1_ADDRESS
#define HAL_LL_SSPSTAT_SPI_MASTER_MODULE_1 HAL_LL_SSP1STAT_ADDRESS
#define HAL_LL_SSPSTAT_SPI_MASTER_MODULE_2 HAL_LL_SSP2STAT_ADDRESS
// EOF I2C and SPI Register addresses

// PMD & PIR Register defines
#define HAL_LL_PIE_MODULE_UART1_ADDRESS HAL_LL_PIE3_ADDRESS
#define HAL_LL_PIE_MODULE_UART2_ADDRESS HAL_LL_PIE3_ADDRESS
#define HAL_LL_PIE_MODULE_UART3_ADDRESS HAL_LL_PIE4_ADDRESS
#define HAL_LL_PIE_MODULE_UART4_ADDRESS HAL_LL_PIE4_ADDRESS
#define HAL_LL_PIE_MODULE_UART5_ADDRESS HAL_LL_PIE4_ADDRESS
#define HAL_LL_PIR_MODULE_I2C1_ADDRESS HAL_LL_PIR3_ADDRESS
#define HAL_LL_PIR_MODULE_I2C2_ADDRESS HAL_LL_PIR3_ADDRESS
#define HAL_LL_PIR_MODULE_UART1_ADDRESS HAL_LL_PIR3_ADDRESS
#define HAL_LL_PIR_MODULE_UART2_ADDRESS HAL_LL_PIR3_ADDRESS
#define HAL_LL_PIR_MODULE_UART3_ADDRESS HAL_LL_PIR4_ADDRESS
#define HAL_LL_PIR_MODULE_UART4_ADDRESS HAL_LL_PIR4_ADDRESS
#define HAL_LL_PIR_MODULE_UART5_ADDRESS HAL_LL_PIR4_ADDRESS
#define HAL_LL_PIR_SSPIF_MODULE_1_BIT 0
#define HAL_LL_PIR_SSPIF_MODULE_2_BIT 2
#define HAL_LL_PMD_I2C1_ADDRESS HAL_LL_PMD5_ADDRESS
#define HAL_LL_PMD_I2C2_ADDRESS HAL_LL_PMD5_ADDRESS
#define HAL_LL_PMD_SPI1_ADDRESS HAL_LL_PMD5_ADDRESS
#define HAL_LL_PMD_SPI2_ADDRESS HAL_LL_PMD5_ADDRESS
#define HAL_LL_PMD_UART1_ADDRESS HAL_LL_PMD5_ADDRESS
#define HAL_LL_PMD_UART2_ADDRESS HAL_LL_PMD5_ADDRESS
#define HAL_LL_PMD_UART3_ADDRESS HAL_LL_PMD5_ADDRESS
#define HAL_LL_PMD_UART4_ADDRESS HAL_LL_PMD5_ADDRESS
#define HAL_LL_PMD_UART5_ADDRESS HAL_LL_PMD5_ADDRESS
#define HAL_LL_SSP1_MODULE_BIT 0
#define HAL_LL_SSP2_MODULE_BIT 1
#define HAL_LL_UART1_MODULE_BIT 2
#define HAL_LL_UART1_RCIF_BIT 5
#define HAL_LL_UART1_TXIF_BIT 4
#define HAL_LL_UART2_MODULE_BIT 3
#define HAL_LL_UART2_RCIF_BIT 7
#define HAL_LL_UART2_TXIF_BIT 6
#define HAL_LL_UART3_MODULE_BIT 4
#define HAL_LL_UART3_RCIF_BIT 1
#define HAL_LL_UART3_TXIF_BIT 0
#define HAL_LL_UART4_MODULE_BIT 5
#define HAL_LL_UART4_RCIF_BIT 3
#define HAL_LL_UART4_TXIF_BIT 2
#define HAL_LL_UART5_MODULE_BIT 6
#define HAL_LL_UART5_RCIF_BIT 5
#define HAL_LL_UART5_TXIF_BIT 4
// EOF PMD & PIR Register defines

// TMR Register addresses
#define HAL_LL_CCP1CON_ADDRESS 0xFABU
#define HAL_LL_CCP2CON_ADDRESS 0xFA7U
#define HAL_LL_CCP3CON_ADDRESS 0xF26U
#define HAL_LL_CCP4CON_ADDRESS 0xF22U
#define HAL_LL_CCP5CON_ADDRESS 0xF1EU
#define HAL_LL_CCPTMRS0_ADDRESS 0xFADU
#define HAL_LL_CCPTMRS_CCP_MODULE_1 HAL_LL_CCPTMRS0_ADDRESS
#define HAL_LL_CCP_MODULE_1_TIM2_ENABLE_BIT 0x00
#define HAL_LL_CCPTMRS_CCP_MODULE_1 HAL_LL_CCPTMRS0_ADDRESS
#define HAL_LL_CCP_MODULE_1_TIM2_ENABLE_BIT 0x00
#define HAL_LL_CCPTMRS_CCP_MODULE_2 HAL_LL_CCPTMRS0_ADDRESS
#define HAL_LL_CCP_MODULE_2_TIM2_ENABLE_BIT 0x00
#define HAL_LL_CCPTMRS_CCP_MODULE_2 HAL_LL_CCPTMRS0_ADDRESS
#define HAL_LL_CCP_MODULE_2_TIM2_ENABLE_BIT 0x00
#define HAL_LL_CCPTMRS_CCP_MODULE_3 HAL_LL_CCPTMRS0_ADDRESS
#define HAL_LL_CCP_MODULE_3_TIM2_ENABLE_BIT 0x00
#define HAL_LL_CCPTMRS_CCP_MODULE_3 HAL_LL_CCPTMRS0_ADDRESS
#define HAL_LL_CCP_MODULE_3_TIM2_ENABLE_BIT 0x00
#define HAL_LL_CCPTMRS_CCP_MODULE_4 HAL_LL_CCPTMRS0_ADDRESS
#define HAL_LL_CCP_MODULE_4_TIM2_ENABLE_BIT 0x00
#define HAL_LL_CCPTMRS_CCP_MODULE_4 HAL_LL_CCPTMRS0_ADDRESS
#define HAL_LL_CCP_MODULE_4_TIM2_ENABLE_BIT 0x00
#define HAL_LL_CCPTMRS1_ADDRESS 0xFAEU
#define HAL_LL_CCPTMRS_CCP_MODULE_5 HAL_LL_CCPTMRS1_ADDRESS
#define HAL_LL_CCP_MODULE_5_TIM2_ENABLE_BIT 0x00
#define HAL_LL_CCPTMRS_CCP_MODULE_5 HAL_LL_CCPTMRS1_ADDRESS
#define HAL_LL_CCP_MODULE_5_TIM2_ENABLE_BIT 0x00
#define HAL_LL_PMD_CCP_MODULE_1 HAL_LL_PMD4_ADDRESS
#define HAL_LL_PMD_CCP_MODULE_1_ENABLE_BIT 0
#define HAL_LL_PMD_CCP_MODULE_2 HAL_LL_PMD4_ADDRESS
#define HAL_LL_PMD_CCP_MODULE_2_ENABLE_BIT 1
#define HAL_LL_PMD_CCP_MODULE_3 HAL_LL_PMD4_ADDRESS
#define HAL_LL_PMD_CCP_MODULE_3_ENABLE_BIT 2
#define HAL_LL_PMD_CCP_MODULE_4 HAL_LL_PMD4_ADDRESS
#define HAL_LL_PMD_CCP_MODULE_4_ENABLE_BIT 3
#define HAL_LL_PMD_CCP_MODULE_5 HAL_LL_PMD4_ADDRESS
#define HAL_LL_PMD_CCP_MODULE_5_ENABLE_BIT 4
#define HAL_LL_T0CON0_ADDRESS 0xFD5U
#define HAL_LL_T0CON1_ADDRESS 0xFD6U
#define HAL_LL_T1CON_ADDRESS 0xFCFU
#define HAL_LL_T2CLKCON_ADDRESS 0xFBFU
#define HAL_LL_T2CON_ADDRESS 0xFBDU
#define HAL_LL_PR2_ADDRESS 0xFBCU
#define HAL_LL_T3CON_ADDRESS 0xFC9U
#define HAL_LL_T4CLKCON_ADDRESS 0xFB9U
#define HAL_LL_T4CON_ADDRESS 0xFB7U
#define HAL_LL_PR4_ADDRESS 0xFB6U
#define HAL_LL_T5CON_ADDRESS 0xFC3U
#define HAL_LL_T6CLKCON_ADDRESS 0xFB3U
#define HAL_LL_T6CON_ADDRESS 0xFB1U
#define HAL_LL_PR6_ADDRESS 0xFB0U
#define HAL_LL_T7CON_ADDRESS 0xF30U
#define HAL_LL_T8CLKCON_ADDRESS 0xF2CU
#define HAL_LL_T8CON_ADDRESS 0xF2AU
#define HAL_LL_PR8_ADDRESS 0xF29U
#define HAL_LL_CCPR1L_ADDRESS 0xFA9U
#define HAL_LL_CCPR2L_ADDRESS 0xFA5U
#define HAL_LL_CCPR3L_ADDRESS 0xF24U
#define HAL_LL_CCPR4L_ADDRESS 0xF20U
#define HAL_LL_CCPR5L_ADDRESS 0xF1CU
// EOF TMR Register addresses

// ADC Register addresses and bit defines
#define HAL_LL_ADC_PMD_ADDRESS HAL_LL_PMD3_ADDRESS
#define HAL_LL_ADCMD_BIT 5
// EOF ADC Register addresses and bit defines

// SLRCON Register addresses and bit defines
#define HAL_LL_SLRCON_PA0_BIT 0
#define HAL_LL_SLRCON_PA1_BIT 1
#define HAL_LL_SLRCON_PA2_BIT 2
#define HAL_LL_SLRCON_PA3_BIT 3
#define HAL_LL_SLRCON_PA4_BIT 4
#define HAL_LL_SLRCON_PA5_BIT 5
#define HAL_LL_SLRCON_PA6_BIT 6
#define HAL_LL_SLRCON_PA7_BIT 7
#define HAL_LL_SLRCON_PB0_BIT 0
#define HAL_LL_SLRCON_PB1_BIT 1
#define HAL_LL_SLRCON_PB2_BIT 2
#define HAL_LL_SLRCON_PB3_BIT 3
#define HAL_LL_SLRCON_PB4_BIT 4
#define HAL_LL_SLRCON_PB5_BIT 5
#define HAL_LL_SLRCON_PB6_BIT 6
#define HAL_LL_SLRCON_PB7_BIT 7
#define HAL_LL_SLRCON_PC0_BIT 0
#define HAL_LL_SLRCON_PC1_BIT 1
#define HAL_LL_SLRCON_PC2_BIT 2
#define HAL_LL_SLRCON_PC3_BIT 3
#define HAL_LL_SLRCON_PC4_BIT 4
#define HAL_LL_SLRCON_PC5_BIT 5
#define HAL_LL_SLRCON_PC6_BIT 6
#define HAL_LL_SLRCON_PC7_BIT 7
#define HAL_LL_SLRCON_PD0_BIT 0
#define HAL_LL_SLRCON_PD1_BIT 1
#define HAL_LL_SLRCON_PD2_BIT 2
#define HAL_LL_SLRCON_PD3_BIT 3
#define HAL_LL_SLRCON_PD4_BIT 4
#define HAL_LL_SLRCON_PD5_BIT 5
#define HAL_LL_SLRCON_PD6_BIT 6
#define HAL_LL_SLRCON_PD7_BIT 7
#define HAL_LL_SLRCON_PE0_BIT 0
#define HAL_LL_SLRCON_PE1_BIT 1
#define HAL_LL_SLRCON_PE2_BIT 2
#define HAL_LL_SLRCON_PE3_BIT 3
#define HAL_LL_SLRCON_PE4_BIT 4
#define HAL_LL_SLRCON_PE5_BIT 5
#define HAL_LL_SLRCON_PE6_BIT 6
#define HAL_LL_SLRCON_PE7_BIT 7
#define HAL_LL_SLRCON_PF0_BIT 0
#define HAL_LL_SLRCON_PF1_BIT 1
#define HAL_LL_SLRCON_PF2_BIT 2
#define HAL_LL_SLRCON_PF3_BIT 3
#define HAL_LL_SLRCON_PF4_BIT 4
#define HAL_LL_SLRCON_PF5_BIT 5
#define HAL_LL_SLRCON_PF6_BIT 6
#define HAL_LL_SLRCON_PF7_BIT 7
#define HAL_LL_SLRCON_PG0_BIT 0
#define HAL_LL_SLRCON_PG1_BIT 1
#define HAL_LL_SLRCON_PG2_BIT 2
#define HAL_LL_SLRCON_PG3_BIT 3
#define HAL_LL_SLRCON_PG4_BIT 4
#define HAL_LL_SLRCON_PG6_BIT 6
#define HAL_LL_SLRCON_PG7_BIT 7
#define HAL_LL_SLRCON_PH0_BIT 0
#define HAL_LL_SLRCON_PH1_BIT 1
#define HAL_LL_SLRCON_PH2_BIT 2
#define HAL_LL_SLRCON_PH3_BIT 3
#define HAL_LL_SLRCONA_ADDRESS 0xE8FU
#define HAL_LL_SLRCONB_ADDRESS 0xE97U
#define HAL_LL_SLRCONC_ADDRESS 0xE9FU
#define HAL_LL_SLRCOND_ADDRESS 0xEA4U
#define HAL_LL_SLRCONE_ADDRESS 0xEACU
#define HAL_LL_SLRCONF_ADDRESS 0xEB1U
#define HAL_LL_SLRCONG_ADDRESS 0xEB9U
#define HAL_LL_SLRCONH_ADDRESS 0xEBEU
#define HAL_LL_SLRCON_BIT_COUNT 59

// EOF SLRCON Register addresses and bit defines

// ODCON Register addresses and bit defines
#define HAL_LL_ODCON_ALPHABETIC
#define HAL_LL_ODCONA_ADDRESS 0xE90U
#define HAL_LL_ODCONA_ODCA0_BIT 0
#define HAL_LL_ODCONA_ODCA1_BIT 1
#define HAL_LL_ODCONA_ODCA2_BIT 2
#define HAL_LL_ODCONA_ODCA3_BIT 3
#define HAL_LL_ODCONA_ODCA4_BIT 4
#define HAL_LL_ODCONA_ODCA5_BIT 5
#define HAL_LL_ODCONA_ODCA6_BIT 6
#define HAL_LL_ODCONA_ODCA7_BIT 7
#define HAL_LL_ODCONB_ADDRESS 0xE98U
#define HAL_LL_ODCONB_ODCB0_BIT 0
#define HAL_LL_ODCONB_ODCB1_BIT 1
#define HAL_LL_ODCONB_ODCB2_BIT 2
#define HAL_LL_ODCONB_ODCB3_BIT 3
#define HAL_LL_ODCONB_ODCB4_BIT 4
#define HAL_LL_ODCONB_ODCB5_BIT 5
#define HAL_LL_ODCONB_ODCB6_BIT 6
#define HAL_LL_ODCONB_ODCB7_BIT 7
#define HAL_LL_ODCONC_ADDRESS 0xEA0U
#define HAL_LL_ODCONC_ODCC0_BIT 0
#define HAL_LL_ODCONC_ODCC1_BIT 1
#define HAL_LL_ODCONC_ODCC2_BIT 2
#define HAL_LL_ODCONC_ODCC3_BIT 3
#define HAL_LL_ODCONC_ODCC4_BIT 4
#define HAL_LL_ODCONC_ODCC5_BIT 5
#define HAL_LL_ODCONC_ODCC6_BIT 6
#define HAL_LL_ODCONC_ODCC7_BIT 7
#define HAL_LL_ODCOND_ADDRESS 0xEA5U
#define HAL_LL_ODCOND_ODCD0_BIT 0
#define HAL_LL_ODCOND_ODCD1_BIT 1
#define HAL_LL_ODCOND_ODCD2_BIT 2
#define HAL_LL_ODCOND_ODCD3_BIT 3
#define HAL_LL_ODCOND_ODCD4_BIT 4
#define HAL_LL_ODCOND_ODCD5_BIT 5
#define HAL_LL_ODCOND_ODCD6_BIT 6
#define HAL_LL_ODCOND_ODCD7_BIT 7
#define HAL_LL_ODCONE_ADDRESS 0xEADU
#define HAL_LL_ODCONE_ODCE0_BIT 0
#define HAL_LL_ODCONE_ODCE1_BIT 1
#define HAL_LL_ODCONE_ODCE2_BIT 2
#define HAL_LL_ODCONE_ODCE3_BIT 3
#define HAL_LL_ODCONE_ODCE4_BIT 4
#define HAL_LL_ODCONE_ODCE5_BIT 5
#define HAL_LL_ODCONE_ODCE6_BIT 6
#define HAL_LL_ODCONE_ODCE7_BIT 7
#define HAL_LL_ODCONF_ADDRESS 0xEB2U
#define HAL_LL_ODCONF_ODCF0_BIT 0
#define HAL_LL_ODCONF_ODCF1_BIT 1
#define HAL_LL_ODCONF_ODCF2_BIT 2
#define HAL_LL_ODCONF_ODCF3_BIT 3
#define HAL_LL_ODCONF_ODCF4_BIT 4
#define HAL_LL_ODCONF_ODCF5_BIT 5
#define HAL_LL_ODCONF_ODCF6_BIT 6
#define HAL_LL_ODCONF_ODCF7_BIT 7
#define HAL_LL_ODCONG_ADDRESS 0xEBAU
#define HAL_LL_ODCONG_ODCG0_BIT 0
#define HAL_LL_ODCONG_ODCG1_BIT 1
#define HAL_LL_ODCONG_ODCG2_BIT 2
#define HAL_LL_ODCONG_ODCG3_BIT 3
#define HAL_LL_ODCONG_ODCG4_BIT 4
#define HAL_LL_ODCONG_ODCG6_BIT 6
#define HAL_LL_ODCONG_ODCG7_BIT 7
#define HAL_LL_ODCONH_ADDRESS 0xEBFU
#define HAL_LL_ODCONH_ODCH0_BIT 0
#define HAL_LL_ODCONH_ODCH1_BIT 1
#define HAL_LL_ODCONH_ODCH2_BIT 2
#define HAL_LL_ODCONH_ODCH3_BIT 3
#define HAL_LL_ODCONH_ODCH4_BIT 4
#define HAL_LL_ODCONH_ODCH5_BIT 5
#define HAL_LL_ODCONH_ODCH6_BIT 6
#define HAL_LL_ODCONH_ODCH7_BIT 7
#define HAL_LL_ODCON_BIT_COUNT 63

// EOF ODCON Register addresses and bit defines

// UART Register addresses
#define HAL_LL_BAUDCON1_ADDRESS 0xF9EU
#define HAL_LL_BAUDCON2_ADDRESS 0xEF7U
#define HAL_LL_BAUDCON3_ADDRESS 0xEF0U
#define HAL_LL_BAUDCON4_ADDRESS 0xEE9U
#define HAL_LL_BAUDCON5_ADDRESS 0xEE2U
#define HAL_LL_RCREG1_ADDRESS 0xF98U
#define HAL_LL_RCREG2_ADDRESS 0xEF1U
#define HAL_LL_RCREG3_ADDRESS 0xEEAU
#define HAL_LL_RCREG4_ADDRESS 0xEE3U
#define HAL_LL_RCREG5_ADDRESS 0xEDCU
#define HAL_LL_RCSTA1_ADDRESS 0xF9CU
#define HAL_LL_RCSTA2_ADDRESS 0xEF5U
#define HAL_LL_RCSTA3_ADDRESS 0xEEEU
#define HAL_LL_RCSTA4_ADDRESS 0xEE7U
#define HAL_LL_RCSTA5_ADDRESS 0xEE0U
#define HAL_LL_SPBRG1_ADDRESS 0xF9AU
#define HAL_LL_SPBRG2_ADDRESS 0xEF3U
#define HAL_LL_SPBRG3_ADDRESS 0xEECU
#define HAL_LL_SPBRG4_ADDRESS 0xEE5U
#define HAL_LL_SPBRG5_ADDRESS 0xEDEU
#define HAL_LL_SPBRGH1_ADDRESS 0xF9BU
#define HAL_LL_SPBRGH2_ADDRESS 0xEF4U
#define HAL_LL_SPBRGH3_ADDRESS 0xEEDU
#define HAL_LL_SPBRGH4_ADDRESS 0xEE6U
#define HAL_LL_SPBRGH5_ADDRESS 0xEDFU
#define HAL_LL_TXREG1_ADDRESS 0xF99U
#define HAL_LL_TXREG2_ADDRESS 0xEF2U
#define HAL_LL_TXREG3_ADDRESS 0xEEBU
#define HAL_LL_TXREG4_ADDRESS 0xEE4U
#define HAL_LL_TXREG5_ADDRESS 0xEDDU
#define HAL_LL_TXSTA1_ADDRESS 0xF9DU
#define HAL_LL_TXSTA2_ADDRESS 0xEF6U
#define HAL_LL_TXSTA3_ADDRESS 0xEEFU
#define HAL_LL_TXSTA4_ADDRESS 0xEE8U
#define HAL_LL_TXSTA5_ADDRESS 0xEE1U
// EOF UART Register addresses

// PPS Register addresses
#define HAL_LL_INT0PPS_ADDRESS 0xDF0U
#define HAL_LL_INT1PPS_ADDRESS 0xDF1U
#define HAL_LL_INT2PPS_ADDRESS 0xDF2U
#define HAL_LL_INT3PPS_ADDRESS 0xDF3U
#define HAL_LL_T0CKIPPS_ADDRESS 0xDF4U
#define HAL_LL_T1CKIPPS_ADDRESS 0xDF5U
#define HAL_LL_T1GPPS_ADDRESS 0xDF6U
#define HAL_LL_T3CKIPPS_ADDRESS 0xDF7U
#define HAL_LL_T3GPPS_ADDRESS 0xDF8U
#define HAL_LL_T5CKIPPS_ADDRESS 0xDF9U
#define HAL_LL_T5GPPS_ADDRESS 0xDFAU
#define HAL_LL_T7CKIPPS_ADDRESS 0xDFBU
#define HAL_LL_T7GPPS_ADDRESS 0xDFCU
#define HAL_LL_T2INPPS_ADDRESS 0xDFDU
#define HAL_LL_T4INPPS_ADDRESS 0xDFEU
#define HAL_LL_T6INPPS_ADDRESS 0xDFFU
#define HAL_LL_T8INPPS_ADDRESS 0xE00U
#define HAL_LL_ADACTPPS_ADDRESS 0xE01U
#define HAL_LL_CCP1PPS_ADDRESS 0xE02U
#define HAL_LL_CCP2PPS_ADDRESS 0xE03U
#define HAL_LL_CCP3PPS_ADDRESS 0xE04U
#define HAL_LL_CCP4PPS_ADDRESS 0xE05U
#define HAL_LL_CCP5PPS_ADDRESS 0xE06U
#define HAL_LL_SMT1WINPPS_ADDRESS 0xE07U
#define HAL_LL_SMT1SIGPPS_ADDRESS 0xE08U
#define HAL_LL_SMT2WINPPS_ADDRESS 0xE09U
#define HAL_LL_SMT2SIGPPS_ADDRESS 0xE0AU
#define HAL_LL_CWG1PPS_ADDRESS 0xE0BU
#define HAL_LL_MDCARLPPS_ADDRESS 0xE0CU
#define HAL_LL_MDCARHPPS_ADDRESS 0xE0DU
#define HAL_LL_MDSRCPPS_ADDRESS 0xE0EU
#define HAL_LL_RX1PPS_ADDRESS 0xE0FU
#define HAL_LL_CK1PPS_ADDRESS 0xE10U
#define HAL_LL_RX2PPS_ADDRESS 0xE11U
#define HAL_LL_CK2PPS_ADDRESS 0xE12U
#define HAL_LL_RX3PPS_ADDRESS 0xE13U
#define HAL_LL_CK3PPS_ADDRESS 0xE14U
#define HAL_LL_RX4PPS_ADDRESS 0xE15U
#define HAL_LL_CK4PPS_ADDRESS 0xE16U
#define HAL_LL_RX5PPS_ADDRESS 0xE17U
#define HAL_LL_CK5PPS_ADDRESS 0xE18U
#define HAL_LL_SSP1CLKPPS_ADDRESS 0xE19U
#define HAL_LL_SSP1DATPPS_ADDRESS 0xE1AU
#define HAL_LL_SSP1SSPPS_ADDRESS 0xE1BU
#define HAL_LL_SSP2CLKPPS_ADDRESS 0xE1CU
#define HAL_LL_SSP2DATPPS_ADDRESS 0xE1DU
#define HAL_LL_SSP2SSPPS_ADDRESS 0xE1EU
#define HAL_LL_RA0PPS_ADDRESS 0xE52U
#define HAL_LL_RA1PPS_ADDRESS 0xE53U
#define HAL_LL_RA2PPS_ADDRESS 0xE54U
#define HAL_LL_RA3PPS_ADDRESS 0xE55U
#define HAL_LL_RA4PPS_ADDRESS 0xE56U
#define HAL_LL_RA5PPS_ADDRESS 0xE57U
#define HAL_LL_RA6PPS_ADDRESS 0xE58U
#define HAL_LL_RA7PPS_ADDRESS 0xE59U
#define HAL_LL_RB0PPS_ADDRESS 0xE5AU
#define HAL_LL_RB1PPS_ADDRESS 0xE5BU
#define HAL_LL_RB2PPS_ADDRESS 0xE5CU
#define HAL_LL_RB3PPS_ADDRESS 0xE5DU
#define HAL_LL_RB4PPS_ADDRESS 0xE5EU
#define HAL_LL_RB5PPS_ADDRESS 0xE5FU
#define HAL_LL_RB6PPS_ADDRESS 0xE60U
#define HAL_LL_RB7PPS_ADDRESS 0xE61U
#define HAL_LL_RC0PPS_ADDRESS 0xE62U
#define HAL_LL_RC1PPS_ADDRESS 0xE63U
#define HAL_LL_RC2PPS_ADDRESS 0xE64U
#define HAL_LL_RC3PPS_ADDRESS 0xE65U
#define HAL_LL_RC4PPS_ADDRESS 0xE66U
#define HAL_LL_RC5PPS_ADDRESS 0xE67U
#define HAL_LL_RC6PPS_ADDRESS 0xE68U
#define HAL_LL_RC7PPS_ADDRESS 0xE69U
#define HAL_LL_RD0PPS_ADDRESS 0xE6AU
#define HAL_LL_RD1PPS_ADDRESS 0xE6BU
#define HAL_LL_RD2PPS_ADDRESS 0xE6CU
#define HAL_LL_RD3PPS_ADDRESS 0xE6DU
#define HAL_LL_RD4PPS_ADDRESS 0xE6EU
#define HAL_LL_RD5PPS_ADDRESS 0xE6FU
#define HAL_LL_RD6PPS_ADDRESS 0xE70U
#define HAL_LL_RD7PPS_ADDRESS 0xE71U
#define HAL_LL_RE0PPS_ADDRESS 0xE72U
#define HAL_LL_RE1PPS_ADDRESS 0xE73U
#define HAL_LL_RE2PPS_ADDRESS 0xE74U
#define HAL_LL_RE3PPS_ADDRESS 0xE75U
#define HAL_LL_RE4PPS_ADDRESS 0xE76U
#define HAL_LL_RE5PPS_ADDRESS 0xE77U
#define HAL_LL_RE6PPS_ADDRESS 0xE78U
#define HAL_LL_RE7PPS_ADDRESS 0xE79U
#define HAL_LL_RF0PPS_ADDRESS 0xE7AU
#define HAL_LL_RF1PPS_ADDRESS 0xE7BU
#define HAL_LL_RF2PPS_ADDRESS 0xE7CU
#define HAL_LL_RF3PPS_ADDRESS 0xE7DU
#define HAL_LL_RF4PPS_ADDRESS 0xE7EU
#define HAL_LL_RF5PPS_ADDRESS 0xE7FU
#define HAL_LL_RF6PPS_ADDRESS 0xE80U
#define HAL_LL_RF7PPS_ADDRESS 0xE81U
#define HAL_LL_RG0PPS_ADDRESS 0xE82U
#define HAL_LL_RG1PPS_ADDRESS 0xE83U
#define HAL_LL_RG2PPS_ADDRESS 0xE84U
#define HAL_LL_RG3PPS_ADDRESS 0xE85U
#define HAL_LL_RG4PPS_ADDRESS 0xE86U
#define HAL_LL_RG6PPS_ADDRESS 0xE88U
#define HAL_LL_RG7PPS_ADDRESS 0xE89U
#define HAL_LL_RH0PPS_ADDRESS 0xE8AU
#define HAL_LL_RH1PPS_ADDRESS 0xE8BU
#define HAL_LL_RH2PPS_ADDRESS 0xE8CU
#define HAL_LL_RH3PPS_ADDRESS 0xE8DU
// EOF PPS Register addresses

// Unlock Register addresses
#define HAL_LL_PPSLOCK_ADDRESS 0xDEFU
#define HAL_LL_OSCCON2_ADDRESS 0xE44U
// EOF Unlock Register addresses

// IRQ defines
#define HAL_LL_INTERRUPT_PRIORITY_LOW 0x0018
#define HAL_LL_INTERRUPT_PRIORITY_HIGH 0x0008
#define HAL_LL_INTERRUPT_PRIORITY HAL_LL_INTERRUPT_PRIORITY_HIGH
#define HAL_LL_IRQ_TX1IE_BIT 28
#define HAL_LL_IRQ_RC1IE_BIT 29
#define HAL_LL_IRQ_TX2IE_BIT 30
#define HAL_LL_IRQ_RC2IE_BIT 31
#define HAL_LL_IRQ_TX3IE_BIT 32
#define HAL_LL_IRQ_RC3IE_BIT 33
#define HAL_LL_IRQ_TX4IE_BIT 34
#define HAL_LL_IRQ_RC4IE_BIT 35
#define HAL_LL_IRQ_TX5IE_BIT 36
#define HAL_LL_IRQ_RC5IE_BIT 37
// EOF IRQ defines

#endif // _MCU_DEFINITIONS_H_
// ------------------------------------------------------------------------- END
