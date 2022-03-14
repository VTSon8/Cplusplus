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
        for(int j=0;j<n;j++){
            if(i%2==0){
                n = n - 1;
                cout<<"* ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    return 0;
}