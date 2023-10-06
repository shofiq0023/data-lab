#include<iostream>
using namespace std;

class Node {
private:
    int data;
    Node* next;
public:
    Node(){
        data = 0;
        next = NULL;
    }

    Node(int d){
        data = d;
        next = NULL;
    }

    Node(int d, Node* n){
        data = d;
        next = n;
    }

    void setData(int x){
        data = x;
    }

    int getData(){
        return data;
    }

    void setNext(Node* x){
        next = x;
    }

    Node* getNext(){
        return next;
    }
};

class LinkedList {
private:
    Node* head;
public:
    LinkedList(){
        head = NULL;
    }

    void insertAtFront(int data){
        Node* n = new Node(data, head);
        head = n;
    }

    void insertAtBack(int data){
        Node* n = new Node(data);
        if(head == NULL){
            head = n;
        }
        else {
            Node* i;
            for(i=head; i->getNext()!= NULL; i=i->getNext()){
                ;
            }
            i->setNext(n);
        }
    }

    void printf(){
        Node* i;
        for(i=head; i->getNext() != NULL; i=i->getNext()){
            cout << i->getData() << endl;
        }
        cout << i->getData() << endl;
    }
};

int main(){
    LinkedList l;
    l.insertAtBack(5);
    cout << "insert at BACK (5)" << endl;
    l.printf();
    l.insertAtFront(10);
    cout << "insert at FRONT (10)" << endl;
    l.printf();
    l.insertAtBack(20);
    cout << "insert at BACK (20)" << endl;
    l.printf();
    return 0;
}
