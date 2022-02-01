#include <stdio.h>   //全排列

const int maxn=11;
int n,P[maxn],hashtable[maxn]={false};

void generatep(int index){
    if(index==n+1){                             //到第n位输出
        for(int i=1;i<=n;i++){
            printf("%d",P[i]);
        }
        printf("\n");
        return;
    }
    for(int x=1;x<=n;x++){                      //枚举1-n填入P[]中
        if(hashtable[x]==false){
            P[index]=x;
            hashtable[x]=true;
            generatep(index+1);
            hashtable[x]=false;
        }
    }
}

int main(){
    n=3;
    generatep(1);
    return 0;
}