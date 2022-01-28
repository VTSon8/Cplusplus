#include<iostream>
#include<cmath>
using namespace std;
typedef struct SoPhuc{
    float thuc;
    float ao;
};
void nhap(SoPhuc &sophuc);// khai bao ham nhap
void xuat(SoPhuc sophuc);
int main(){
    SoPhuc sophuc;
    nhap(sophuc);
    xuat(sophuc);
    return 0;
}
void nhap(SoPhuc &sophuc){
    cout<<"Phan thuc: ";
    cin>>sophuc.thuc;
    cout<<"Phan ao: ";
    cin>>sophuc.ao;
}
void xuat(SoPhuc sophuc){
    cout<<"z = "<<sophuc.thuc<<" + "<<sophuc.ao<<"i";
}