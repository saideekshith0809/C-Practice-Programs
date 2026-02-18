#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        int sum = 0, x;
        for (int i = 0; i < N; i++) {
            scanf("%d", &x);
            sum += x;
        }

        if (sum % 2 == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}

