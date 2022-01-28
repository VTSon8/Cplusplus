#include<iostream>
using namespace std;
typedef struct PhanSo{
    int tuSo;
    int mauSo;
};
void nhap(PhanSo &phanso);// khai bao ham nhap
void xuat(PhanSo phanso);// khai bao ham xuat
int main(){
    PhanSo phanso;
    string format = "/";
    nhap(phanso);
    xuat(phanso);
    return 0;
}
void nhap(PhanSo &phanso){
    cout<<"Nhap tu so: ";
    cin>>phanso.tuSo;
    cout<<"Nhap mau so: ";
    cin>>phanso.mauSo;
}
void xuat(PhanSo phanso,string format){
    cout<<"Phan so: "<<phanso.tuSo<<format<<phanso.mauSo;
}