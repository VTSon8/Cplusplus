#include<iostream>
using namespace std;
#define MAX 100
void nhapMang(int a[],int &n);
void xuatMang(int a[],int n);
bool timKiemPhanTu(int a[], int n, int x);
int main(){
    int n;
    int a[MAX];
    int x;
    nhapMang(a,n);
    xuatMang(a,n);
    cout<<timKiemPhanTu(a,n,x);
    return 0;
}
void nhapMang(int a[],int &n){
    cout<<"Nhap n:";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}
void xuatMang(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" "<<endl;
    }
}
bool timKiemPhanTu(int a[], int n, int x){
    bool tontai = false;
    cout<<"Phan tu can tim kiem la: ";
    cin>>x;
    for(int i=0;i<n;i++){
        if(a[i]==x){
            tontai = true;
            break;
        }
    }
    return tontai;
}