#include <stdio.h>

int main(){
    int array[] = { 3, 1, 2, 4, 5, 6};
    int i = 0;
    int max = -999;
    int* ptr = &array[0];

    while (i < 6)
    {
        if (*ptr>max)
        {
            max = *ptr;
        }
        i++;
        ptr++;
    }
    
    printf("Max value: %d\n", max);
}