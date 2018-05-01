/*
 * Copyright (c) 2018 Martin Hundebøll <martin@hundeboll.net>
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr.h>
#include <misc/printk.h>

void main(void)
{
	printk("Hello World! %s\n", CONFIG_ARCH);
}
