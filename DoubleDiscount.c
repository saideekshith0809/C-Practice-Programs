#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        int n, k;
        scanf("%d %d", &n, &k);

        int a[100], b[100];

        for(int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        for(int i = 0; i < n; i++) {
            scanf("%d", &b[i]);
        }

        int maxTaste = 0;

        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {

                int max, min;

                if(a[i] > a[j]) {
                    max = a[i];
                    min = a[j];
                } else {
                    max = a[j];
                    min = a[i];
                }

                int discount = max / 2;
                if(discount > 100) {
                    discount = 100;
                }

                int total = min + (max - discount);

                if(total <= k) {
                    int taste = b[i] + b[j];
                    if(taste > maxTaste) {
                        maxTaste = taste;
                    }
                }
            }
        }

        printf("%d\n", maxTaste);
    }

    return 0;
}
