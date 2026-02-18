#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        char S[105];
        int freq[26] = {0};

        scanf("%d", &N);
        scanf("%s", S);

        for (int i = 0; i < N; i++) {
            freq[S[i] - 'a']++;
        }

        int possible = 0;
        for (int i = 0; i < 26; i++) {
            if (freq[i] >= 2) {
                possible = 1;
                break;
            }
        }

        if (possible)
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}

