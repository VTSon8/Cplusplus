// size
// elements
// push(), pop(), empty(), full().
#include<iostream>
using namespace std;
class Stack{
    private:
        int size;
        int elements[10];
        const int MAX_SIZE = 10;
    public:
        Stack();
        void push(int element);
        void pop();
        void print();
};
Stack::Stack(){
    size = 0;
}
// 1 2 3 4 element
// element = 4 -->
void Stack::push(int element){
    // nếu chưa đầy
    if(size<MAX_SIZE){
        size++;
        elements[size-1] = element;
    }
    
}
void Stack::pop(){
    if(size>0){
        size--;
    }
}
void Stack::print(){
    for(int i=0;i<size;i++){
        cout<<elements[i]<<" ";
    }
}
int main(){
    Stack list;
    list.push(3);
    list.push(4);
    list.push(5);
    list.push(4);
    list.push(6);
    list.pop();
    list.pop();
    list.pop();
    list.print();
    return 0;
}