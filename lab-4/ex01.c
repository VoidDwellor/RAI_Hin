#include<stdio.h>

int main(){
    int n, i;
    float s=0;
    for(i = 0; i < 10; i++){
        printf("%d, Enter number: ", i + 1);
        scanf("%d", &n);
        s += n;
    }

    printf("Total sum is %.2f\n", s);
    printf("Average is %.2f\n", (s * 1)/10);

    return 0;
}