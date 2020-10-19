#include <metal/drivers/mydriver_mem0.h>
#include <stdio.h>
#include <metal/machine.h>
#include <metal/machine/platform.h>

int main(){

    printf("-------------/ A dummy program for a dummy driver /-------------\n\n");
    uint32_t data = 0x12345678;

    my_mem_driver_init();
    my_mem_driver_write(&data);
    my_mem_driver_read(&data);
    return 0;
}