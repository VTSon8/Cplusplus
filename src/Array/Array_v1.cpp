#include<iostream>
using namespace std;
#define MAX 100
void nhapMang(int a[],int &n);
void xuatMang(int a[],int n);
int phanTuLonNhat(int a[],int n);
int phanTuNhoNhat(int a[],int n);
int main(){
    int a[MAX];
    int n;
    nhapMang(a,n);
    xuatMang(a,n);
    cout<<"Phan tu lon nhat trong mang la: "<<phanTuLonNhat(a,n);
    cout<<"Phan tu nho nhat trong mang la: "<<phanTuNhoNhat(a,n);
    return 0;
}
void nhapMang(int a[],int &n){
    cout<<"Nhap n:";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"a["<<i<<"]:";
        cin>>a[i];
    }
}
void xuatMang(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int phanTuLonNhat(int a[],int n){
    int max = a[0];
    for(int i=1;i<n;i++){
        if(max<a[i]){
            max = a[i];
        }
    }
    return max;
}
int phanTuNhoNhat(int a[],int n){
    int min = a[0];
    for(int i=1;i<n;i++){
        if(min>a[i]){
            min = a[i];
        }
    }
    return min;
}