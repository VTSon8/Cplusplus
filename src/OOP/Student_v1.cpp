#include<iostream>
using namespace std;
class Student{// Animal, People,.. 
    private:// access modifier
    //properties
        int id;
        string name;
        float gpa;
    // method
    public:
        Student(){//default constructor
            id = 0;
            name = "no name";
            gpa = 3.4;
        };
        print(){
            cout<<"id: "<<id<<", name: "<<name <<", gpa: "<<gpa;
        }
};
int main(){
    Student minh;// khởi tạo 1 object là student
    minh.print();// gọi hàm print

}