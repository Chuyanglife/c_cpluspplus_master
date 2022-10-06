#include <stdio.h>
#include <stdlib.h>
#define PINT_PER_CUP 2
#define CUP_PER_OUNCE 8
#define OUNCE_PER_BIGSPOON 2
#define BIGSPOON_PER_TEASPOON 3


int main()
{
    double pint,ounce,cup,bigspoon,teaspoon;
    printf("Please enter a number of cups: ");
    scanf("%lf", &cup);
    pint = cup/PINT_PER_CUP;
    ounce=cup*CUP_PER_OUNCE;
    bigspoon=ounce*OUNCE_PER_BIGSPOON;
    teaspoon=bigspoon*BIGSPOON_PER_TEASPOON;

    printf("Here are some ways to show %g cups\n",cup);
    printf("Pint: %g\n",pint);
    printf("ounce: %g\n",ounce);
    printf("bigspoon: %g\n",bigspoon);
    printf("teaspoon: %g\n",teaspoon);

    system("pause");
    return 0;
}