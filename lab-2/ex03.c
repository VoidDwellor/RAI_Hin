#include <stdio.h>

int main()
{
    int a;
    float h, w;
    char name[20], gender[20], edq[20];

    printf("Enter - Name : ");
    scanf("%s", name);
    printf("Enter - Age : ");
    scanf("%d", &a);
    printf("Enter - Height : ");
    scanf("%f", &h);
    printf("Enter - Weight : ");
    scanf("%f", &w);
    printf("Enter - Gender (M/F) : ");
    scanf("%s", gender);
    printf("Enter - Education quality : ");
    scanf("%s", edq);

    printf("%-6s %-6s %-6s %-6i  %-6s %-6s \n", "Name :", name, "Age :", a, "Gender :", gender);
    printf("%-6s %-6f %-6s %-6f \n", "Height :", h, "Weight", w);
    printf("%-6s %-6s \n", "Education :", edq);

    return 0;
}