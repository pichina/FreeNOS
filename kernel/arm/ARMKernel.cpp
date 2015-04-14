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

#include "ARMKernel.h"

ARMKernel::ARMKernel(Memory *memory, ProcessManager *procs)
    : Kernel(memory, procs)
{
}

void ARMKernel::hookInterrupt(int vec, InterruptHandler h, ulong p)
{
}

void ARMKernel::enableIRQ(uint vector, bool enabled)
{
}

Process * ARMKernel::createProcess(Address entry)
{
    return (Process *) NULL;
}
