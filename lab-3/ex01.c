#include<stdio.h>

int main(){

    int n1, n2;

    printf("Enter number 1 : ");
    scanf("%d", &n1);
    printf("Enter number 2 : ");
    scanf("%d", &n2);

    if (n1 == n2) {
        printf("Match.\n");
    }
    else {
        printf("Does not match, try again.\n");
    }
return 0;
}