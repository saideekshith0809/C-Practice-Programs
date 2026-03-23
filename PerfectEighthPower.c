#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 0; t < T; t++) {
        int N;
        scanf("%d", &N);

        int count2 = 0, x;

        for (int i = 0; i < N; i++) {
            scanf("%d", &x);
            if (x == 2) count2++;
        }

        if (count2 % 8 == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }


    return 0;
}
