#include <stdio.h>

int main(){
    int a[110];
    int n,m,count=0;
    scanf("%d%d",&n,&m);
    m=m%n;                      //m不一定小于n
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int j=n-m ; j < n; j++){
        printf("%d",a[j]);
        count++;
        if(count<n){
            printf(" ");
        }
    }
    for(int i=0;i<n-m;i++){
        printf("%d",a[i]);
        count++;
        if(count<n){
            printf(" ");
        }
    }
    return 0;
}