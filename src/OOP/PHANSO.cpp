#include<iostream>
#include<fstream>
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
            cout<<tuso<<"/"<<mauso<<endl;
        }
        void readFile(string path){
            // mo file
            ifstream input(path);// input
            // doc file
            input>>tuso>>mauso;
            // dong file
            input.close();
        }
        void writeFile(string path){
            ofstream output(path);// mo file
            // ghi file
            output<<tuso<<"/"<<mauso;
            // dong file
            output.close();
        }
};
int main(){
    Phanso phanSo;
    string path = "phanso.in";
    string path2 = "phanso.out";
    phanSo.setTuso(9);
    cout<<phanSo.getTuso()<<endl;
    phanSo.setMauso(8);
    cout<<phanSo.getMauso()<<endl;
    phanSo.readFile(path);
    phanSo.print();
    phanSo.writeFile(path2);
    return 0;
}