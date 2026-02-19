#include <stdio.h>

int main() {
    int n, original, remainder, result = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (original != 0) {
        remainder = original % 10;
        result += remainder * remainder * remainder;
        original /= 10;
    }

    if (result == n)
        printf("Armstrong number\n");
    else
        printf("Not Armstrong number\n");

    return 0;
}
