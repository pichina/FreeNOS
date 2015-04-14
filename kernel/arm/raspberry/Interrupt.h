/*
 * Copyright (C) 2015 Niek Linnenbank
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __ARM_INTERRUPT_H
#define __ARM_INTERRUPT_H

#include <Types.h>

#define irq_enable()

#define irq_disable()

#define irq_restore(saved)

/** 
 * Function which is called when the CPU is interrupted. 
 * @param state State of the CPU on the moment the interrupt occurred. 
 * @param param Optional parameter for the handler. 
 */
typedef void InterruptHandler(void *state, ulong param);

#endif /* __ARM_INTERRUPT_H */
