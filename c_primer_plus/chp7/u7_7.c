#include<stdio.h>
#define base_salary 10.0f
#define extra_hour 1.5f
#define base_tax 0.15f
#define extra_tax 0.2f
#define exceed_tax 0.25f

int main()
{
    float hours=0.0f;
    float salary,tax,taxed_salary;

    printf("Enter your working_hours: ");
    while(scanf("%g", &hours)!=1 || (hours<0))
    {
        while(getchar()!='\n')
        {
            continue;
        }
        printf("Please enter a positive number: ");
        
    }

    if(hours<=30)
    {
        salary=hours*base_salary;
        tax=salary*base_tax;
        taxed_salary=salary-tax;
    }
    else if(hours<=40)
    {
        salary=extra_hour*base_salary;
        tax=300*base_tax+(salary-300)*extra_tax;
        taxed_salary=salary-tax;
    }
    else
    {
        salary = (40 + (hours - 40) * extra_hour) * base_salary;
        if (salary <= 450)
        {
            tax = 300 * base_tax + (salary - 300) * extra_tax;
        }
        else
        {
            tax = 300 * base_tax + 150 * extra_tax + (salary - 450) * exceed_tax;
        }
        taxed_salary = salary - tax;
    }
    printf("salary(before tax): $%g\n",salary);
    printf("tax: $%g\n",tax);
    printf("salary(after tax): $%g\n",taxed_salary);

    return 0;
}