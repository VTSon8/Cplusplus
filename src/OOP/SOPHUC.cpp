#include<iostream>
#include<fstream>
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
        void readFile(string path){
            ifstream input(path);
            input>>phanthuc>>phanao;
            input.close();
        }
        void writeFile(string path){
            ofstream output(path);
            output<<phanthuc<<" + "<<phanao<<"i";
            output.close();
        }
        print(){
            cout<<"Phan thuc: "<<phanthuc<<" Phan ao: "<<phanao<<endl;
            cout<<"So phuc: "<<phanthuc<<" + "<<phanao<<"i";
        }
};
int main(){
    Sophuc soPhuc;
    string path = "sophuc.in";
    string path2 = "sophuc.out";
    soPhuc.setPhanThuc(10);
    soPhuc.setPhanAo(5);
    cout<<soPhuc.getPhanThuc()<<endl;
    cout<<soPhuc.getPhanAo()<<endl;
    soPhuc.readFile(path);
    soPhuc.print();
    soPhuc.writeFile(path2);
    return 0;
}