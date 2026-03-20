#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    int totalones=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]==1) totalones++;
    }
    if(totalones== 0|| totalones==n){
        printf("0\n");
        return 0;
    }
    int current=0;
    for(int i=0;i<totalones;i++){
        if(a[i]==1) current++;
    }
    int maxones=current;
    for(int i=totalones;i<n;i++){
        if(a[i]==1) current++;
    if(a[i- totalones] == 1) current--;
    if(current >maxones)
        maxones=current;
    }
        printf("%d\n", totalones-maxones);
    
    
    

    return 0;
}
