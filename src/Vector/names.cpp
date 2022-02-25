// "Minh anh", "Hoang Nam", ...
// khai bao 1 vector ten la names kieu string
// them 4 string vao vector
// in ra danh sach ten minh vua them
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<string> names;
    // names.push_back("Minh anh");
    // names.push_back("Hoang Nam");
    // names.push_back("Son");
    // names.push_back("Dat");
    if(!names.empty()){// kiem tra khong trong
        for(string name:names){
            cout<<name<<" ";
        }
    }
    else{
        cout<<"vector rong";
    }
    return 0;
}