#include<iostream>
using namespace std;
int main(){
    int n;
    int temp;
    bool flag = false;
    cin>>n;
    while(n!=0){
        if((n%10)%2==0){
            flag = true;
            break;
        }
        n/=10;
    }
        if(flag){
            cout<<"TRUE";
        }
        else{
            cout<<"FALSE";
        }
    return 0;
}