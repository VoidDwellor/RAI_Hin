#include <stdio.h>

int main() {
	int a = 0;
    int b = 5;
    int* ptra = &a;
    int* ptrb = &b;
    int temp = *ptra;

    printf("Before reverse: a = %d, b = %d\n", a, b);

    *ptra = *ptrb;
    *ptrb = temp;

    printf("After reverse: a = %d, b = %d\n", a, b);

    return 0;
}