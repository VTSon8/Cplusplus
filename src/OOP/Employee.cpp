// properties: id, name, salary
// 1. xây dựng class
// 2. xây dựng hàm khởi tạo
// 3. xây dựng print
// 4. xây dựng hàm main
#include<iostream>
using namespace std;
class Student{
    private:
        int id;
        string name;
        float salary;
    public:
        Student(){
            id = 0;
            name = "no name";
            salary = 5.5;
        };
        print(){
            cout<<"id: "<<id<<", name: "<<name<<", salary: "<<salary;
        }
};
int main(){
    Student son;
    son.print();
    return 0;
}