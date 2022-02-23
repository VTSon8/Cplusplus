// 3 5
// 1 2 3 4 5
// 3 4 2 3 4
// 5 3 2 1 3
// 4 3 2 3 4
// 4 3 2 3 2
// a[0][4], a[1][3],a[2][2],..., a[m-1][0] ==> i+j = m-1
// a[0][0] a[0][1] ... a[0][m-1]
//...
// a[n-1][0] a[n-1][1] ... a[n-1][m-1]
#include<iostream>
#define MAX_ROW 10
#define MAX_COL 10
using namespace std;
void nhap(int a[MAX_ROW][MAX_COL], int &m, int &n);
void xuat(int a[MAX_ROW][MAX_COL],int m,int n);
int max(int a[MAX_ROW][MAX_COL],int m,int n);
int min(int a[MAX_ROW][MAX_COL],int m,int n);
int maxHang(int a[MAX_ROW][MAX_COL], int m, int n, int row);// row=3 --> tim max dong 3 la bn 
int maxCot(int a[MAX_ROW][MAX_COL],int m, int n, int col);
int maxDuongCheoChinh(int a[MAX_ROW][MAX_COL],int m, int n);
int maxDuongCheoPhu(int a[MAX_ROW][MAX_COL],int m, int n);
int minDuongCheoChinh(int a[MAX_ROW][MAX_COL],int m, int n);
int minDuongCheoPhu(int a[MAX_ROW][MAX_COL],int m, int n);
int tongHangLonNhat(int a[MAX_ROW][MAX_COL],int m, int n);
int tongCotNhoNhat(int a[MAX_ROW][MAX_COL],int m, int n);
int tongHangNhoNhat(int a[MAX_ROW][MAX_COL],int m, int n);
int tongCotLonNhat(int a[MAX_ROW][MAX_COL],int m, int n);
int main(){
    int a[MAX_ROW][MAX_COL];
    int m,n;
    int row = 3;
    int col = 3;
    nhap(a,m,n);
    xuat(a,m,n);
    cout<<"Max: "<<max(a,m,n)<<endl;
    cout<<"Min: "<<min(a,m,n)<<endl;
    cout<<"Max hang: "<<maxHang(a,m,n,row)<<endl;
    cout<<"Max cot: "<<maxCot(a,m,n,col)<<endl;
    cout<<"Max duong cheo chinh: "<<maxDuongCheoChinh(a,m,n)<<endl;
    cout<<"Max duong cheo phu: "<<maxDuongCheoPhu(a,m,n)<<endl;
    cout<<"Min duong cheo chinh: "<<minDuongCheoChinh(a,m,n)<<endl;
    cout<<"Min duong cheo phu: "<<minDuongCheoPhu(a,m,n)<<endl;
    cout<<"Tong hang lon nhat: "<<tongHangLonNhat(a,m,n)<<endl;
    cout<<"Tong cot nho nhat: "<<tongCotNhoNhat(a,m,n)<<endl;
    cout<<"Tong hang nho nhat: "<<tongHangNhoNhat(a,m,n)<<endl;
    cout<<"Tong cot lon nhat: "<<tongCotLonNhat(a,m,n)<<endl;
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
}
int max(int a[MAX_ROW][MAX_COL],int m,int n){
    int max = a[0][0];// phần tử đầu tiên làm max
    // tìm max
    cout<<"Phan tu lon nhat cua mang la: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(max<a[i][j]){
                max = a[i][j];
            }
        }
    }
    return max;
}
int min(int a[MAX_ROW][MAX_COL],int m,int n){
    int min = a[0][0];
    cout<<"Phan tu nho nhat cua mang la: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(min>a[i][j]){
                min = a[i][j];
            }
        }
    }
    return min;
}
int maxHang(int a[MAX_ROW][MAX_COL], int m, int n, int row){
    int max = a[row][0];
    for(int i=0;i<n;i++){
        if(max < a[row][i]){
            max = a[row][i];
        }
    }
    return max;
}
int maxCot(int a[MAX_ROW][MAX_COL],int m, int n, int col){
    int max = a[0][col];
    for(int i=0;i<n;i++){
        if(max < a[0][col]){
            max = a[i][col];
        }
    }
    return max;
}
int maxDuongCheoChinh(int a[MAX_ROW][MAX_COL],int m, int n){
    int max = a[0][0];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==j && max < a[i][j]){
                max = a[i][j];
            }
        }
    }
    return max;
}
int maxDuongCheoPhu(int a[MAX_ROW][MAX_COL],int m, int n){
    int max = a[0][n-1];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(max < a[i][j] && i+j==m-1)
            max = a[i][j];
        }
    }
    return max;
}
int minDuongCheoChinh(int a[MAX_ROW][MAX_COL],int m, int n){
    int min = a[0][0];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==j && min>a[i][j]){
                min = a[i][j];
            }
        }
    }
    return min;
}
int minDuongCheoPhu(int a[MAX_ROW][MAX_COL],int m, int n){
    int min = a[0][n-1];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(min>a[i][j] && i+j==m-1){
                min = a[i][j];
            }
        }
    }
    return min;
}
int tongHangLonNhat(int a[MAX_ROW][MAX_COL],int m, int n){
    int max;
    for(int i=0;i<m;i++){
        int s = 0;
        for(int j=0;j<n;j++){
            s = s+a[i][j];
        }
        if(i==0){// hang dau tien
            max = s;
        } else {
            if(s>max){
                max = s;
            }
        }
    }
    return max;
}
int tongCotNhoNhat(int a[MAX_ROW][MAX_COL],int m, int n){
    int min;
    for(int j=0;j<n;j++){
        int s = 0;
        for(int i=0;i<m;i++){
            s = s + a[i][j];
        }
        if(j==0){
            min = s;
        }
        else{
            if(s<min){
                min = s;
            }
        }
    }
    return min;
}
int tongHangNhoNhat(int a[MAX_ROW][MAX_COL],int m, int n){
    int min;
    for(int i=0;i<m;i++){
        int s = 0;
        for(int j=0;j<n;j++){
            s = s + a[i][j];
        }
        if(i==0){
            min = s;
        }
        else{
            if(s<min){
                min = s;
            }
        }
    }
    return min;
}
int tongCotLonNhat(int a[MAX_ROW][MAX_COL],int m, int n){
    int max;
    for(int j=0;j<n;j++){
        int s = 0;
        for(int i=0;i<m;i++){
            s = s + a[i][j];
        }
        if(j==0){
            max = s;
        }
        else{
            if(s<max){
                max = s;
            }
        }
    }
    return max;
}