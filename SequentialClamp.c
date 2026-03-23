#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int clamp(int y, int a, int b) {
    if (y < a) return a;
    if (y > b) return b;
    return y;
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        int Y = 1000000000; // very large number

        for (int i = 0; i < N; i++) {
            int A, B;
            scanf("%d %d", &A, &B);

            Y = clamp(Y, A, B);
        }

        printf("%d\n", Y);
    }

    return 0;
}
