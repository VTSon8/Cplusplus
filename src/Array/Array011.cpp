// 4
// 3 2 1 4 2
// 1:1 2:2 3:1 4:1
#include<iostream>
using namespace std;
void nhapMang(int a[],int &n);
void xuatMang(int a[],int n);
void sapXep(int a[],int n);
void tanSuat(int a[],int n);
int main(){
    int a[100];
    int n;
    nhapMang(a,n);
    sapXep(a,n);
    tanSuat(a,n);
    return 0;
}
void nhapMang(int a[],int &n){
    cout<<"Nhap n:";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}
void xuatMang(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
}
void sapXep(int a[],int n){
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]<a[i]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
void tanSuat(int a[],int n){
    int tansuat = 1;
    // 1 2 2 2 3 4
    sapXep(a,n);
    for (int i = 0; i < n; i++)
    {
        if(a[i]==a[i+1]){
            tansuat++;
        }
        else{
            cout<<a[i]<<":"<<tansuat<<" ";
            tansuat=1;
        }
    }
}