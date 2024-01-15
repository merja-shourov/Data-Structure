#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node *next;

        Node( int value ) : val(value), next(NULL) {};
        Node(){};
};

void reverse_print( Node *head ){

    if( head->next == NULL ) return;
    head = head->next;
    reverse_print(head);
    cout << head->val << " ";
}
int main(void){

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *tail = d;
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;


    reverse_print(head);
    return 0;
}