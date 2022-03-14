// T bộ test
// cho n đồ vật, khối lượng a[i](float).
//hỏi số vật lớn nhất nhất sao cho khi bỏ vào valy mà có thể chất được trong valy có kl k (kg)
#include<iostream>
using namespace std;
void nhap(int a[],int &n);
void xuat(int a[],int n);
void sapxep(int a[],int n);
int main(){
    int t;
    int a[100];
    int n;
    int k;
    cout<<"T = ";
    cin>>t;
    cout<<"K = ";
    cin>>k;
    while(t--){
        int khoiluong = 0;
        int soluong = 0;
        nhap(a,n);
        sapxep(a,n);
        xuat(a,n);
        cout<<"\n";
        for(int i=0;i<n;i++){
            if(a[i]+khoiluong<=k){// khong vuot qua k, toi da la k
                khoiluong = khoiluong + a[i];
                soluong ++;
                cout<<a[i]<<" ";
            }
        }
        cout<<"So luong: "<<soluong<<"; Khoi luong: "<<khoiluong<<endl;
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
void xuat(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
void sapxep(int a[],int n){
    int temp = 0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}