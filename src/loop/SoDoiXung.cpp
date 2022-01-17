// 121 22322 132231 1112111
// thu vien
#include<iostream>
#include<cmath>
using namespace std;
// ham
int main(){
    // khai bao
    int n;
    int temp;
    int sodao=0;
    int dem = 0, soluong = 0;
    // xu ly
    cin>>n;
    // c1
    temp = n;// n =121
    // while(temp !=0){// temp=121 // temp=12 // temp=1
    //     sodao = sodao*10 + temp%10;//0*10 + 1 = 1 // 1*10 + 2 = 12 // 12*10 + 1 = 121
    //     temp/=10;// temp = 12 //temp = 1// temp=0;
    // }
    // if(n==sodao){
    //     cout<<"Day la so doi xung!"<<endl;
    // }
    // c2
    temp = n;
    while(temp!=0){
        soluong++;
        temp/=10;
    }
    temp = n;
    while(temp != 0){// 321
        sodao = sodao + temp%10*pow(10,soluong - dem - 1);//321
        temp/=10;// 12
        dem++;// 1
    }
    if(n==sodao){
        cout<<"TRUE";
    }
    else{
        cout<<"FALSE";
    }
    // tra ve
    return 0;
}