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
    print(){
        cout<<"Phan thuc: "<<phanthuc<<" Phan ao: "<<phanao<<endl;
        cout<<"So phuc: "<<phanthuc<<" + "<<phanao<<"i";
    }
};
int main(){
    Sophuc soPhuc;
    soPhuc.print();
    return 0;
}