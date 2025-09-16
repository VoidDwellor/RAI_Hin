#include <stdio.h>
#include <math.h>

float TrigArea(float a, float b, float c){
    float s = (a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}

int main(){
    int i = 0;
    float s[3];

    printf("Please input 3 side of triangle\n");

    do
    {
    printf("Input side number %d : ", i+1);
    scanf("%f", &s[i]);
    i++;
    } while (i<3);

    float area = TrigArea(s[0], s[1], s[2]);
    printf("Area of triangle is %.2f\n", area);

    return 0;
}