#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Nhap chuoi: ";
    getline(cin,s);
    cout<<"Day so la: ";
    for(int i=0;i<s.size();i++){
        if(s[i]>=48 && s[i]<=57){
            cout<<s[i]; 
        }
    }
}