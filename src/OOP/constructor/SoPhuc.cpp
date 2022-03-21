#include<iostream>
using namespace std;
class SoPhuc{
    private:
        float thuc, ao;
    public:
        // constructor
        SoPhuc();
        SoPhuc(int thuc, int ao);
        // output
        void xuat(){
            cout<<this->thuc<<"+"<<this->ao<<"i";
        }
};
SoPhuc::SoPhuc(){
    this->ao = 0;
    this->thuc = 0;
}
SoPhuc::SoPhuc(int thuc, int ao){
    this->thuc  = thuc;
    this->ao = ao;
}
int main(){
    SoPhuc a;// khoi tao mac dinh
    SoPhuc b(2,3);// khoi tao co doi so
    a.xuat();
    b.xuat();
    return 0;
}