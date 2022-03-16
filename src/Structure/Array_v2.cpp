#include<iostream>
#define FOR(i,a,b) for(long long i = a; i<b; i++)
using namespace std;
int main(){
    int *a;// a rỗng: mảng động
    int n = 10;
    int i;
    a = new int[n];// cấp phát vùng nhớ gồm n phần tử
    // nhập danh sách phần tử
    FOR(i,0,n){
        cin>>a[i];
    }
    FOR(i,0,n){
        cout<<a[i]<<" ";
    }
    return 0;
}