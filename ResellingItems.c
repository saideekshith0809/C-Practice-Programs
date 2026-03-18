#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N, K;
        scanf("%d %d", &N, &K);

        int A[N];

        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }

        for (int i = 0; i < N - 1; i++) {
            for (int j = i + 1; j < N; j++) {
                if (A[i] < A[j]) {
                    int temp = A[i];
                    A[i] = A[j];
                    A[j] = temp;
                }
            }
        }

        int profit = 0;

        for (int i = 0; i < N; i++) {
            if (i < K) {
                if (A[i] > 5)
                    profit += (A[i] - 5);
            } else {
                if (A[i] > 10)
                    profit += (A[i] - 10);
            }
        }

        printf("%d\n", profit);
    }

    return 0;
}
