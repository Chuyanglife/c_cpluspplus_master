#include <stdio.h>
#include <stdlib.h>
#define MASS_PER_MOLE 3.0e-23
#define MASS_PER_QUART 950


int main()
{
    double quart,molecules;

    printf("Please enter a quart for water: ");
    scanf("%lf", &quart);
    molecules = quart*MASS_PER_QUART/MASS_PER_MOLE;
    printf("%g quart water includes %e water molecules.\n", quart, molecules);



    system("pause");
    return 0;
}