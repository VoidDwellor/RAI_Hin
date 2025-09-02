#include<stdio.h>

int main(){
    int n[10], i, odd=0, even=0;
    for(i=0; i<10; i++)
    {
        printf("Enter value %d : ", i+1);
        scanf("%d", &n[i]);
    }

    for(i=0; i<10; i++){
        if(n[i] %2 == 0)
            even++;
    
        else
            odd++;
    }

    printf("Even numbers : %d\n", even);
    printf("Odd numbers : %d\n", odd);
    return 0;
}