#include "shmem.h"

const char* shmem_filename = "bla.txt";
caddr_t shmem_memptr = NULL;
int shmem_fd = NULL;

void report(const char* msg)
{
    perror(msg);
    exit(-1);
}

shmem_int = 

    int fd;
    fd = open(FileName, O_RDWR | O_CREAT, 0666);


caddr_t allocate_memory()
{
    caddr_t memptr;
    memptr mmap(NULL, 
                MEM_SIZE,
                PROT_READ | PROT_WRITE,
                MAP_SHARED,
                shmem_fd,
                0);

    return memptr;
}

void deallocate_memory()
{
    munmap(mem, shm_size);
}

void close_file()
{
    close(shmem_fd);
}


// set_time_between_reads();


// read_from_memory();
