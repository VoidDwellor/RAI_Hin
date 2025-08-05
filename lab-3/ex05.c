#include<stdio.h>
#include<math.h>

const float pi = 3.14159265359; 

int main(){

    float v, r, h;

    printf("Enter cone height (cm): ");
    scanf("%f", &h);
    printf("Enter cone base radius (cm): ");
    scanf("%f", &r);

    v = (pi * r * r * h) / 3;

    if (v > 260) {
        printf("Your cone is perfect for Supun's project.\n");
    } else {
        printf("Your cone is not perfect for Supun's project.\n");
    }

    return 0;

}