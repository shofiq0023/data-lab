#include<iostream>
using namespace std;

class Node {
public:
    int key; // key is the data
    Node* p; // p is the parent
    Node* left;
    Node* right;

    Node(int data){
        key = data;
        p = NULL;
        left = NULL;
        right = NULL;
    }
};

class BinarySearchTree {
public:
    Node* root;
    int sum; // ========= IMPORTANT ============== //

    BinarySearchTree(){
        root = NULL;
        sum = 0; // ========= IMPORTANT ============== //
    }

    void treeInsert(int data){
        Node* z = new Node(data); // create a new node Z with data provided
        Node* y = NULL;
        Node* x = root;

        while(x != NULL){
            y = x;
            if(z->key <= x->key){
                x = x->left;
            }
            else {
                x = x->right;
            }
        }
        z->p = y;
        if(y == NULL){
            root = z;
        }
        else if(z->key <= y->key){
            y->left =  z;
        }
        else {
            y->right = z;
        }
    }

    // ============ IMPORTANT ================== //
    int calculate(Node* x){
        if(x != NULL){
            calculate(x->left);
            calculate(x->right);
            return sum += x->key;
        }

        return 0;
    }
};


int main(){
    BinarySearchTree tree;
    tree.treeInsert(20);
    tree.treeInsert(15);
    tree.treeInsert(25);
    tree.treeInsert(9);
    tree.treeInsert(40);
    tree.treeInsert(2);

    cout << tree.calculate(tree.root);
    return 0;
}