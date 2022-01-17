#include<iostream>
using namespace std;
int main(){
    int n, a[100];
    int s=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        s = s + a[i];
    }
    cout<<s;
    return 0;
}