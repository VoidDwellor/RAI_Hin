#include <stdio.h>

struct std
    {
        char name[99];
        char surn[99];
        int a;
        float scr;
    }std[3];

int main(){

    int i;
    for (i=0; i<3; i++)
    {
        printf("Student %d's name: ", i+1);
        scanf("%s", std[i].name);
        printf("Student %d's surname: ", i+1);
        scanf("%s", std[i].surn);
        printf("Student %d's age: ", i+1);
        scanf("%d", &std[i].a);
        printf("Student %d's score: ", i+1);
        scanf("%f", &std[i].scr);
        printf("\n");
    }

    for(i=0; i<3; i++)
    {
        printf("Student %d's name is %s %s, age %d, score %.2f.\n", i+1, std[i].name, std[i].surn, std[i].a, std[i].scr);
    }
return 0;

}