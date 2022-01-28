#include<iostream>
using namespace std;
typedef struct SinhVien{
    string hoTen;
    int namSinh;
    string gioiTinh;
    float gpa;
};
void nhap(SinhVien &sinhvien);
void xuat(SinhVien sinhvien);
int main(){
    SinhVien sinhvien;
    nhap(sinhvien);
    xuat(sinhvien);
    return 0;
}
void nhap(SinhVien &sinhvien){
    cout<<"Ho ten: ";
    cin>>sinhvien.hoTen;
    cout<<"Nam sinh: ";
    cin>>sinhvien.namSinh;
    cout<<"Gioi tinh: ";
    cin>>sinhvien.gioiTinh;
    cout<<"GPA: ";
    cin>>sinhvien.gpa;
}
void xuat(SinhVien sinhvien){
    cout<<sinhvien.hoTen<<" ";
    cout<<sinhvien.namSinh<<" ";
    cout<<sinhvien.gioiTinh<<" ";
    cout<<sinhvien.gpa;
}