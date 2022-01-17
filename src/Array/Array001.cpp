#include<iostream>
using namespace std;
#define MAX 100
void nhap(int a[],int &n);
int main(){
    // khai bao
    int a[MAX];
    int n;
    // nhap mang
    nhap(a,n);
    return 0;
}
void nhap(int a[],int &n){
    cin>>n;// nhap n
    // nhap cac phan tu mang
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}