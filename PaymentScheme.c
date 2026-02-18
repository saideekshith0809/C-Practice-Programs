#include <stdio.h>

int main() {
    int X;
    scanf("%d", &X);

    int sch1 = 100 + 4 * X;
    int sch2 = 300;

    if (sch1 < sch2) {
        printf("%d", sch1);
    } else {
        printf("%d", sch2);
    }

    return 0;
}
