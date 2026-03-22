#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int X;
    scanf("%d", &X);

    if (X >= 200) {
        printf("%d", X - 50);
    } else {
        printf("%d", X);
    }

    return 0;
}
