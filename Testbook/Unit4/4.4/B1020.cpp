#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

struct mooncake{
    double store;
    double sell;
    double price;
}cake[1010];
bool cmp(mooncake a, mooncake b){
    return a.price>b.price;
}

int main(){
    int n;
    double D;
    scanf("%d%lf",&n,&D);
    for(int i=0;i<n;i++){
        scanf("%lf",&cake)
    }
}