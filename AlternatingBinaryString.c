#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int minOperations(char *s) {
    int n = strlen(s);
    int changes0 = 0, changes1 = 0;

    for(int i = 0; i < n; i++) {
        char expected0 = (i % 2 == 0) ? '0' : '1';
        char expected1 = (i % 2 == 0) ? '1' : '0';

        if(s[i] != expected0)
            changes0++;

        if(s[i] != expected1)
            changes1++;
    }

    return changes0 < changes1 ? changes0 : changes1;
}
