#include <stdio.h>
#include "shmem.h"

int main(int argc, char* argv[])
{
    printf("Reader application started.\n");

    allocate_memory();

    set_time_between_reads();

    for(;;)
    {
        read_from_memory();
    }

    return 0;
}

