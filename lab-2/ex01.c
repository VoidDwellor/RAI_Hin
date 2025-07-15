#include <stdio.h>

int main()
{
    int i;
    float f;
    char c[1];
    printf("Enter - Integer : ");
    scanf("%d", &i);
    printf("You entered %d\n", i);

    printf("Enter - Float : ");
    scanf("%f", &f);
    printf("You entered %.2f\n", f);

    printf("Enter - Character : ");
    scanf("%s", c);
    printf("You entered %s\n ", c);

return 0;
}