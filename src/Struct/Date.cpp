#include<iostream>
using namespace std;
typedef struct Date{// khai bao kieu du lieu tu tao Date
    int day;
    int month;
    int year;
};
void nhap(Date &date);// khai bao ham nhap
void xuat(Date date, string format);// khai bao ham xuat
Date ngayTiepTheo(Date current);
int main(){
    // khai bao
    Date first,second;
    string format = "-";
    // xu li
    nhap(first);// gọi hàm nhập ngày
    xuat(first,format);//goi ham xuat ngay

    // tra ve
    return 0;
}
void nhap(Date &date){// xay dung ham nhap
    cout<<"Nhap ngay: ";
    cin>>date.day;
    cout<<"Nhap thang: ";
    cin>>date.month;
    cout<<"Nhap nam: ";
    cin>>date.year;    
}
void xuat(Date date, string format){// xay dung ham xuat
    cout<<date.day<<format<<date.month<<format<<date.year;
}
Date ngayTiepTheo(Date current){
    Date ketqua;
    // xu li
    switch(current.month){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12: 
            // xu li
            if(current.day<31){
                ketqua.day = current.day + 1;
                ketqua.month = current.month + 1;
                ketqua.year = current.year + 1;
            }
            else if(current.day==31){
                ketqua.day = 1;
                if(current.month==12){
                    ketqua.month = 1;
                    ketqua.year = ketqua.year + 1;
                }
                else{
                    ketqua.month = current.month + 1;
                     ketqua.year = current.year;
                }
            }
            break;
        case 2:
            // xu li
            if()
            break;
        case 4: case 6: case 9: case 11:
            //xu li
            break;
        default:
            cout<<"Thang khong hop le";
            break;
    }
    return ketqua;
}