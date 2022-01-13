#include <stdio.h>

int main(){
    int t,tcase=1;
    scanf("%d",&t);
    while(t--){
        long long a,b,c;
        scanf("%lld%lld%lld",&a,&b,&c);
        if(a+b>c){
            printf("Case #%d:true\n",tcase++);
        }else{
            printf("Case #%d:true\n",tcase++);
        }
    }
    return 0;
}