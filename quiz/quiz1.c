#include<stdio.h>
#include<math.h>

const float pi = 3.14159265359;

int main(){

    float r, l, q, ans;

    printf("Enter resistor's radius (m) : ");
    scanf("%f", &r);

    printf("Enter resistor's length (m) : ");
    scanf("%f", &l);

    printf("Enter resistor's resistivity (OHM) : ");
    scanf("%f", &q);

    ans = q * l / (pi * r * r);
    printf("The value of this resistor = %.2f OHM\n", ans);

    return 0;
}