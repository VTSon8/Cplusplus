// Nhanvien: mã, họ tên, lương, phòng ban, vị trí
// PhongBan: mã, tên
// ViTri: mã, tên, trợ cấp
#include<iostream>
#include<cmath>
using namespace std;
class PhongBan{
    private:
        string mapb;
        string tenpb;
    public:
        PhongBan(){
            this->mapb = "00 ";
            this->tenpb = "Du An ";
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
            this->mavt = "00 ";
            this->tenvt = "Truong Phong ";
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
class NhanVien{
    private:
        string manv;
        string hoten;
        float luong;
        PhongBan phongban;
        ViTri vitri;
    public:
        NhanVien(){
            this->manv = "00 ";
            this->hoten = "Nguyen Van A ";
            this->luong = 10;
        }   
        NhanVien(string manv, string hoten, PhongBan phongban, ViTri vitri, float luong){
            this->manv = manv;
            this->hoten = hoten;
            this->luong = luong;
            this->phongban = phongban;
            this->vitri = vitri;
        }
        void nhap(){
            cin>>this->manv;
            cin>>this->hoten;
            cin>>this->luong;
        }
        void xuat(){
            cout<<this->manv;
            cout<<this->hoten;
            phongban.xuat();
            vitri.xuat();
            cout<<this->luong;
        }
};
int main(){
    PhongBan phongban;
    // string mapb;
    // string tenpb;
    PhongBan duan = PhongBan("01 ","Du An ");
    PhongBan congtac = PhongBan("02 ","Cong Tac ");
    // duan.xuat();
    // congtac.xuat();

    ViTri vitri;
    // string mavt;
    // string tenvt;
    // float trocap;
    ViTri truongphong = ViTri("01 ","Truong Phong ",1.5);
    ViTri phophong = ViTri("02 ","Pho Phong ",1.3);
    // truongphong.xuat();
    // phophong.xuat();

    NhanVien nhanvien;
    string manv;
    string hoten;
    float luong;
    NhanVien nvA = NhanVien("01 ","Nguyen Van A ",duan,truongphong,1.5*10);
    NhanVien nvB = NhanVien("02 ","Nguyen Van B ",duan,phophong,1.3*10);
    NhanVien nvC = NhanVien("03 ","Nguyen Van C ",congtac,truongphong,1.5*10);
    NhanVien nvD = NhanVien("04 ","Nguyen Van D ",congtac,phophong,1.3*10);
    nvA.xuat();
    nvB.xuat();
    nvC.xuat();
    nvD.xuat();
}