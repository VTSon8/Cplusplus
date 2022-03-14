// T bộ test
// cho n đồ vật, khối lượng a[i](float).
//hỏi số vật nhỏ nhất sao cho khi bỏ vào valy
// và nhận được tổng khối lượng lớn nhất và chất được trong valy có thể chưas tối đa k (kg)
#include<iostream>
using namespace std;
void nhap(int a[], int &n);
void xuat(int a[], int n);
void sapxep(int a[],int n);
int main(){
    int t;
    int n;
    int a[1000];
    int k;
    int temp;
    cout<<"T = ";
    cin>>t;
    cout<<"K = ";
    cin>>k;
    while(t--){
        nhap(a,n);
        sapxep(a,n);
        xuat(a,n);
        cout<<endl;
        // pick 
        int khoiluong = 0;
        int soluong = 0;
        cout<<"\n";
        for(int i=0;i<n;i++){// duyet tung phan tu
            if(a[i]+khoiluong<=k){// khoi luong cu + khoi luong vat dang xet
                khoiluong = khoiluong + a[i];// tinh khoi luong moi
                soluong++;
                cout<<a[i]<<" ";
            }
        }
        cout<<"So luong:"<<soluong<<", khoi luong:"<<khoiluong<<endl;
    }
    return 0;
}
void nhap(int a[], int &n){
    cout<<"n = ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}
void xuat(int a[], int n){
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
}
void sapxep(int a[],int n){
    int temp = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]<a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
