#include<iostream>
#define MAX 50
using namespace std;
void nhap(int a[],int &n);
void xuat(int a[],int n);
void thayTheAm(int a[],int n);
int main(){
    int n;
    int a[MAX];
    nhap(a,n);
    xuat(a,n);
    thayTheAm(a,n);
    xuat(a,n);
    return 0;
}
void nhap(int a[],int &n){
    cout<<"Nhap mang: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"a["<<i<<"]:";
        cin>>a[i];
    }
}
void xuat(int a[],int n){
    cout<<"Xuat mang: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" "<<endl;
    } 
}
void thayTheAm(int a[],int n){
    int m = 0;
    for(int i=0;i<n;i++){
        if(a[i]<0){
            a[i] = m;
        }
    }
}
