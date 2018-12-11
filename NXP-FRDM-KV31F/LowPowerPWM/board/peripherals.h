/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _PERIPHERALS_H_
#define _PERIPHERALS_H_

/***********************************************************************************************************************
 * Included files
 **********************************************************************************************************************/
#include "fsl_common.h"
#include "fsl_gpio.h"
#include "fsl_port.h"
#include "fsl_uart.h"
#include "fsl_clock.h"
#include "fsl_i2c.h"
#include "fsl_adc16.h"

#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus */

/***********************************************************************************************************************
 * Definitions
 **********************************************************************************************************************/
/* Definitions for BOARD_InitBUTTONsPeripheral functional group */
/* Alias for GPIOE peripheral */
#define BOARD_SW3_GPIO GPIOE
/* Alias for GPIOA peripheral */
#define BOARD_SW2_GPIO GPIOA

/* Definitions for BOARD_InitLEDsPeripheral functional group */
/* Alias for GPIOE peripheral */
#define BOARD_LEDRGB_BLUE_GPIO GPIOE
/* Alias for GPIOD peripheral */
#define BOARD_LEDRGB_RED_GREEN_GPIO GPIOD

/* Definitions for BOARD_InitDEBUG_UARTPeripheral functional group */
/* Definition of peripheral ID */
#define BOARD_DEBUG_UART_PERIPHERAL UART0
/* Definition of the clock source frequency */
#define BOARD_DEBUG_UART_CLOCK_SOURCE CLOCK_GetFreq(UART0_CLK_SRC)

/* Definitions for BOARD_InitACCELPeripheral functional group */
/* BOARD_InitACCELPeripheral defines for I2C0 */
/* Definition of peripheral ID */
#define BOARD_ACCEL_I2C_PERIPHERAL I2C0
/* Definition of the clock source */
#define BOARD_ACCEL_I2C_CLOCK_SOURCE I2C0_CLK_SRC
/* Definition of the clock source frequency */
#define BOARD_ACCEL_I2C_CLK_FREQ CLOCK_GetFreq(BOARD_ACCEL_I2C_CLOCK_SOURCE)
/* Alias for GPIOC peripheral */
#define BOARD_ACCEL_INT2_GPIO GPIOC
/* Alias for GPIOD peripheral */
#define BOARD_ACCEL_INT1_GPIO GPIOD

/* Definitions for BOARD_InitTHERPeripheral functional group */
/* Alias for ADC1 peripheral */
#define BOARD_THERMOMETER_PERIPHERAL ADC1
/* THERMOMETER interrupt vector ID (number). */
#define BOARD_THERMOMETER_IRQN ADC1_IRQn
/* THERMOMETER interrupt handler identifier. */
#define BOARD_THERMOMETER_IRQHANDLER ADC1_IRQHandler

/***********************************************************************************************************************
 * Global variables
 **********************************************************************************************************************/
extern const uart_config_t BOARD_DEBUG_UART_config;
extern const i2c_master_config_t BOARD_ACCEL_I2C_config;
extern adc16_channel_config_t BOARD_THERMOMETER_channelsConfig[1];
extern const adc16_config_t BOARD_THERMOMETER_config;
extern const adc16_channel_mux_mode_t BOARD_THERMOMETER_muxMode;
extern const adc16_hardware_average_mode_t BOARD_THERMOMETER_hardwareAverageMode;

/***********************************************************************************************************************
 * Initialization functions
 **********************************************************************************************************************/
void BOARD_InitPeripherals(void);
void BOARD_InitBUTTONsPeripheral(void);
void BOARD_InitLEDsPeripheral(void);
void BOARD_InitDEBUG_UARTPeripheral(void);
void BOARD_InitACCELPeripheral(void);
void BOARD_InitTHERPeripheral(void);

/***********************************************************************************************************************
 * BOARD_InitBootPeripherals function
 **********************************************************************************************************************/
void BOARD_InitBootPeripherals(void);

#if defined(__cplusplus)
}
#endif

#endif /* _PERIPHERALS_H_ */
