#include <stdio.h>
#include <stdlib.h>
#define CM_PER_INCH 2.54

int main()
{
    double inch,cm;

    printf("Please enter your height(inch): ");
    scanf("%1f", &inch);
    cm=inch*CM_PER_INCH;
    printf("Your height is %g cm.\n", cm);
        


    system("pause");
    return 0;
}