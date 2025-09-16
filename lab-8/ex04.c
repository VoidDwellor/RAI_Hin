#include <stdio.h>
#include <string.h>
#include <ctype.h>

int cnt_vwl(char inp[]){
    int i, cnt = 0;
    for(i = 0; i < strlen(inp); i++){
        inp[i] = tolower(inp[i]);
        if(inp[i] == 'a' || inp[i] == 'e' || inp[i] == 'i' || inp[i] == 'o' || inp[i] == 'u'){
            cnt++;
        }
    }
    return cnt;
}

int main(){
    char inp[99];
    printf("Input: ");
    scanf("%[^\n]", inp);
    printf("Output: Number of vowels: %d\n", cnt_vwl(inp));
}