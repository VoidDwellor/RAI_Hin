#include <stdio.h>

int num, inp[99];

int sum_even(){
    int i = 0, sum_even = 0;
    do
    {
        if(inp[i]%2 == 0){
            sum_even += inp[i];
        }
        i++;
    } while (i<num);
    return sum_even;
}

int sum_odd(){
    int i = 0, sum_odd =0 ;
    do
    {
        if(inp[i]%2 == 1){
            sum_odd += inp[i];
        }
        i++;
    } while (i<num);++
    return sum_odd;
}

int main(){
    int i = 0;
    printf("N: ");
    scanf("%d", &num);
    do
    {
        printf("input: ");
        scanf("%d", &inp[i]);
        i++;
    } while (i<num);
    printf("Output: \n Sum of even number: %d\nSum of odd number: %d\n", sum_even(), sum_odd());
}

