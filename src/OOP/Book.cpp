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
int main(){
    // khoi tao the loai
    Theloai theloai;
    string id;
    string name;
    Theloai ngontinh = Theloai("001","Ngon Tinh");
    Theloai trinhtham = Theloai("002","Trinh Tham");
    Theloai tho = Theloai("003","Tho");
    // nhap 1 the loai
    // ngontinh.nhap();
    // xuat 1 the loai
    ngontinh.xuat();

}