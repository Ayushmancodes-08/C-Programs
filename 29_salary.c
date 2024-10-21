#include <stdio.h>
int main()
{
    float base, da, hra, ta, gross;
    printf("Enter your Base salary\n");
    scanf("%f", &base);
    printf("Enter your Daily Allowance\n");
    scanf("%f", &da);
    printf("Enter ouse Rental Allowance\n");
    scanf("%f", &hra);
    printf("Enter your Travelling Allowance\n");
    scanf("%f", &ta);
    gross = base + da + hra + ta;
    printf("............Salary Details............\n");
    printf("\tBase Salary =%f\n", base);
    printf("\tDaily Allowance =%f\n", da);
    printf("\tHouse Rental Allowance =%f\n", hra);
    printf("\tTravelling Allowance =%f\n", ta);
    printf("\tTotal Salary of Employee =%f\n", gross);
    return 0;
} 