#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        long long N;
        scanf("%lld", &N);

        long long ans = (N * (N + 2)) / 4;
        printf("%lld\n", ans);
    }

    return 0;
}
