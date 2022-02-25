// STL
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> numbers;// numbers = {}
    numbers.push_back(1);// numbers = {1}
    numbers.push_back(2);// numbers = {1,2}
    numbers.push_back(3);// numbers = {1,2,3}
    // cout<<numbers[2];
    numbers.pop_back();// loai bo phan tu cuoi
    // numbers = {1,2}
    cout<<numbers.size();
    return 0;
}