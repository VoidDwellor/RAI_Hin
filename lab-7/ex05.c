#include <stdio.h>

int main(){
    int array[] = { 3, 1, 2, 4, 5, 6};
    int i = 0;
    int* ptr = &array[0];
    int sum = 0;

    while (i < 6)
    {
        sum = *ptr + sum;
        i++;
        ptr++;
    }
    
    printf("The sum of array is: %d\n", sum);
    return 0;
}