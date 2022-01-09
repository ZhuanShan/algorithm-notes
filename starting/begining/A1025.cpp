#include <stdio.h>
#include <algorithm>
#include <string.h>
using namespace std;

struct student{
    char id[15];
    int score;
    int loc_num;
    int loc_rank;
}stu[30001];

bool cmp(student a,student b){
    if(a.score!=b.score){
        return a.score>b.score;
    }else{
        return strcmp(a.id,b.id)<0;
    }
}

int main(){
    int n,k,num=0;                          //num总考生数
    scanf("%d",&n);                         //考场数
    // printf("%d\n",n);
    for(int i=1;i<=n;i++){      
        scanf("%d",&k);                     //考场人数
        // printf("%d\n",k);
        for(int j=0;j<k;j++){
            scanf("%s %d",stu[num].id , &stu[num].score);
            stu[num].loc_num=i;
            num++;
        }
        sort(stu+num-k,stu+num,cmp);       //该考场考生排序
        stu[num-k].loc_rank=1;
        for(int j=num-k+1;j<num;j++){
            if(stu[j].score==stu[j-1].score){
                stu[j].loc_rank=stu[j-1].loc_rank;
            }else{
                stu[j].loc_rank=j+1-(num-k);      //不同分排名为人数
            }
        }
    }
    printf("%d\n",num);
    sort(stu,stu+num,cmp);
    int r=1;
    for(int i=0;i<num;i++){
        if(i>0&&stu[i].score!=stu[i-1].score){
            r=i+1;                              //分数不相等，则排名更新为人数＋1
        }
        printf("%s ",stu[i].id);
        printf("%d %d %d\n",r, stu[i].loc_num, stu[i].loc_rank);
    }
    return 0;
}