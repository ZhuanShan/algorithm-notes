#include <stdio.h>      //八皇后第二种
#include <string.h>
#include <iostream>
using namespace std;

const int maxn=11;
int n,P[maxn],hashtable[maxn]={false};
int count =0;
void generatep(int index){
    if(index == n+1){
        count++;
        return;
    }
    for(int x=1; x<=n; x++){        //当前行
        if(hashtable[x] == false){
            bool flag = true;
            for(int pre=1;pre<index;pre++){         //遍历之前皇后
                if(abs(index-pre) == abs(x-P[pre])){
                    flag = false;
                    break;
                }
            }
            if(flag){
                P[index] = x;
                hashtable[x] = true;
                generatep(index+1);
                hashtable[x] = false;
            }
        }
    }
}

int main(){
    n=8;
    generatep(1);
    printf("%d\n",count);
    return 0;
}