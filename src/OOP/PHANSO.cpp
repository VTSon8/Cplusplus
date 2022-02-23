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
        void setTuso(int tuso){
            this->tuso = tuso;
        }
        int getTuso(){
            return tuso;
        }
        void setMauso(int mauso){
            this->mauso = mauso;
        }
        int getMauso(){
            return mauso;
        }
        print(){
            cout<<"Tu so: "<<tuso<<" Mau so: "<<mauso<<endl;
            cout<<"Phan so: "<<(float)tuso/mauso; 
        }
};
int main(){
    Phanso phanSo;
    phanSo.setTuso(9);
    cout<<phanSo.getTuso()<<endl;
    phanSo.setMauso(8);
    cout<<phanSo.getMauso()<<endl;
    phanSo.print();
    return 0;
}