// 3 5
// 1 2 3 4 5
// 3 4 2 3 4
// 5 3 2 1 3
// a[0][0] a[0][1] ... a[0][m-1]
//...
// a[n-1][0] a[n-1][1] ... a[n-1][m-1]
#include<iostream>
#define MAX_ROW 10
#define MAX_COL 10
using namespace std;
void nhap(int a[MAX_ROW][MAX_COL], int &m, int &n);
void xuat(int a[MAX_ROW][MAX_COL],int m,int n);
int main(){
    int a[MAX_ROW][MAX_COL];
    int m,n;
    nhap(a,m,n);
    xuat(a,m,n);
    return 0;
}
void nhap(int a[MAX_ROW][MAX_COL], int &m, int &n){
    cout<<"so hang,cot:";
    cin>>m>>n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<"a["<<i<<"]["<<j<<"]: ";
            cin>>a[i][j];
        }
    }
}
void xuat(int a[MAX_ROW][MAX_COL],int m,int n){
    cout<<"Xuat mang:"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){// xuat moi cot
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
}