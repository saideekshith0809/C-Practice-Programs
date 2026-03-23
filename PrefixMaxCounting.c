#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MOD 998244353

int N;
int P[5005];
int used[5005];
int available[5005];
int avail_count;
int memo[5005][5005];
int visited[5005][5005];

void find_available() {
    memset(used, 0, sizeof(used));
    for (int i = 0; i < N; i++) {
        if (P[i] != -1) {
            used[P[i]] = 1;
        }
    }
    avail_count = 0;
    for (int i = 1; i <= N; i++) {
        if (!used[i]) {
            available[avail_count++] = i;
        }
    }
}

int dp(int pos, int max_so_far) {
    if (pos == N) {
        return 1;
    }
    
    if (visited[pos][max_so_far]) {
        return memo[pos][max_so_far];
    }
    
    visited[pos][max_so_far] = 1;
    long long result = 0;
    
    if (P[pos] != -1) {
        int new_max = (P[pos] > max_so_far) ? P[pos] : max_so_far;
        result = dp(pos + 1, new_max);
    } else {
        for (int i = 0; i < avail_count; i++) {
            int val = available[i];
            if (used[val]) continue;
            
            used[val] = 1;
            int new_max = (val > max_so_far) ? val : max_so_far;
            result = (result + dp(pos + 1, new_max)) % MOD;
            used[val] = 0;
        }
    }
    
    memo[pos][max_so_far] = result;
    return result;
}

int solve() {
    find_available();
    
    memset(visited, 0, sizeof(visited));
    memset(memo, 0, sizeof(memo));
    memset(used, 0, sizeof(used));
    
    for (int i = 0; i < N; i++) {
        if (P[i] != -1) {
            used[P[i]] = 1;
        }
    }
    
    return dp(0, 0);
}

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        scanf("%d", &N);
        for (int i = 0; i < N; i++) {
            scanf("%d", &P[i]);
        }
        
        printf("%d\n", solve());
    }
    
    return 0;
}
