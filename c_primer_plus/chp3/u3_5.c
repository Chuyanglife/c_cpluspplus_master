#include <stdio.h>
#include <stdlib.h>
#define SEC_PER_YEAR 3.156e7


int main()
{
    double age,seconds;
    printf("Please enter your age: ");
    scanf("%1f",&age);
    seconds = age * SEC_PER_YEAR;
    printf("%g years old includes %g seconds\n",age,seconds);

    


    system("pause");
    return 0;
}