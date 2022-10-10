#include <stdio.h>
#define stop '#'

int main()
{
    char ch;
    int n=0;
    int flag=0;

    printf("Enter some characters('#' to quit):\n");
    while((ch=getchar())!=stop)
    {
        switch(ch)
        {
            case 'e':
                flag=1;
                break;
            
            case 'i':
                if(1==flag)
                {
                    n++;
                }
                flag=0;
                break;
            
            default:
            {
                flag=0;
            }
        }
    }
    printf("\nTotally exist %d times \'ei\'.\n",n);

    return 0;
}