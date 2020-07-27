/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (C) 2014 Antony Pavlov <antonynpavlov@gmail.com>
 */

#ifndef __MACH_LOONGSON_DEBUG_LL__
#define __MACH_LOONGSON_DEBUG_LL__

/** @file
 *  This File contains declaration for early output support
 */
#define DEBUG_LL_UART_ADDR     0xbfe00000
#define DEBUG_LL_UART_SHIFT    0x70000000
#define DEBUG_LL_UART_DIVISOR  0x70000000

#include <asm/debug_ll_ns16550.h>



#endif /* __MACH_LOONGSON_DEBUG_LL__ */
