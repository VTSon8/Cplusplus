// 1 1 2 3
// 1 1 2 3 5
#include<iostream>
using namespace std;
int fibo(int n);
int main(){
    int n = 10;
    int x = 4;
    bool tontai = false;
    int i = 0;
    int _fibo = 1;// fibo = 1 (fibo dautien)
    while(_fibo<x){
        _fibo = fibo(i); // tim lai fibo
        if(x==_fibo){// tim thay
            tontai = true;
            break;
        }
        i++;
    }
    cout<<tontai;
    return 0;
}
int fibo(int n){
    if(n==0 || n==1){
        return 1;
    } else{
        return fibo(n-1) + fibo(n-2);
    }
}