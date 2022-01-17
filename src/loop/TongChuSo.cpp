// Tong chu so chan
// tinh tong cac chu so 
// tinh tong cac so le
// thu vien
#include<iostream>
#include<cmath>
using namespace std;
// ham
int tinhTong(int n);
int tinhTongSoChan(int m);
int main(){
    // khai bao
    int n;
    // xu ly
    cin>>n;
    cout<<tinhTong(n)<<endl;
    cout<<tinhTong(n)-tinhTongSoChan(n);
    // tra ve
    return 0;
}
int tinhTong(int n){
    int tong = 0;
    while(n!=0){
        tong = tong + n%10;
        n/=10;
    }
    return tong;
}
int tinhTongSoChan(int m){
    int tong = 0;
    while(m!=0){
        if(m%2==0){// n = 112
            tong = tong + m%10; // tong=2
        }
        m/=10;// n = 11
    }
    return tong;
}