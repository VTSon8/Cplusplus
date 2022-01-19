#include<iostream>
#define MAX 100
using namespace std;
class Vehicles{
    public:
        int tocdo;
    public:
        Vehicles();
        Vehicles(int tocdo);
        virtual double maxSpeed() = 0;
};
class Ferrari:Vehicles{
    private:
        string mausac;
        double hesotocdo;
    public:
        Ferrari(int tocdo = 0):Vehicles{tocdo}{
            mausac = "xanh";
            hesotocdo = 0;
        }
        Ferrari(string mausac, double hesogoc, int tocdo):Vehicles{tocdo}{
            this->mausac = mausac;
            this->hesotocdo = hesotocdo;
        }
        virtual double maxSpeed();
        void input();
        void output();
        bool operator>(Ferrari &other);
};
Vehicles::Vehicles(){
    this->tocdo = 0;
}
Vehicles::Vehicles(int tocdo){
    this->tocdo = tocdo;
}
double Ferrari::maxSpeed(){
    return this->tocdo*this->hesotocdo;
}
void Ferrari::input(){
    cout<<"mau sac:";
    cin>>this->mausac;
    cout<<"he so toc do:";
    cin>>this->hesotocdo;
    cout<<"toc do:";
    cin>>this->tocdo;
}
void Ferrari::output(){
    cout<<"mau sac:"<<this->mausac<<endl;
    cout<<"toc do:"<<this->tocdo<<endl;
    cout<<"he so toc do:"<<this->hesotocdo<<endl;
    cout<<"max speed:"<<this->maxSpeed();
}
bool Ferrari::operator>(Ferrari &other){
    return this->maxSpeed()>other.maxSpeed();
}
int main(){
    Ferrari danhsach[MAX];
    Ferrari max;
    int soluong;
    cout<<"So luong: ";
    cin>>soluong;
    for(int i=0;i<soluong;i++){
        cout<<"a["<<i<<"]:"<<endl;
        danhsach[i].input();
    }
    for(int i=0;i<soluong;i++){
        cout<<"a["<<i<<"]:"<<endl;
        danhsach[i].output();
        cout<<endl;
    }
    max = danhsach[0];
    for(int i=1;i<soluong;i++){
        if(danhsach[i]>max){
            max = danhsach[i];
        }
    }
    cout<<"xe co toc do lon nhat :"<<endl;
    max.output();
    return 0;
}