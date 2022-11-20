/// COMPANY: Continental Automotive
/// COMPONENT: LEDM
/// VERSION: $Revision: 1.1 $
/// @file LEDM_cfg.h
/// @brief Contains configuration data used for manipulating with LED
/// @author Igor Krstic

#ifndef LEDM_CFG_H_
#define LEDM_CFG_H_

#include "stm32f446xx.h"

/// Time delay after toggling pin output in milliseconds
#define LEDM_FIRST_TIME_DELAY_MS 500
/// Time delay after toggling pin output in milliseconds
#define LEDM_SECOND_TIME_DELAY_MS 500
/// Register address used for toggling pin output
#define LEDM_REGISTER_GROUP GPIOA
/// Pin position in register
#define LEDM_REGISTER_PIN (0x0001 << 5u)

#endif /* LEDM_CFG_H_ */
