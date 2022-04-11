// Nhanvien: mã, họ tên, lương, phòng ban, vị trí
// PhongBan: mã, tên
// ViTri: mã, tên, trợ cấp
#include<iostream>
using namespace std;
class PhongBan{
    private:
        string mapb;
        string tenpb;
    public:
        PhongBan(){
            this->mapb = "00";
            this->tenpb = "Du An";
        }
        PhongBan(string mapb, string tenpb){
            this->mapb = mapb;
            this->tenpb = tenpb;
        }
        void nhap(){
            cin>>this->mapb;
            cin>>this->tenpb;
        }
        void xuat(){
            cout<<this->mapb;
            cout<<this->tenpb;
        }
};
class ViTri{
    private:
        string mavt;
        string tenvt;
        float trocap;
    public:
        ViTri(){
            this->mavt = "00";
            this->tenvt = "Truong Phong";
            this->trocap = 1.5;
        }
        ViTri(string mavt, string tenvt, float trocap){
            this->mavt = mavt;
            this->tenvt = tenvt;
            this->trocap = trocap;
        }
        void nhap(){
            cin>>this->mavt;
            cin>>this->tenvt;
            cin>>this->trocap;
        }
        void xuat(){
            cout<<this->mavt;
            cout<<this->tenvt;
            cout<<this->trocap;
        }
};
int main(){
    // PhongBan phongban;
    // string mapb;
    // string tenpb;
    // PhongBan duan = PhongBan("01","Du An");
    // PhongBan congtac = PhongBan("02","Cong Tac");
    // duan.xuat();
    // congtac.xuat();

    ViTri vitri;
    string mavt;
    string tenvt;
    float trocap;
    ViTri truongphong = ViTri("01","Truong Phong",1.5);
    ViTri phophong = ViTri("02","Pho Phong",1.3);
    truongphong.xuat();
    phophong.xuat();
}