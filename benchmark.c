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

int statistics(uint32_t *samples, int size, char *name)
{
        int i;
        int am = 0;
        printf("\nSamples of %s => ", name);
        printf(" %d", samples[0]);
        am += samples[0];
        for(i = 1; i < size; i++){
                printf(", %d",samples[i]);
                am += samples[i];
        }
        printf("\tAM => %d", am/size);
        return am;
}
