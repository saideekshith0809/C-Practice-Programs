#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int a[3];
        int count = 0;

        for (int i = 0; i < 3; i++) {
            scanf("%d", &a[i]);
        }

        for (int i = 0; i < 3; i++) {
            if (a[i] >= 50) {
                count++;
            }
        }

        if (count >= 2)
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}
