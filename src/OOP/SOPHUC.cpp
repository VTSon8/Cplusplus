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
        // setter,getter
        void setPhanThuc(int phanthuc){
            this->phanthuc = phanthuc;
        }
        int getPhanThuc(){
            return phanthuc;
        }
        void setPhanAo(int phanao){
            this->phanao = phanao;
        }
        int getPhanAo(){
            return phanao;
        }
        print(){
            cout<<"Phan thuc: "<<phanthuc<<" Phan ao: "<<phanao<<endl;
            cout<<"So phuc: "<<phanthuc<<" + "<<phanao<<"i";
        }
};
int main(){
    Sophuc soPhuc;
    soPhuc.setPhanThuc(10);
    soPhuc.setPhanAo(5);
    cout<<soPhuc.getPhanThuc()<<endl;
    cout<<soPhuc.getPhanAo();
    soPhuc.print();
    return 0;
}