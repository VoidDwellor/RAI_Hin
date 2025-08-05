#include<stdio.h>

int main() {

    int n;

    printf("Enter your number : ");
    scanf("%d", &n);

    switch (n < 100 && n > 0)
    {
    case 1:
        switch (n %2 == 0)
        {
        case 1:
            printf("%d is an even number.\n", n);
            break;
        
        default:
            printf("%d is an odd number.\n", n);
            break;
        }
        break;
    default:
        printf("%d is not in range.\n", n);
        break;
    }
return 0;
}