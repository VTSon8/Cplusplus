#include<iostream>
#include<cmath>
using namespace std;
class Phanso{
    private:
        int tuso;
        int mauso;
    public:
        Phanso(){
            tuso = 5;
            mauso = 6;
        };
        print(){
            cout<<"Tu so: "<<tuso<<"Mau so: "<<mauso<<endl;
            cout<<"Phan so: "<<(float)tuso/mauso; 
        }
};
int main(){
    Phanso phanSo;
    phanSo.print();
    return 0;
}