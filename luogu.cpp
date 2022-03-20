#include <stdio.h>
int cow(int n){
    if(n<=1)
        return 1;
    else if(n==2)
        return 2;
    else if(n==3)
        return 3;
    else if(n==4)
        return 4;
    else {
        return cow(n-1)+cow(n-3);
    }
}

int main(){
    int i;
    while(scanf("%d",&i)!=EOF){
            printf("%d\n",cow(i));
    }
    return 0;
}