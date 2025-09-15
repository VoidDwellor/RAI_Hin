#include <stdio.h>

int main(){
    struct vector{
        char name;
        float x, y;
    } v[2];

    v[0].name = 'u', v[1].name = 'v';

    int i;
    for(i=0; i<2; i++){
        printf("%c_x: ", v[i].name);
        scanf("%f", &v[i].x);
        printf("%c_y: ", v[i].name);
        scanf("%f", &v[i].y);
    }

    printf("Resultant vector is equivalence to %.1fi + %.1fj\n", v[0].x + v[1].x, v[0].y + v[1].y);

return 0;
}
