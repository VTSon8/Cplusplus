#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    int dem =0;
    int s=0;
    int temp;
    cin>>n;
    temp = n;
    while(temp != 0){
        s = s*10 + (temp%10);
        temp /=10;
        dem++;
    }     
    if(n==s){
        cout<<"TRUE";
    }
    else{
        cout<<"FALSE";
    }
    return 0;
}