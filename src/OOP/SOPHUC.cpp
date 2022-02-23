#include<iostream>
using namespace std;
class Sophuc{
    private:
        int phanthuc;
        int phanao;
    public:
        Sophuc(){
            phanthuc = 1;
            phanao = 2;
        };
        void setPhanThuc(int phanthuc){
            this->phanthuc = phanthuc;
        }
        int getPhanThuc(){
            return phanthuc;
        }
        print(){
            cout<<"Phan thuc: "<<phanthuc<<" Phan ao: "<<phanao<<endl;
            cout<<"So phuc: "<<phanthuc<<" + "<<phanao<<"i";
        }
};
int main(){
    Sophuc soPhuc;
    soPhuc.setPhanThuc(10);
    cout<<soPhuc.getPhanThuc();
    soPhuc.print();
    return 0;
}