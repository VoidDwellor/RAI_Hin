#include <stdio.h>

int main()
{
    int a;
    float h;
    char name[20], edq[20];

    printf("Enter - Name : ");
    scanf(" %[^\n]", name);
    printf("Enter - Age : ");
    scanf("%d", &a);
    printf("Enter - Height : ");
    scanf("%f", &h);
    printf("Enter - University name : ");
    scanf("%s", edq);

    printf("Hi! Everyone. This is %c.%c%c%c%c from %s. ",name[5],name[0],name[1],name[2],name[3],edq);
    printf("I am %d years old and my height is %.1f cm tall.\n", a, h);

    return 0;
}