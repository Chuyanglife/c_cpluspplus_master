#include "stdio.h"
int main()
{
    for (size_t i = 0; i < 10; i++) //控制打印行数(一行为一个循环)
    {
         for (size_t j = 1; j <= i; j++) //控制打印列数
        {
            printf("  ");//两个空格时是直角三角形，一个空格是等腰三角形
        }
        for (size_t k = 10; k>i; k--) //控制打印列数
        {
            printf("?");
        }
        printf("\n"); //每一次列循环后另起行
    }
} 
