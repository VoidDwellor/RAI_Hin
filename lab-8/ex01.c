#include <stdio.h>
#include <math.h>
float pi = 3.14159265359;

float  CircleCirc(float r){
    return 2 * pi * r;
}

float CircleArea(float r){
    return pi * r * r;
}

int main(){
    
    int i = 0;
    float s[3];

    printf("Please input radius\n");

    do
    {
    printf("Input radius %d : ", i+1);
    scanf("%f", &s[i]);
    i++;
    } while (i<1);

    float circ = CircleCirc(s[0]);
    float area = CircleArea(s[0]);
    printf("Circumference %.2f\n", circ);
    printf("Area %.2f\n", area);

    return 0;
}