#include <stdio.h>

void prime(int start, int end) {
    int i, j, isPrime;

    for (i = start; i <= end; i++) {
        isPrime = 1;
        for (j = start; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int start, end;
    printf("Enter the start and end numbers: ");
    scanf("%d %d", &start, &end);

    printf("\nThe prime numbers within the intervals are: ");
    prime(start, end);

    return 0;
}
