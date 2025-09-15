#include <stdio.h>

int main(){
    int arr[5];
    int* ptr = arr;
    int i=0, j, temp;

    printf("Please enter 5 integers.\n");

    do {
        printf("Enter %d number: ", i+1);
        scanf("%d", ptr + i);
        i++;
    } while (i < 5);

    for (i = 4; i > 0; i--){
        for (j = 0; j < i; j++){
            if (*(ptr + j) > *(ptr + j + 1)){
                temp = *(ptr + j);
                *(ptr + j) = *(ptr + j + 1);
                *(ptr + j + 1) = temp;
            }
        }
    }

    printf("Sorted: ");
    for(i = 0; i < 5; i++){
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    return 0;
}
