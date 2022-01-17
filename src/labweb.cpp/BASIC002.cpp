#include<iostream>
using namespace std;
int main(){
    int n;
    int s=0;
    int soTemp;
    cin>>n;
    while(soTemp!=0){
        soTemp = n%10;
        if(soTemp%2 == 0)
            s += soTemp;
        n /=10;
    }
    cout<<s;
    return 0;
}