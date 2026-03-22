#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int X, Y;
    
    scanf("%d %d", &X, &Y);

    if (X > Y) {
        printf("Alice");
    } 
    else if (Y > X) {
        printf("Bob");
    } 
    else {
        printf("Draw");
    }

    return 0;
}
