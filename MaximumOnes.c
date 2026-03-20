#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
    int T; scanf("%d",&T);
    while(T--){
        int N,K; scanf("%d %d",&N,&K);
        char S[100005]; scanf("%s",S);

        int i,ones=0,last=-1,zeros=0;

        for(i=0;i<N;i++)
            if(S[i]=='1') ones++, last=i;

        if(last==-1){ printf("0\n"); continue; }

        for(i=0;i<last;i++)
            if(S[i]=='0') zeros++;

        printf("%d\n", ones + (K<zeros?K:zeros));
    }
}
