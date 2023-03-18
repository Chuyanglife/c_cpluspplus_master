#include <stdio.h>
#include <stdlib.h>

void br();
void ic();

int main()
{   
    
    br();
    printf(", ");
    ic();
    printf("\n");
    ic();
    printf(",\n");
    br();

    //system("pause");
    return 0;
}

void br()
{
    printf("Brazil, Russia");
    return;
}

void ic()
{
    printf("India, China");
    return;
}