#include<stdio.h>
#include

int main(){
    int i, num[10];
    int length = sizeof(num) / sizeof(num[0]);

    for (i=1; i < 11; i++){
        printf("\nEnter %d value : ", i);
        scanf("%d", &num[i+1]);
    }

    printf("Elements of the array: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", num[i]);
    }

    return 0;
}