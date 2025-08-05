#include<stdio.h>

int main(){
    int n, i;
    printf("Enter number : ");
    scanf("%d", &n);
    printf("\n\nMultiplication table for %d : \n", n);
    for(i=1; i<=12; i++){
        printf("%d x %d = %d\n", n, i, n*i);
    }

    return 0;
}