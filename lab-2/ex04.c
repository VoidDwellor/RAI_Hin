#include <stdio.h>
#include <math.h>

int main()
{
    float comp, phys, calc, gpa;
    char name[20], stid[20];

    printf("Enter - Name : ");
    scanf("%s", name);
    printf("Enter - Student ID : ");
    scanf("%s", stid);
    printf("Enter - Programming score : ");
    scanf("%f", &comp);
    printf("Enter - Physics score : ");
    scanf("%f", &phys);
    printf("Enter - Calculus score : ");
    scanf("%f", &calc);

    gpa = (comp + phys + calc)/3 ;

    printf("Hi %s(%s)!, Your GPA is %.2f\n", name, stid, gpa);

    return 0;
}