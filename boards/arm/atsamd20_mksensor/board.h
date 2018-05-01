/*
 * Copyright (c) 2018 Sean Nyekjaer
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef __INC_BOARD_H
#define __INC_BOARD_H

#include <soc.h>

#define CONFIG_UART_SAM0_SERCOM3_PADS \
	(SERCOM_USART_CTRLA_RXPO_PAD1 | SERCOM_USART_CTRLA_TXPO_PAD2)

#endif /* __INC_BOARD_H */
