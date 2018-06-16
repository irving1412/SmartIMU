/**
 *      __            ____
 *     / /__ _  __   / __/                      __  
 *    / //_/(_)/ /_ / /  ___   ____ ___  __ __ / /_ 
 *   / ,<  / // __/_\ \ / _ \ / __// _ \/ // // __/ 
 *  /_/|_|/_/ \__//___// .__//_/   \___/\_,_/ \__/  
 *                    /_/   github.com/KitSprout    
 * 
 *  @file    boardConfig.h
 *  @author  KitSprout
 *  @date    16-Jun-2018
 *  @brief   
 * 
 */

/* Define to prevent recursive inclusion ---------------------------------------------------*/
#ifndef __BOARDCONFIG_H
#define __BOARDCONFIG_H

#ifdef __cplusplus
  extern "C" {
#endif

/* Includes --------------------------------------------------------------------------------*/
/* Define ----------------------------------------------------------------------------------*/

#define KS_HW_BOARD_NAME                "SmartIMU"
#define KS_HW_MCU_NAME                  "NRF52810"

#define KS_HW_USE_CLOCK_SOUCE_INT       (0U)
#define KS_HW_USE_CLOCK_SOUCE_EXT       (1U)
#define KS_HW_HCLOCK_SOUCE              KS_HW_USE_CLOCK_SOUCE_EXT
#define KS_HW_LCLOCK_SOUCE              KS_HW_USE_CLOCK_SOUCE_INT

#define KS_SYSCLK                       SystemCoreClock


/* -------- LED and KEY */

#define LED_PIN                         12
#define LED_PORT                        NRF_P0
#define LED_Set()                       __GPIO_SET(LED_PORT, LED_PIN)
#define LED_Reset()                     __GPIO_RST(LED_PORT, LED_PIN)
#define LED_Toggle()                    __GPIO_TOG(LED_PORT, LED_PIN)
#define LED_On()                        LED_Set()
#define LED_Off()                       LED_Reset()

#define KEY_PIN                         9
#define KEY_PORT                        NRF_P0
#define KEY_Read()                      (__GPIO_READ(KEY_PORT, KEY_PIN) == RESET)

#define KEY_GPIOTEx                     NRF_GPIOTE
#define KEY_GPIOTEx_LINE                0
#define KEY_GPIOTEx_IRQn                GPIOTE_IRQn
#define KEY_GPIOTEx_IRQn_PRIORITY       1
#define KEY_GPIOTEx_INT_LINE            NRF_GPIOTE_INT_IN0_MASK
#define KEY_GPIOTEx_POLARITY            NRF_GPIOTE_POLARITY_HITOLO
#define KEY_GPIOTEx_MODE                GPIOTE_CONFIG_MODE_Event
#define KEY_GPIOTEx_OUTINIT             NRF_GPIOTE_INITIAL_VALUE_LOW


/* Macro -----------------------------------------------------------------------------------*/
/* Typedef ---------------------------------------------------------------------------------*/
/* Extern ----------------------------------------------------------------------------------*/
/* Functions -------------------------------------------------------------------------------*/


#ifdef __cplusplus
}
#endif

#endif

/*************************************** END OF FILE ****************************************/
