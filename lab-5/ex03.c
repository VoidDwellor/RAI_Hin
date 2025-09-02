#include<stdio.h>

int main(){
    
    int m[5], n=5, i, max, total;

    for(i=0; i<n; i++){
    printf("Enter the marks of the student %d : ", i+1);
    scanf("%d", &m[i]);
    
    total += m[i];

        if (i == 0 || max < m[i])
        {
            max = m[i];
        }
}
    
printf("Total mark : %d", total);
printf("Highest mark : %d", max);
printf("\n");

    return 0;
}