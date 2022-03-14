//* * * *
// * * *
//* * * *
// * * *
// m = 4, n = 4
#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"m = ";
    cin>>m;
    cout<<"n = ";
    cin>>n;
    for(int i=0;i<m;i++){
        if(i%2==0){
            for(int j=0;j<n;j++){
                cout<<"* ";
            }
        }
        else{
            for(int j=0;j<n-1;j++){
                cout<<" *";
            }            
        }
        cout<<endl;
    }
    return 0;
}