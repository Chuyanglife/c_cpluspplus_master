#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    float y;
    double z;

    printf("Enter the number of elements in the matrix.\n");
    scanf("%d", &x);
    scanf("%f", &y);
    scanf("%f", &z);

    printf("Print the number of elements in the matrix.\n");
    printf("%d\n", x);
    printf("%f\n", y);
    printf("%g\n", z);

    return 0;
}