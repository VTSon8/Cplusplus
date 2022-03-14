// 1 2 3
// 5 -->5 4 1 2 3
// push, front, pop, empty, full
class Queue{
    private:
        int size;
        int elements[10];
        const int MAX_SIZE = 10;
    public:
        Queue();
        void push(int element);
        void pop();
        bool empty();
        bool full();
        int front();
};
    Queue::Queue(){
    size = 0;
}
void Queue::push(int element){
    if(size<MAX_SIZE){
        size++;
        elements[0] = element;
    }
}
void Queue::pop(){
    if(size>0){
        size--;
    }
}
bool Queue::empty(){
    return size == 0;
}
bool Queue::full(){
    return size == MAX_SIZE;
}
int Queue::front(){
    return elements[0];
}
int main(){
    return 0;
}