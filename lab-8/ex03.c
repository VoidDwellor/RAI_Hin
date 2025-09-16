#include <stdio.h>
#include <math.h>

int sum(int x, int y){
    int sqrx = x * x;
    int sqry = y * y;
    return sqrx + sqry;
}

int main(){
    int x, y;

    printf("Enter the two integers: ");
    scanf("%d %d", &x, &y);

    int sumsqr = sum(x, y);
    printf("Sum of squares of %d and %d is %d.\n", x, y, sumsqr);

    return 0;
}