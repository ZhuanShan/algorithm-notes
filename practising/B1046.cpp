#include <stdio.h>

int main(){
    int n,faila=0,failb=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int a1,a2,b1,b2;
        scanf("%d%d%d%d",&a1,&a2,&b1,&b2);
        if(a1+b1==a2&&a1+b1!=b2){
            failb++;
        }else if(a1+b1==b2&&a1+b1!=a2){
            faila++;
        }
    }
    printf("%d %d\n",faila,failb);
    return 0;
}
