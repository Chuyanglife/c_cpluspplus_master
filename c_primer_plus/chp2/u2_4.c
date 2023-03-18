#include <stdio.h>
#include <stdlib.h>

void jelly();
void deny();

int main()
{   
    
    jelly();
    jelly();
    jelly();
    deny();

    //system("pause");
    return 0;
}

void jelly()
{
    printf("For he's a jolly good fellow!\n");
    return;
}

void deny()
{
    printf("Which nobody can deny!\n");
    return;
}