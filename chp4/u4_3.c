#include <stdio.h>
#include <string.h>

int main(void)
{
    for (int i = 0; i < 100; i++)
    {
        printf("Hello world\t");
        if(i>25){
            printf("Hello pukidad\t");
        }
        else if(i>50){
            printf("Hello pukimom\t");
        }
        else{
            printf("Hello pukichicken\t");
        }
    }
    
    return 0;
}
