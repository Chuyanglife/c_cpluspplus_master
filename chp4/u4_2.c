#include <stdio.h>
#include <string.h>

int main(void)
{
    char fname[20];
    char lname[20];
    int len=0;
    int len2=0;
    int total_len;

    printf("Enter fname: ");
    scanf("%19s", &fname);
    len = strlen(fname);
    len2 = strlen(lname);
    total_len = len+len2;
    printf("Enter lname: ");
    scanf("%19s", &lname);
    printf("a.\"%s %s\"\n", fname,lname);
    printf("b.\"%20s %s\"\n", fname,lname);
    printf("c.\"%s %-20s\"\n", fname,lname);
    printf("d.%*s %s\n", total_len+3, fname,lname);
    
    return 0;
}