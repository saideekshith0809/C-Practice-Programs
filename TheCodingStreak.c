#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        int A, current = 0, maxStreak = 0;

        for (int i = 0; i < N; i++) {
            scanf("%d", &A);

            if (A > 0) {
                current++;
                if (current > maxStreak)
                    maxStreak = current;
            } else {
                current = 0;
            }
        }

        printf("%d\n", maxStreak);
    }

    return 0;
}
