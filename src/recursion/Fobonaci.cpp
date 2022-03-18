// 1 1 2 3
// 1 1 2 3 5
#include<iostream>
using namespace std;
int fibo(int n);
int main(){
    int n = 10;
    for(int i=0; i<n; i++){
        cout<<fibo(i)<<" ";
    }
    return 0;
}
int fibo(int n){
    if(n==0 || n==1){
        return 1;
    } else{
        return fibo(n-1) + fibo(n-2);
    }
}