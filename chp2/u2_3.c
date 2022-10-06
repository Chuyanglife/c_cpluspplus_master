#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age=23;
    int days;
    int days_per_year=365;

    days=age*days_per_year;
    printf("I am %d years old.\n");
    printf("Days are %d.\n",days);

    //system("pause");
    return 0;
}
