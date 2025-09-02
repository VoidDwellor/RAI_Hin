#include<stdio.h>

int main(){
    int og[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}, i, n=9;
    
    for(i=n-1; i>=0; i--){
        printf("%d", og[i]);
        if(i<9) {
            printf(", ");
        }
    }

    return 0;
}