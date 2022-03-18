#include<iostream>
using namespace std;
#define MAX 100
void nhapMang(int a[],int &n);
void xuatMang(int a[],int n);
bool timKiemPhanTu(int a[], int n, int x);
void sapXepMang(int a[],int n);
int timKiemNhiPhan(int a[], int x, int left, int right);// 1 2 3 4 5
int main(){
    int n;
    int a[MAX];
    int x;
    nhapMang(a,n);
    cout<<"Phan tu can tim kiem la: ";
    cin>>x;
    // cout<<timKiemPhanTu(a,n,x);
    sapXepMang(a,n);
    // xuatMang(a,n);
    cout<<timKiemNhiPhan(a,x,0,n-1);
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
    for(int i=0;i<n;i++){
        if(a[i]==x){
            tontai = true;
            break;
        }
    }
    return tontai;
}
void sapXepMang(int a[],int n){
    int temp = 0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
// 1 2 3 [4 5 (6) 7 8]
// 1 2 3 4
// 2

// left a[x] mid right
// left mid a[x] right
int timKiemNhiPhan(int a[], int x, int left, int right){
    // b1: sapxep
    // b2: tim kiem
    if(left<=right){
        int mid = left + (right-left)/2;
        // 3 6 --> 3+ (6-3)/2 = 3+1 = 4
        // 3 7 --> 3+ (7-3)/2 = 5
        if(a[mid] == x){
            return mid;// co ton tai
        }
        else if(a[mid]<x){
            return timKiemNhiPhan(a,x,mid+1, right);
        } else{
            return timKiemNhiPhan(a,x,left,mid-1);
        }
    }
    return -1;
}