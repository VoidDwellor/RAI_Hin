#include <stdio.h>

int main() {
	int x = 0;
    int y = 5;
    int* ptrx = &x;
    int* ptry = &y;
    int temp = *ptrx;

    printf("Before reverse: x = %d, y = %d\n", x, y);

    *ptrx = *ptry;
    *ptry = temp;

    printf("After reverse: x = %d, y = %d\n", x, y);

    return 0;
}