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
        Student(int id, string name, float gpa){// parameter constructor 
            this->id = id;
            this->name = name;
            this->gpa = gpa;
        }
        void setId(int id){
            this->id = id;
        }
        int getId(){
            return id;
        }
        void setName(string name){
            this->name = name;
        }
        string getName(){
            return name;
        }
        void setGPA(float gpa){
            this->gpa = gpa;
        }
        float getGPA(){
            return gpa;
        }
        print(){
            cout<<"id: "<<id<<", name: "<<name <<", gpa: "<<gpa<<endl;
        }
};
int main(){
    Student minh;// khởi tạo 1 object là student
    Student nam = Student(2,"Nam",4.3);// gọi hàm khởi tạo có đối số
    minh.setId(5);
    cout<<minh.getId()<<endl;
    minh.setName("son");
    cout<<minh.getName()<<endl;
    minh.setGPA(9);
    cout<<minh.getGPA()<<endl;
    minh.print();// gọi hàm print
    nam.print();// gọi hàm xuât thông tin của nam
}