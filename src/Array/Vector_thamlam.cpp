// so luong nhieu nhat
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void nhap(int a[],int &n);
int main(){
    int T;// so bo test
    int k;// khoi luong toi da
    int a[100];
    int n;
    cout<<"so bo test:";
    cin>>T;
    cout<<"So luong toi da:";
    cin>>k;
    while(T--){
        nhap(a,n);
        sort(&a[0],&a[n]);
        // 4 3 2 1, k = 5 --> pick = {4}, tongkhoiluong = 4
        //  pick = {4, 1}, tong khoi luong = 5
        int tongkhoiluong = 0;
        vector<float> pick;// rỗng
        for(int i=0; i<n; i++){
            if(tongkhoiluong+a[i]<=k){
                pick.push_back(a[i]);
                tongkhoiluong = tongkhoiluong+a[i];
            }
        }
        cout<<pick.size()<<" ";
        for(int i=0;i<pick.size();i++){
            cout<<pick[i]<<" ";
        }
    }
    return 0;
}
void nhap(int a[],int &n){
    cout<<"N = ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}
