// append(Array) --> thêm
// remove(int index) ---> xóa
// update(int index, int value)
// exist(int value);
// getElement(int index);--> a[3]
class Array{
    private:
        int size;
        int arrays[10];
        const int MAX_SIZE = 10;
    public:
        Array();
        void append(int array);
        void remove(int index);
};
Array::Array(){
    size = 0;
}
void Array::append(int array){
    if(size<MAX_SIZE){
        size++;
        arrays[size-1] = array;
    }
}
void Array::remove(int index){
    if(size>0){
        size--;
    }
}
int main(){
    return 0;
}