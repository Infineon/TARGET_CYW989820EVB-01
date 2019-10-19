/*******************************************************************************
* File Name: cycfg_pins.h
*
* Description:
* Pin configuration
* This file was automatically generated and should not be modified.
* Device Configurator: 2.0.0.1483
* Device Support Library (../../../../../../../../Users/mcha/mtw/wiced_btsdk/dev-kit/baselib/20820A1): 2.0.0.2570
*
********************************************************************************
* Copyright 2017-2019 Cypress Semiconductor Corporation
* SPDX-License-Identifier: Apache-2.0
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
********************************************************************************/

#if !defined(CYCFG_PINS_H)
#define CYCFG_PINS_H

#include "cycfg_notices.h"
#include "wiced_platform.h"
#include "cycfg_routing.h"

#if defined(__cplusplus)
extern "C" {
#endif

#define bluetooth_0_ENABLED 1U
#define i2c_0_ENABLED 1U
#define ioss_0_ENABLED 1U
#define WICED_GET_PIN_FOR_LED(idx) (*(platform_led[(idx)].gpio))
#define WICED_GET_PIN_FOR_BUTTON(idx) (*(platform_button[(idx)].gpio))
#define WICED_GET_PIN_FOR_IO(idx) (*(platform_gpio[(idx)].gpio))
#define SPI_CS_ENABLED 1U
#define SPI_CS WICED_P11
#define SPI_MISO_ENABLED 1U
#define SPI_MISO WICED_P17
#define LED2_ENABLED 1U
#define LED2 WICED_P26
#define LED1_ENABLED 1U
#define LED1 WICED_P27
#define I2C_SCL_ENABLED 1U
#define I2C_SCL WICED_P28
#define I2C_SDA_ENABLED 1U
#define I2C_SDA WICED_P29
#define PUART_TX_ENABLED 1U
#define PUART_TX WICED_P32
#define PUART_RX_ENABLED 1U
#define PUART_RX WICED_P37
#define BUTTON1_ENABLED 1U
#define BUTTON1 WICED_P04
#define SPI_MOSI_ENABLED 1U
#define SPI_MOSI WICED_P06
#define SPI_CLK_ENABLED 1U
#define SPI_CLK WICED_P09
#define spi_1_ENABLED 1U
#define uart_1_ENABLED 1U

extern const wiced_platform_gpio_t platform_gpio_pins[];
extern const size_t platform_gpio_pin_count;
extern const wiced_platform_led_config_t platform_led[];
extern const size_t led_count;
extern const wiced_platform_button_config_t platform_button[];
extern const size_t button_count;
extern const wiced_platform_gpio_config_t platform_gpio[];
extern const size_t gpio_count;


#if defined(__cplusplus)
}
#endif


#endif /* CYCFG_PINS_H */
