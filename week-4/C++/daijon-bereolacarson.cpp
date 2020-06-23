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

//inserting the node at the start of the linked list
void push(Node** headRef, int data){
    Node* node = newNode(data);
    node->next = *headRef;
    *headRef = node;
}

//reverse the linked list
void reverseList(Node** headRef){
    Node* out = NULL;
    Node* curr = *headRef;

    //linked list traversal
    while(curr){
        Node* next = curr->next;
        curr->next = out;
        out = curr;
        curr = next;
    }
    *headRef = out;
}

//adds the nodes in the two linked lists
Node* addNodes(Node* p, Node* q, Node **head){
    Node *prevNode = NULL;
    int carry = 0;

    //sum = p + q (if there is carry p + q + carry)
    while(p || q){
        int sum = 0;
        if(p)
            sum += p->data;
        if(q)
            sum += q->data;
        sum += carry;

        //if sum of 2-digit number, reduce it and update carry
        carry = sum / 10;
        sum = sum % 10;
        Node *node = newNode(sum);

        //if the list is empty
        if(*head == NULL){
            prevNode = node;
            *head = node;
        }
        else{
            prevNode->next = node;
            prevNode = node;
        }
        
        //iterate to the next part of the list
        if(p)
            p = p->next;
        if(q)
            q = q->next;
    }
    if (carry > 0){
        prevNode->next = newNode(carry);
    }
}

//adds lists p and q
Node* addLists(Node* p, Node* q){
    Node* out = NULL;

    //reverse p and q
    reverseList(&p);
    reverseList(&q);

    addNodes(p, q, &out);
    reverseList(&out);

    return out;
}

int main(){
    cout << "Hello world!";
    return 0;
}