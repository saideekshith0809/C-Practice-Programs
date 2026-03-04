#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXN 200005

int A[MAXN];
int balloons[MAXN];
int prev_node[MAXN];
int next_node[MAXN];
int bucket_head[MAXN];
int bucket_next[MAXN];
int present[MAXN];

void solve() {
    int n;
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        scanf("%d", &A[i]);
    }
    
    for (int i = 0; i <= n + 1; i++) {
        prev_node[i] = i - 1;
        next_node[i] = i + 1;
        present[i] = 1;
        balloons[i] = 0;
        bucket_head[i] = 0;
        bucket_next[i] = 0;
    }

    present[0] = 0;
    present[n + 1] = 0;
    
    for (int i = 1; i <= n; i++) {
        bucket_next[i] = bucket_head[A[i]];
        bucket_head[A[i]] = i;
    }
    
    int turns = 0;
    int cur = next_node[0];
    
    while (cur != n + 1) {
        balloons[cur] = turns;
        turns++;
        
        int p = prev_node[cur];
        int nx = next_node[cur];
        next_node[p] = nx;
        prev_node[nx] = p;
        present[cur] = 0;
        
        int j = bucket_head[turns];
        while (j != 0) {
            if (present[j]) {
                balloons[j] = turns;
                int pj = prev_node[j];
                int nj = next_node[j];
                next_node[pj] = nj;
                prev_node[nj] = pj;
                present[j] = 0;
            }
            j = bucket_next[j];
        }
        
        cur = next_node[p];
    }
    
    int rem = next_node[0];
    while (rem != n + 1) {
        balloons[rem] = turns;
        rem = next_node[rem];
    }
    
    for (int i = 1; i <= n; i++) {
        printf("%d", balloons[i]);
        if (i < n) printf(" ");
    }
    printf("\n");
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        solve();
    }
    return 0;
}
