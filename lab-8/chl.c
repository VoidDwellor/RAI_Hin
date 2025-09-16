#include <stdio.h>

void result(float grades[], int num){
    if (num <= 0) return;

    float sum = 0;
    float max = grades[0];
    float min = grades[0];

    for (int i = 0; i < num; i++){
        sum += grades[i];
        if(grades[i] > max) max = grades[i];
        if(grades[i] < min) min = grades[i];
    }

    float avg = sum / num;

    printf("\n--- Results ---\n");
    printf("Average grade: %.2f\n", avg);
    printf("Highest grade: %.2f\n", max);
    printf("Lowest grade: %.2f\n", min);
}

void pass(char names[][50], float grades[], int num, float avg){
    printf("\nStudents who passed:\n");
    for(int i = 0; i < num; i++){
        if(grades[i] >= avg){
            printf("%s\n", names[i]);
        }
    }
}

int main(void){
    int num;
    printf("Enter number of students: ");
    if(scanf("%d", &num) != 1 || num <= 0)  
    return 0;

    char names[num][50];
    float grades[num];

    for(int i = 0; i < num; i++){
        printf("\nEnter name of student %d: ", i + 1);
        scanf("%49s", names[i]);
        printf("Enter grade of %s: ", names[i]);
        scanf("%f", &grades[i]);
    }

    printf("\n--- Student List ---\n");
    for(int i = 0; i < num; i++){
        printf("%s: %.2f\n", names[i], grades[i]);
    }

    result(grades, num);
    
    float sum = 0;
    for (int i = 0; i < num; i++){
        sum += grades[i];
    }
    float avg = sum / num;

    pass(names, grades, num, avg);
    
    return 0;
}