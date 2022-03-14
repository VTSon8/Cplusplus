//****
// ***
//  **
//   *
#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"m = ";
    cin>>m;
    for(int i=m;i>=1;i--){
        for(int k=i;k<m;k++){
            cout<<" ";
        }        
        for(int j=0;j<i;j++){

            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}