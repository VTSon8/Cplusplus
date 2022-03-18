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
// 3 4 4 3
// 3 6 6 3
class List{
    public:
        Node *head;
        List(){head = NULL;}
        void addNode(Node *node);
        void update(int source, int des);
        void remove(int data);
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
void List::update(int source, int des){
    Node *current = head;
    while(current){
        if(current->getData() == source){
            current->setData(des);// (*current).setData(des);
        }
        current = current->next;
    }
}
void List::remove(int data){
    // 1[-3-3-]2
    // current->getdata = 1, current->next->getdata = 3, current->next->next
    // 1 2
    // là ở giữa
    Node *current = head;
    while(current->next){
        if(current->getData()==data){
            current = current->next;
            cout<<"(" <<current->getData()<<")";
        }
        current = current->next;
    }
}
void List::print(){
    Node *current = head;
    // while(current){
    //     cout<<current->getData()<<" ";
    //     current = current->next;
    // }
    // cách in 2
    for(Node *current = head; current!=NULL;current=current->next){
            cout<<current->getData()<<" ";
    }
}
int main(){
    List list;
    Node *node1, *node2, *node3, *node4, *node5;
    node1 = new Node();
    node2 = new Node();
    node3 = new Node();
    node4 = new Node();
    node5 = new Node();
    node1->setData(3);
    node2->setData(5);
    node3->setData(5);
    node4->setData(5);
    node5->setData(4);
    list.addNode(node1);
    list.addNode(node2);
    list.addNode(node3);
    list.addNode(node4);
    list.addNode(node5);
    // list.update(5,6);
    list.print();
    cout<<"\n";
    list.remove(5);
    list.print();
    return 0;
}