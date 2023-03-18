#include <stdio.h>
#define N 6

int main()
{
    char ch = 'A';
    for (int i=0;i<=N;i++)
    {
        for (int j=0;j<i;j++)
        {
            printf("%c",ch++);
        }
        printf("\n");
    }


    return 0;
}