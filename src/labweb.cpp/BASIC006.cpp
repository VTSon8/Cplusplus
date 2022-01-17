#include<iostream>
using namespace std;
int main(){
    int n;
    for(;n>=100||n<=0;){
        cin>>n;
        if(n>=100 || n<=0){
            cout<<"Vui long nhap lai n!";
        }
    }
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            if(i+j-1 <= n)
                cout<<i+j-1<<" ";
            else
                cout<<i+j-n-1<<" ";
        }
        cout<<endl;
    }
    return 0;
}