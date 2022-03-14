// nhap den khi nhap chu thi dung lai
// 3 4 5 6 7 a 8 9 8
#include<iostream>
using namespace std;
int main(){
    int a[1000];
    int n;
    int i = 0;
    int temp;
    while(cin>>temp){
        a[i] = temp;
        i++;
    }
    n = i;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}