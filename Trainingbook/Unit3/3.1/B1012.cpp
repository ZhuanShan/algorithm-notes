#include <stdio.h>

int main(){
    int num,temp;
    int a[1000];
    int ans[5] = {0};
    int count[5] = {0};
    scanf("%d", &num);
    for(int i=0; i<num; i++){
        scanf("%d", &temp);
        if(temp % 5 == 0){
            if(temp % 2 == 0){
                ans[0] += temp;
                count[0]++;
            }
        }else if(temp % 5 == 1){
            if(count[1] % 2 == 0){
                ans[1]+=temp;
            }else{
                ans[1]-=temp;
            }
            count[1]++;
        }else if(temp%5==2){
            ans[2]++;
            count[2]++;
        }else if(temp%5==3){
            ans[3]+=temp;
            count[3]++;
        }else{
            if(temp>ans[4]){
                ans[4]=temp;
            }
            count[4]++;
        }
    }
    if(count[0]==0){
        printf("N ");
    }else{
        printf("%d ",ans[0]);
    }
    if(count[1]==0){
        printf("N ");
    }else{
        printf("%d ",ans[1]);
    }
    if(count[2]==0){
        printf("N ");
    }else{
        printf("%d ",ans[2]);
    }
    if(count[3]==0){
        printf("N ");
    }else{
        printf("%.1f ",(double)ans[3]/count[3]);            //强制转换成double类型
    }
    if(count[4]==0){
        printf("N ");
    }else{
        printf("%d ",ans[4]);
    }
}