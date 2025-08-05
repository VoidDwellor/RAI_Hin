#include<stdio.h>

int main(){

    char name[20], grade[20];
    float c, p, s, avg;

    printf("Enter your name name : ");
    scanf("%s", name);
    printf("Enter calculus score : ");
    scanf("%f", &c);
    printf("Enter physics score : ");
    scanf("%f", &p);
    printf("Enter science score : ");
    scanf("%f", &s);

    avg = (c + p + s) / 3;

    if (avg >= 80) {
        grade[20] = 'A';
    } else if (80 > avg && avg >= 70) {
        grade[20] = 'B';
    } else if (70 > avg && avg >= 60) {
        grade[20] = 'C';
    } else if (60 > avg && avg >= 50) {
        grade[20] = 'D';
    } else {
        grade[20] = 'F';
    }

    printf("%s, your average is %.2f. You got %c.\n", name, avg, grade[20]);

    return 0;

}