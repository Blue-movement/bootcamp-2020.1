#include <iostream>

using namespace std;
//Linked List Class
class Node{
    public:
    int data;
    Node* next;
};

//Create a new node
Node* newNode(int data){
    Node* node = new Node();
    node->data = data;
    node->next = NULL;
    return node;
}
int main(){
    cout << "Hello world!";
    return 0;
}