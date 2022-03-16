#include<iostream>
using namespace std;
int main(){
    // pointer
    int *a;// a chứa địa chỉ (1 biến: chứa 1 địa chỉ)
    int b;// b chứa giá trị
    a = &b;// a lấy địa chỉ B
    b = 3;
    b = 7;
    cout<<*a;// lấy giá trị a
    return 0;
}