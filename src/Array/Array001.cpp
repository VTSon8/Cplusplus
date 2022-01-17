#include<iostream>
using namespace std;
#define MAX 100
void nhap(int a[],int &n);
void xuat(int a[],int n);
void lietKeChan(int a[],int n);
void lietKeLe(int a[],int n);
int demChan(int a[],int n);
int demLe(int a[],int n);
bool tonTaiChan(int a[],int n);
int main(){
    // khai bao
    int a[MAX];
    int n;
    int dem = 0;
    bool tontaichan = false;
    // nhap mang
    nhap(a,n);
    // xuat mang
    xuat(a,n);
    lietKeChan(a,n);
    lietKeLe(a,n);
    dem = demChan(a,n);
    cout<<dem;
    dem = demLe(a,n);
    cout<<dem;
    tontaichan = tonTaiChan(a,n);
    if(tontaichan){
        cout<<"TRUE";
    }
    else{
        cout<<"FALSE";
    }
    return 0;
}
void nhap(int a[],int &n){
    cin>>n;// nhap n
    // nhap cac phan tu mang
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}
void xuat(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void lietKeChan(int a[],int n){
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            cout<<a[i]<<" ";
        }
    }
    cout<<endl;
}
void lietKeLe(int a[],int n){
    for(int i=0;i<n;i++){
        if(a[i]%2!=0){
            cout<<a[i]<<" ";
        }
    }
    cout<<endl;
}
int demChan(int a[],int n){
    int dem = 0;
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            dem++;
        }
    }
    return dem;
} 
int demLe(int a[],int n){
    int dem = 0;
    for(int i=0;i<n;i++){
        if(a[i]%2!=0){
            dem++;
        }
    }
    return dem;
}
bool tonTaiChan(int a[],int n){
    bool tontai = false;
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            tontai = true;
            break;
        }
    }
    return tontai;
}