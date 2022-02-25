#include<iostream>
#include<vector>
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
    vector<Student> students;   
    Student minh(1,"Minh",3.4);// khoi tao co tham so
    Student son(2, "Son", 8.9);
    Student ngoc(3,"Ngoc",5);
    students.push_back(minh);
    students.push_back(son);
    students.push_back(ngoc);
    for(Student student: students){
        student.print();
    }
   return 0;
}