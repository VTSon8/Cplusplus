// #include<bits/stdc++.h>
#include<iostream>
// #include<vector>
using namespace std;
void print_v1(vector<float> a){
    for(int i=0;i<a.size();i++){
        cout<<a[i];
    }
}
// 3 4 5
void print_v2(vector<float> a){
    for(int i:a){// for each in C++
        cout<<i<<" ";
    }
}
int main(){
    // khai bao
    vector<float> a = vector<float>();// template in C++
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);
    a.pop_back();
    // duyet tung phan tu
    // cout<<a.size();
    print_v2(a);
    cout<<a.empty();
    return 0;
}