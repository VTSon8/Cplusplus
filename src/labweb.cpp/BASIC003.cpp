#include<iostream>
using namespace std;
int main(){
    int n;
    int temp;
    int dem=0;
    cin>>n;
    while(n!=0){
        temp = n%10;
        if(temp%2==0)
            dem++;
        n/=10;
    }
    cout<<dem;
}