#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MOD 1000000007

long long power(long long a, long long b) {
    long long res = 1;
    a %= MOD;
    while (b) {
        if (b & 1) res = (res * a) % MOD;
        a = (a * a) % MOD;
        b >>= 1;
    }
    return res;
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        long long N, M;
        scanf("%lld %lld", &N, &M);

        long long totalSum = (N % MOD) * power(M, N-1) % MOD;
        totalSum = totalSum * ((M*(M+1)/2) % MOD) % MOD;

        long long minSum = 0;

        for (long long k = 1; k <= M; k++) {
            long long a = power(M-k+1, N);
            long long b = power(M-k, N);
            long long count = (a - b + MOD) % MOD;

            minSum = (minSum + k * count) % MOD;
        }

        long long ans = (totalSum - minSum + MOD) % MOD;

        printf("%lld\n", ans);
    }

    return 0;
}
