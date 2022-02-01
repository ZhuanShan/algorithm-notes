#include <stdio.h>
const int maxn=10010;
int hashtable[maxn]={0};

int main(){
    int n,m,x;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        hashtable[x]++;
    }
    for(int i=0;i<m;i++){
        scanf("%d",&x);
        printf("%d\n",hashtable[x]);
    }
    return 0;
}