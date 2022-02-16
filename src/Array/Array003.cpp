#include<iostream>
#define MAX 50
using namespace std;
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
int tanSuat(int a[], int n, int x);
int main(){
    int a[MAX];
    int n;
    int x;
    cin>>x;
    nhapMang(a,n);
    xuatMang(a,n);
    cout<<endl;
    cout<<"so "<<x<<"xuat hien"<<tanSuat(a,n,x);
    return 0;
}
void nhapMang(int a[], int &n){
    cout<<"Nhap Mang: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"a["<<i<<"] = ";
        cin>>a[i];
    }
}
void xuatMang(int a[], int n){
    cout<<"Xuat Mang: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int tanSuat(int a[], int n, int x){
    int dem = 0;
    for(int i=0;i<n;i++){
        if(a[i]==x){
            dem++;
        }
    }
    return dem;
}
