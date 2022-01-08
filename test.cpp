#include <stdio.h>

bool isleap(int year){
    return (year%4 == 0&&year%100!=0||(year%400 ==0));
}

int main(){
    int i = isleap(2004);
    printf("%d\n",i);
    return 0;
}


// int main(){
//     int i = (2004%4 == 0&&2004%100!=0||(2004%400 ==0));
//     printf("%d",i);
//     return 0;
// }