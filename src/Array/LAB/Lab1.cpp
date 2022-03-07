#include<iostream>
using namespace std;
int main(){
    int a,b,max;
    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;
    if(a<b){
        max = b;
    }
    else{
        max = a;
    }
    cout<<"max = "<<max;
    // cach 2
    int a,b,max;
    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;
    max = a>b?a:b;    
    return 0;
}