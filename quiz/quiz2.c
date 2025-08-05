#include<stdio.h>

int main(){
    int n1, n2, ope, ans;
    printf("Enter number 1 : ");
    scanf("%d", &n1);
    printf("Enter number 2 : ");
    scanf("%d", &n2);

    printf("Calculator menu : \n1. (+) \n2. (-) \n3. (x) \n4. (÷)\n");
    printf("Choose menu : ");
    scanf("%d", &ope);

    if (ope == 1){
        ans = n1 + n2;
        printf("Answer : Number 1 + Number 2 = %d\n", ans);
    }
    else if (ope == 2){
        ans = n1 - n2;
        printf("Answer : Number 1 - Number 2 = %d\n", ans);
    }
    else if (ope == 3){
        ans = n1 * n2;
        printf("Answer : Number 1 x Number 2 = %d\n", ans);
    }else if (ope == 4){
        ans = n1 / n2;
        printf("Answer : Number 1 ÷ Number 2 = %d\n", ans);
    }

    return 0;
}