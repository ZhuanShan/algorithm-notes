#include <stdio.h>
#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
using namespace std;

// bool cmp(int a,int b){
//     return a>b;
// }

bool cmp(string str1,string str2){
    return str1.length()<str2.length();
}

// int main(){
//     vector<int> vi;
//     vi.push_back(3);
//     vi.push_back(1);
//     vi.push_back(2);
//     sort(vi.begin(),vi.end(),cmp);
//     for(int i=0;i<3;i++){
//         printf("%d ",vi[i]);
//     }
//     return 0;
// }


int main(){
    string str[3]={"bbbb","cc","aaa"};
    sort(str,str+3,cmp);
    for(int i=0;i<3;i++){
        cout<<str[i]<<endl;
    }
    return 0;
}