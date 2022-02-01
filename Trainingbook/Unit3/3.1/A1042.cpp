#include <stdio.h>

const int N=54;
char mp[5]={'S','H','C','D','J'};
int start[N+1], ned[N+1],next[N+1];

int main(){
    int k;
    scanf("%d",&k);
    for(int i=1;i<=N;i++){
        start[i]=i;
    }
    for(int i=1;i<N;i++){
        scanf("%d",&next[i]);
    }
    for(int step=0;)
}