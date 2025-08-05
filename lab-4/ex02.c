#include<stdio.h>

int main(){
    int n, i=10, s=0;
    while(i--){
        printf("%d, Enter number : ", 10-i);
        scanf("%d", &n);
        s += n;
    }

    printf("Total sum is %d\n", s);

    return 0;
}