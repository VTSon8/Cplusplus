#include<iostream>
#define MAX 50
using namespace std;
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
int tanSuat(int a[], int n, int x);
void tangDan(int a[],int n);
int main(){
    int a[MAX];
    int n;
    int x;
    cin>>x;
    nhapMang(a,n);
    xuatMang(a,n);
    cout<<endl;
    cout<<"so "<<x<<" xuat hien "<<tanSuat(a,n,x)<<" lan"<<endl;
    tangDan(a,n);
    xuatMang(a,n);
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
// tang dan
// 3 2 1 2 3
// i = 0, j = i+1 = 1, 2 3 1 2 3
// i = 0, j = j++ = 2, 1 3 2 2 3
// i = 0, j = j++ = 2, (1) 3 2 2 3
// i = 1, j = i+1 = 2, (1) 2 3 2 3
// i = 1, j = j++ = 3, (1) (2) 3 2 3
//...
//i = 2, j = i+1 = 3, (1) (2) 2 3 3
void tangDan(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}