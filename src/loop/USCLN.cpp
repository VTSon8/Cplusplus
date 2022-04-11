// 5 8 --> USCLN của a,b
// 5 - 2
#include<iostream>
using namespace std;
int UCLN(int a, int b){
    int ketqua = 1;
    // tim so nho hon
    int min = (a>b)?b:a;// toán tử điều kiện
    // tim usc
    for(int i = min;i>=2;--i){
        if(a%i==0 && b%i==0){
            ketqua = i;
            break;
        }
    }
    return ketqua;
}
int main(){
    int a,b;
    a = 8;
    b = 6;
    cout<<UCLN(a,b);
    return 0;
}