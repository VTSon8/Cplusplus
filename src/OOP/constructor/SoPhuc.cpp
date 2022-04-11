#include<iostream>
using namespace std;
class SoPhuc{
    private:
        float thuc, ao;
    public:
        // constructor
        SoPhuc();
        SoPhuc(float thuc, float ao);
        // output
        // void xuat(){
        //     cout<<this->thuc<<"+"<<this->ao<<"i";
        // }
        // setter getter
        void setThuc(float thuc){this->thuc = thuc;}
        float getThuc(){return thuc;}
        void setAo(float ao){this->ao = ao;}
        float getAo(){return ao;}
        friend istream &operator >>(istream &input, SoPhuc &S){
            input>>S.thuc>>S.ao;
            return input;
        }
        friend ostream &operator <<(ostream &output, const SoPhuc &S){
            output<<"So Phuc: "<<S.thuc<<"+"<<S.ao<<"i";
            return output;
        }
        SoPhuc operator+(const SoPhuc& x){
            SoPhuc sophuc;
            sophuc.thuc = this->thuc + x.thuc;
            sophuc.ao = this->ao + x.ao;
            return sophuc;
        }
        SoPhuc operator-(const SoPhuc& y){
            SoPhuc sophuc;
            sophuc.thuc = this->thuc - y.thuc;
            sophuc.ao = this->ao - y.ao;
            return sophuc;
        }
        SoPhuc operator*(const SoPhuc& z){
            SoPhuc sophuc;
            sophuc.thuc = (this->thuc*z.thuc) - (this->ao*z.ao);
            sophuc.ao = (this->thuc*z.ao) + (z.thuc*this->ao);
            return sophuc;
        }
        SoPhuc operator/(const SoPhuc& v){
            SoPhuc sophuc;
            sophuc.thuc = ((this->thuc*v.thuc)+(this->ao*v.ao))/((v.thuc*v.thuc)+(v.ao*v.ao));
            sophuc.ao = ((this->ao*v.thuc)-(this->thuc*v.ao))/((v.thuc*v.thuc)+(v.ao*v.ao));
            return sophuc;
        }
        bool operator<(const SoPhuc& a){
            return this->thuc < a->thuc;
        }
};
SoPhuc::SoPhuc(){
    this->ao = 0;
    this->thuc = 0;
}
SoPhuc::SoPhuc(float thuc, float ao){
    this->thuc  = thuc;
    this->ao = ao;
}
int main(){
    // SoPhuc a;// khoi tao mac dinh
    // SoPhuc b(2,3);// khoi tao co doi so
    // cin>>a;
    // cin>>b;
    // a.xuat();
    // b.xuat();
    // cout<<a;
    SoPhuc S1(1,2), S2, S3, S4, S5, S6;
    cout<<"Nhap so phuc S2: "<<endl;
    cin>>S2;
    cout<<S1;
    SoPhuc SoPhuc1;
    SoPhuc SoPhuc2;
    SoPhuc1.setThuc(5);
    SoPhuc1.setAo(3);
    SoPhuc2.setThuc(7);
    SoPhuc2.setAo(8);
    S3 = SoPhuc1 + SoPhuc2;
    cout<<"Tong: "<<S3;
    S4 = SoPhuc1 - SoPhuc2;
    cout<<"Hieu: "<<S4;
    S5 = SoPhuc1 * SoPhuc2;
    cout<<"Tich: "<<S5;
    S6 = SoPhuc1 / SoPhuc2;
    cout<<"Thuong: "<<S6;
    return 0;
}
