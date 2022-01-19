//nhap vao 1 mang va in ra so chinh phuong
// so chinh phuong 4 9 16 ...
#include<iostream>
#include<cmath>
using namespace std;
#define MAX 50
void nhapMang(int a[],int &n);// khai bao ham nhap
void xuatMang(int a[],int &n);// khai bao ham xuat
bool laSoChinhPhuong(int a);// khai bao ham kiem tra so chinh phuong
void lietKeSoChinhPhuong(int a[],int n); // khai bao ham liet ke so chinh phuong
bool tonTaiSoChinhPhuong(int a[],int n);// khai bao ham ton tai so chinh phuong
int demSoChinhPhuong(int a[],int n);// khai bao ham dem so chinh phuong
int main(){
    int mang[MAX];
    int n;
    nhapMang(mang,n);// goi ham nhap mang
    xuatMang(mang,n);// goi ham xuat mang
    lietKeSoChinhPhuong(mang,n);
    if(tonTaiSoChinhPhuong(mang,n)){
        cout<<"Mang ton tai so chinh phuong";
        cout<<endl;
    }
    else{
        cout<<"Mang khong ton tai so chinh phuong";
    }
    // dem so luong so chinh phuong
    cout<<"So luong so chinh phuong: "<<demSoChinhPhuong(mang,n);
    return 0;
}
void nhapMang(int a[],int &n){// xay dung ham nhap
    // nhap vao so luong phan tu
    cout<<"n = ";
    cin>>n;
    // nhap vao cac gia tri mang
    for(int i=0;i<n;i++){
        cout<<"Phan tu thu "<<i+1<<": ";
        cin>>a[i];
    }
}
void xuatMang(int a[],int &n){//  xay dung ham xuat
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
bool laSoChinhPhuong(int a){ //xay dung ham kiem tra so chinh phuong
    return sqrt(a) == (int)sqrt(a);
}
void lietKeSoChinhPhuong(int a[],int n){ // xay dung ham liet ke so chinh phuong
    for(int i=0;i<n;i++){
        if(laSoChinhPhuong(a[i])){
            cout<<a[i]<<" ";
        }
    }
    cout<<endl;
}
bool tonTaiSoChinhPhuong(int a[],int n){// xay dung ham kiem tra ton tai so chinh phuong
    bool tontai = false;
    for(int i=0;i<n;i++){
        if(laSoChinhPhuong(a[i])){
            tontai = true;
            break;
        }
    }
    return tontai;
}
int demSoChinhPhuong(int a[],int n){
    int dem = 0;
    for(int i=0;i<n;i++){
        if(laSoChinhPhuong(a[i])){
            dem++;
        }
    }
    return dem;
}