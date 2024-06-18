#include <stdio.h>

int main() {
    int n, r = 0, m, o;
    printf("Enter an integer: ");
    scanf("%d", &n);
    o = n;

    while (n != 0) 
    {
        m = n % 10;
        r = r * 10 + m;
        n = n/10;
    }

    if (o == r)
        printf("%d is a palindrome.", o);
    else
        printf("%d is not a palindrome.", o);

    return 0;
}
