//Q.2 Write C Program to find gross salary by adding % of HRA, DA, and TA of user choice.

#include <stdio.h>
main() 
{
    float basic_salary, hra_percent, da_percent, ta_percent;
    float gross_salary;

    printf("Enter basic salary: ");
    scanf("%f", &basic_salary);

    printf("Enter percentage of HRA: ");
    scanf("%f", &hra_percent);

    printf("Enter percentage of DA: ");
    scanf("%f", &da_percent);

    printf("Enter percentage of TA: ");
    scanf("%f", &ta_percent);

    float hra = (hra_percent / 100) * basic_salary;
    float da = (da_percent / 100) * basic_salary;
    float ta = (ta_percent / 100) * basic_salary;

    gross_salary = basic_salary + hra + da + ta;

    printf("Gross Salary = %.2f + %.2f + %.2f + %.2f = %.2f\n", basic_salary, hra, da, ta, gross_salary);

}
