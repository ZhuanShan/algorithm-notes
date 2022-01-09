#include <stdio.h>
const int maxn=100010;
bool hashtable[maxn]={false};

int main(){
    int x,m,n;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        hashtable[x]=true;
    }
    for(int i=0;i<m;i++){
        scanf("%d",&x);
        if(hashtable[x]==true){
            printf("yes\n");
        }else{
            printf("no\n");
        }
    }
    return 0;
}