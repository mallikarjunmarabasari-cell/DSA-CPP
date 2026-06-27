#include <stdio.h>

int main(void) {
    int n, i = 2;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("%d is non-prime\n", n);
        return 0;
    }

    while (i <= (n - 1)) {
        if (n % i == 0) {
            printf("%d is non-prime\n", n);
            return 0;
        }
        i = i + 1;
    }

    printf("%d is Prime\n", n);
    return 0;
}