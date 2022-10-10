#include <stdio.h>
#define stop '#'

int main()
{
    char ch;
    int n=0;
    
    printf("Enter some characters('#' to quit):\n");
    while((ch=getchar())!=stop)
    {
    switch (ch)
    {
    case '.':
        n++;
        putchar('!');
        break;
    
    case '!':
        n++;
        printf("!!");
        break;


    default:
        putchar(ch);
    }
    }
    printf("\nTotal replace %d times.\n", n);
    printf("('.'->'!') or ('!'->'!!').\n");

    return 0;
}