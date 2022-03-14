//* * * *
//* * * *
//* * * *
// m = 3, n = 4
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
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
