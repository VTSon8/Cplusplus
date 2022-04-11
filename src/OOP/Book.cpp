// Sách, NXB, Thể Loại
// - Danh sách Sách
// + vector
// viết theo hướng đối tượng
#include<iostream>
using namespace std;
class Theloai{
    private:
        string id;
        string name;
    public:
        Theloai(){
            this->id = "000";
            this->name = "Tho";
        };
        // khoi tao co doi so
        Theloai(string id, string name){
            this->id = id;
            this->name = name;
        }
        // nhap
        void nhap(){
            cin>>this->id;
            cin>>this->name;
        }
        // xuat
        void xuat(){
            cout<<this->id;
            cout<<this->name;
        }
};
class NXB{
    private:
        string id;
        string name;
    public:
        NXB(){
            this->id = "000";
            this->name = "Tien Phong";
        }
        NXB(string id, string name){
            this->id = id;
            this->name = name;
        }
        void nhap(){
            cin>>this->id;
            cin>>this->name;
        }
        void xuat(){
            cout<<this->id;
            cout<<this->name;
        }
};
class Sach{
    private:
        string id;
        string name;
        NXB nxb;
        Theloai theloai;
        float gia;
    public:
        Sach(){
            this->id = "000";
            this->name = "Sach A";
        }
        Sach(string id, string name, NXB nxb, Theloai theloai, float gia){
            this->id = id;
            this->name = name;
            this->nxb = nxb;
            this->theloai = theloai;
            this->gia = gia;
        }
        void nhap(){
            cin>>this->id;
            cin>>this->name;
            cin>>this->gia;
        }
        void xuat(){
            cout<<this->id;
            cout<<this->name;
            nxb.xuat();
            theloai.xuat();
            cout<<this->gia;
        }
};

int main(){
    // khoi tao the loai
    Theloai theloai;
    // string id;
    // string name;
    Theloai ngontinh = Theloai("001","Ngon Tinh");
    Theloai trinhtham = Theloai("002","Trinh Tham");
    Theloai tho = Theloai("003","Tho");
    // // nhap 1 the loai
    // // ngontinh.nhap();
    // // xuat 1 the loai
    // ngontinh.xuat();
    // trinhtham.xuat();
    // tho.xuat();

    NXB nxb;
    // string id;
    // string name;
    NXB tienphong = NXB("001","Tien Phong");
    NXB thanhnien = NXB("002","Thanh Nien");
    NXB gddt = NXB("003","GD&DT");
    // tienphong.xuat();
    // thanhnien.xuat();
    // gddt.xuat();

    Sach sach;
    string id;
    string name;
    float gia;
    Sach sachA = Sach("001","Sach A",thanhnien, ngontinh,100);
    Sach sachB = Sach("002","Sach B",tienphong,trinhtham,110);
    Sach sachC = Sach("003","Sach C",gddt,tho,120);
    sachA.xuat();
    sachB.xuat();
    sachC.xuat();
}