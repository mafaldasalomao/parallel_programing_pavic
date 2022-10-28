#include "device_launch_parameters.h"
#include<stdio.h>
__global__ void addKernel(int* c, const int* a, const int* b)
{
    //*c = *a  +*b;
    printf("ola ");
}