#include <stdio.h>

struct s {
    int n1;
    int n2;
    int sum;
};

int main() {
    int i = 0;
    struct s s;
    struct s *ptr = &s;

    do {
        printf("Enter %d number: ", i+1);
        scanf("%d", ((int*)ptr) + i);
        i++;
    } while (i < 2);

    ptr->sum = ptr->n1 + ptr->n2;

    printf("Sum of the numbers : %d\n", ptr->sum);

    return 0;
}
