#include<stdio.h>

int main(){
    int n;
    do{
        printf("Enter number : ");
        scanf("%d", &n);

        if(n==0){
            printf("Exiting program... bye\n");
        }
        else if(n%2==0){
            printf("%d is even.\n", n);
        }
        else if(n%2!=0){
            printf("%d is odd.\n", n);
        }
    }
    while(n);

    return 0;
}