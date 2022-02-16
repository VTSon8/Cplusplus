// ly 1 = nuoc
// ly 2 = sua
// ly temp = nuoc cua ly 1;
// ly 1 = sua cua ly 2;
// ly 2 = nuoc cua ly temp; 
#include<iostream>
using namespace std; 
void swap_v1(int &a, int &b){// a = 3, b = 4
    int temp = a;// temp = 3, a = 3, b = 4
    a = b;// temp = 3, a = 4, b = 4
    b = temp;// temp = 3, a = 4, b = 3
}
int main(){
    int a = 3,b = 4;
    swap_v1(a,b);
    cout<<"a = "<<a<<",b = "<<b;
    return 0;
}