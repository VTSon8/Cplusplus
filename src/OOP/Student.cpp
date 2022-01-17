#include<iostream>
using namespace std;
class Student{
    // du lieu
    private:
        string id;
        string name;
        float math;
        float physical;
        float chemistry;
    // hanh vi
    public:
        void input();
        void output();
};
void Student::input(){
    cout<<"ID: ";
    cin>>id;
    cout<<"Name: ";
    cin>>name;
    cout<<"Math: ";
    cin>>math;
    cout<<"Physical: ";
    cin>>physical;
    cout<<"Chemistry: ";
    cin>>chemistry;
}
void Student::output(){
    cout<<"ID:"<<id;
    cout<<"Name: "<<name;
    cout<<"Math: "<<math;
    cout<<"Physical: "<<physical;
    cout<<"Chemistry: "<<chemistry;
}
int main(){
    Student son;
    son.input();
    son.output();
    return 0;
}