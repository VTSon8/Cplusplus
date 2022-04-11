#include<iostream>
using namespace std;
class PhanSo{
    private:
        int tu, mau;
    public:
        // constructor
        PhanSo();
        PhanSo(int tu, int mau);
        void xuat(){
            cout<<"Phan so: "<<tu<<"/"<<mau;
        }
};
PhanSo::PhanSo(){
    this->tu = 0;
    this->mau = 0;
}
PhanSo::PhanSo(int tu, int mau){
    this->tu = tu;
    this->mau = mau;
}
int main(){
    PhanSo a;
    PhanSo b(7,8);
    a.xuat();
    b.xuat();
    return 0;
}