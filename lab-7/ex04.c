#include <stdio.h>

int main(){
    int array[] = { 3, 1, 2, 4, 5, 6};
    int i = 0;
    int* ptr = &array[0];

    while (i < 6)
    {
        printf("%d\n", *ptr);
        i++;
        ptr++;
    }
    
    return 0;
}