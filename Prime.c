#include <stdio.h>

int main() {
    int n, i;
    int is_prime = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n == 0 || n == 1)
        is_prime = 0;
    else {
        for (i = 2; i * i <= n; ++i) {
            if (n % i == 0) {
                is_prime = 0;
                break;
            }
        }
    }

    if (is_prime == 1)
        printf("%d is a prime number.", n);
    else
        printf("%d is not a prime number.", n);

    return 0;
}
