#include <stdio.h>      //八皇后问题
#include <string.h>
#include <iostream>
using namespace std;

const int maxn=11;
int n,P[maxn],hashtable[maxn]={false};
int count =0;
void generateP(int index){
    if(index == n+1){
        bool flag=true;
        for(int i=1;i<=n;i++){    
            for(int j=i+1;j<=n;j++){
                if(abs(i-j) == abs(P[i]-P[j])){
                    flag =  false;
                }
            }   
        }
        if(flag){
            count++;
        }
        return;
    }
    for(int x=1;x<=n;x++){
        if(hashtable[x]==false){
            P[index]=x;
            hashtable[x]=true;
            generateP(index+1);
            hashtable[x]=false;
        }
    }
}

int main(){
    n=8;
    generateP(1);
    printf("%d\n",count);
    return 0;
}