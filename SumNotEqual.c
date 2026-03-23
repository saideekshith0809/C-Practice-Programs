#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct {
    int val, idx;
} Pair;

int cmp(const void *a, const void *b) {
    return ((Pair*)a)->val - ((Pair*)b)->val;
}

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int n;
        scanf("%d", &n);
        
        Pair *a = malloc(n * sizeof(Pair));
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i].val);
            a[i].idx = i + 1; 
        }
        
        qsort(a, n, sizeof(Pair), cmp);
        if (a[0].val + a[1].val != a[n-1].val) {
            printf("%d %d %d\n", a[0].idx, a[1].idx, a[n-1].idx);
        }
        else if (a[0].val + a[n-1].val != a[n-2].val) {
            printf("%d %d %d\n", a[0].idx, a[n-1].idx, a[n-2].idx);
        }
        else if (a[n-2].val + a[n-1].val != a[0].val) {
            printf("%d %d %d\n", a[n-2].idx, a[n-1].idx, a[0].idx);
        }
        else {
            printf("-1\n");
        }
        
        free(a);
    }
    
    return 0;
}
