#include<iostream>
using namespace std;
int main(){
    int n, s=0;
    int soTemp;
    cin>>n;
    soTemp = n;
    while(soTemp!=0){
        s += soTemp%10;
        soTemp/=10;
    }
    cout<<s;
    return 0;
}