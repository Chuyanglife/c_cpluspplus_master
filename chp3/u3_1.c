#include <stdio.h>
#include <stdlib.h>
#include <float.h>
#include <limits.h>



int main()
{
    int big_int=2147483647;
    float big_float=3.4e38;
    float small_float=10.0/3;
    printf("The big int data is %d.\n",big_int);
    printf("The big float data is %f.\n",big_float*10);
    printf("The big bit data is %f.\n",small_float);
    printf("The max int data is %f.\n",FLT_MAX);
    printf("The max int data is %1d.\n",INT_MAX);

    //system("pause");
    return 0;
}


