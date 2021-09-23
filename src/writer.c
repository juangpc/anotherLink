
#include <stdio.h>
#include "shmem.h"



int main(int argc, char* argv[])
{
    printf("Writer application started.\n");

    allocate_memory();

    set_time_between_writes();

    for (;;)
    {
        write_to_memory();
    }

    return 0;
}
