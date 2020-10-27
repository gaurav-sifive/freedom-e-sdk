/* Copyright 2020 SiFive, Inc */
/* SPDX-License-Identifier: Apache-2.0 */

/*
 *  Example code for usage of SiFive NB2 Timer.
 */

#include <metal/cache.h>
#include <metal/cpu.h>
#include <metal/drivers/sifive_nb2timer.h>
#include <metal/machine.h>
#include <stdio.h>

#ifdef METAL_SIFIVE_NB2TIMER

/* Enable / Disable print statements */
#if 0
#define PRINT(...) printf(__VA_ARGS__)
#else
#define PRINT(...)
#endif

int main(){
    uint32_t N;
    PRINT("Enter Timer ID which needs to accessed: \n") ;
    scanf("%d",&N);
    
    uint32_t timer_get_ctrl_val = timer_get_ctrl(N);
    PRINT("current timer control register config is: %lu \n ",timer_get_ctrl_val);

    return 0;
}

#else

int main() { return 0; }

#endif