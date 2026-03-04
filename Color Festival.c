#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        int color[101] = {0};
        int c, count = 0;

        for (int i = 0; i < N; i++) {
            scanf("%d", &c);
            if (color[c] == 0) {
                color[c] = 1;
                count++;
            }
        }

        printf("%d\n", count);
    }

    return 0;
}
