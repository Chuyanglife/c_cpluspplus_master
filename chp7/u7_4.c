#include <stdio.h>
#define stop '#'

int main()
{
    int ch;
    int n=0;

    printf("Enter some characters('#' to quit):\n");
    while((ch=getchar())!='#')
    {
        if(ch=='.')
        {
            putchar('!');
            n++;
        }
        else if(ch=='!')
        {
            printf("!!");
            n++;
        }
        else
        {
            putchar(ch);
        }
        
    }
    printf("\nTotal replace %d times.\n", n);
    printf("('.'->'!') or ('!'->'!!').\n");

    return 0;
}