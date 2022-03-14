// append(Array) --> thêm
// remove(int index) ---> xóa
// update(int index, int value)
// exist(int value);// value: 4 -->tồn tại: true/false
// getElement(int index);--> a[3]
// 1 2 3
// 3 2 4
// 1 2 3 3 2 4
#include<iostream>
using namespace std;
class Array{
    private:
        int size;
        int elements[10];
        const int MAX_SIZE = 10;
    public:
        Array();
        int getElement(int index);
        void setSize(int size){this->size=size;}
        int getSize(){return size;}
        void push(int element);
        Array append(Array other);
        void remove(int index);
        void print();
        
};
Array::Array(){
    size = 0;
}
void Array::push(int element){
    if(size<MAX_SIZE){
        size++;
        elements[size-1] = element;
    }
}
// 1 2 3 4 5 6
// 1 2 4 5 6
void Array::remove(int index){
    if(index<=size){
        for(int i=index;i<size;i++){
            elements[i] = elements[i+1];
        }
        size--;
    }
}
int Array::getElement(int index){
    return elements[index];
}
void Array::print(){
    for(int i=0;i<size;i++){
        cout<<elements[i]<<" ";
    }
}
//current 2 3 4
// other 6 7 8
// result 2 3 4| 6 7 8
Array Array::append(Array other){
    Array result;
    // thay doi size
    // result.setSize(size+other.getSize());
    // them mang minh dang xet
    for(int i=0;i<size;i++){
        result.push(elements[i]);
    }
    // them mang append
    for(int i=0;i<other.getSize();i++){
        result.push(other.getElement(i));
    }
    return result;
}
int main(){
    Array list;
    Array list2;
    // int index;
    // cin>>index;
    list.push(1);
    list.push(2);
    list.push(3);
    list.push(4);
    list.push(5);
    list2.push(3);
    list2.push(7);
    // list.remove(index);
    list.append(list2).print();
    return 0;
}