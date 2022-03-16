// [head]-[]-[]-[tail]
#include<iostream>
using namespace std;
class Node{
    private:
        int data;
    public:
        Node *next;// móc xích
        void setData(int data){ this->data = data;}
        int getData(){return this->data;}
};
class List{
    public:
        Node *head;
        List(){head = NULL;}
        void addNode(Node *node);
        void print();
};
void List::addNode(Node *node){
    if(!head){//head khác null
        head = node;
        head->next = NULL;
    } else{
        Node *current = head;
        while(current->next){// chuyển đến node cuối cùng
            current = current->next;
        }
        current->next = node;
    }
}
void List::print(){
    Node *current = head;
    while(current){
        cout<<current->getData()<<" ";
        current = current->next;
    }
    // cách in 2
    for(Node *current = head; current!=NULL;current=current->next){
            cout<<current->getData()<<" ";
    }
}
int main(){
    List list;
    Node *node1, *node2, *node3, *node4;
    node1 = new Node();
    node2 = new Node();
    node3 = new Node();
    node4 = new Node();
    node1->setData(3);
    node2->setData(4);
    node3->setData(5);
    node4->setData(5);
    list.addNode(node1);
    list.addNode(node2);
    list.addNode(node3);
    list.addNode(node4);
    list.print();
    return 0;
}