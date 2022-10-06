#include <stdio.h>
#include <stdlib.h>



int main()
{
    float x;
    printf("Enter a floating-point value: ");
    scanf("%f", &x);
    printf("fixed-point notation: %f\n", x);
    printf("exponential notation: %e\n", x);
    printf("p notation: %a\n", x);
    


    system("pause");
    return 0;
}