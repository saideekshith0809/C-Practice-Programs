#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        int n;
        scanf("%d", &n);
        if ((n % 2 == 0 || n % 5 == 0) && !(n % 2 == 0 && n % 5 == 0)) {
            printf("0\n");
        }
        else if (n % 10 == 0) {
            printf("2\n");
        }
        else {
            printf("1\n");
        }
    }

    return 0;
}
