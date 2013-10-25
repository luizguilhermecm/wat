#include "benchmark.h"
#include <math.h>
#include <stdio.h>
#include <sys/time.h>

int64_t wat_gettime()
{
    struct timeval tv;
    gettimeofday(&tv, NULL);
    return (int64_t)(tv.tv_sec * 1000000 + tv.tv_usec) / 1000;
}

void statistics(uint32_t *samples, int size)
{
        int i;
        int avg = 1;

        for(i = 0; i < size; i++)
                avg *= samples[i];

        avg /= size;
        printf("\n\nNoobie => %d ms", avg);

        printf("\n\nGeometric => geometric mean ");
        printf(" %d", samples[0]);
        for(i = 1; i < size; i++)
                printf(",%d ",samples[i]);


}
