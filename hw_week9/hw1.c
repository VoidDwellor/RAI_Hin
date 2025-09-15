#include <stdio.h>

int main(){
    int i = 0;
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    int* ptr = &arr[0][0];

    do
    {
        printf("%d, ", *(ptr+i));
        if(i%3==2){
            printf("\n");
        }
        i++;
    } while (i < 9);
    
return 0;
}