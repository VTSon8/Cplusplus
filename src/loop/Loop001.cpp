// nhập mảng: v1 dùng for nhap_v1
// v2: dùng while nhap_v2
// xuat mảng: v1 dùng for
// xuất mảng: v2 dùng while
// xuất mảng: v3 dùng đệ quy
#include<iostream>
using namespace std;
#define MAX 50
void nhapMangV1(int a[],int &n);
void nhapMangV2(int a[],int &n);
void xuatMangV1(int a[],int n);
void xuatMangV2(int a[],int n);
void xuatMangV3(int a[],int n,int i);
int main(){
    int n;
    int a[MAX];
    nhapMangV1(a,n);
    // nhapMangV2(a,n);
    // xuatMangV1(a,n);
    xuatMangV2(a,n);
    xuatMangV3(a,n,0);
    return 0;
}
void nhapMangV1(int a[],int &n){
    cout<<"Nhap n:";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}
// void nhapMangV2(int a[],int &n){
//     int i=0;
//     cout<<"Nhap n: ";
//     cin>>n;
//     while(i<n){
//         cin>>a[i];
//         i++;
//     }
// }
// void xuatMangV1(int a[],int n){
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
// }
void xuatMangV2(int a[],int n){
    int i=0;
    while(i<n){
        cout<<a[i]<<" ";
        i++;
    }
}
void xuatMangV3(int a[],int n,int i){
    if(i==n){// vuot qua chi so mang
        return;
    }
    cout<<a[i]<<" ";// xuất phần tử hiện tại
    xuatMangV3(a,n,i+1);// xuất phần tử tiếp theo
}