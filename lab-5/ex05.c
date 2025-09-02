#include<stdio.h>

int main(){
    
    int m[8], n=8, i, max, min;

    for(i=0; i<n; i++){
    printf("Enter the marks of the student %d : ", i+1);
    scanf("%d", &m[i]);

        if (i == 0 || max > m[i])
        {
            min = m[i];
        }
        else if (i == 0 || min < m[i])
        {
            max = m[i];
        }
}
    
printf("Highest mark : %d", max);
printf("Smallest mark : %d", min);
printf("\n");

    return 0;
}