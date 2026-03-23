#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAXN 200005

int A[MAXN], pos[MAXN];
int L[MAXN], R[MAXN];

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        for (int i = 1; i <= N; i++) {
            scanf("%d", &A[i]);
            pos[A[i]] = i;
        }
        for (int i = 0; i <= N + 1; i++) {
            L[i] = i - 1;
            R[i] = i + 1;
        }

        long long ans = 0;
        for (int x = N; x >= 1; x--) {
            int i = pos[x];

            int l1 = L[i];
            int l2 = (l1 >= 1) ? L[l1] : 0;
            int r1 = R[i];
            int r2 = (r1 <= N) ? R[r1] : N + 1;

            long long c1 = (long long)(i - l1) * (r2 - r1);
            long long c2 = (long long)(l1 - l2) * (r1 - i);

            ans += (long long)x * (c1 + c2);

            R[l1] = r1;
            L[r1] = l1;
        }

        printf("%lld\n", ans);
    }

    return 0;
}
