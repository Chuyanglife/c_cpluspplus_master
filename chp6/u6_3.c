#include <stdio.h>
#define N 6

int main()
{
    for (int i=0;i<=N;i++)
    {
        for (int j=0;j<i;j++)
        {
            printf("%c",'F'-j);
        }
        printf("\n");
    }


    return 0;
}