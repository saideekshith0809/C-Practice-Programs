#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int A, B, C;
        scanf("%d %d %d", &A, &B, &C);

        if (C % 3 == 0 && B == 2*A + C/3)
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}
