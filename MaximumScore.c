#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        int A[100], B[100];
        int total = 0;
        int min_diff = 100000;

        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
            total += A[i];
        }

        for (int i = 0; i < N; i++) {
            scanf("%d", &B[i]);
            int diff = A[i] - B[i];
            if (diff < min_diff) {
                min_diff = diff;
            }
        }

        printf("%d\n", total - min_diff);
    }

    return 0;
}

