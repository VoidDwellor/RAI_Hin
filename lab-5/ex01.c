#include<stdio.h>

int main(){
    int i, num[10];
    int length = sizeof(num) / sizeof(num[0]);

    for (i=0; i < 10; i++){
        printf("\nEnter %d value : ", i+1);
        scanf("%d", &num[i]);
    }

    printf("Value in the array: ");
    for (int i = 0; i < length; i++) {
        printf("%d", num[i]);
        if(i<9) {
            printf(", ");
        }
    }

    printf("\n");
    
    return 0;
}