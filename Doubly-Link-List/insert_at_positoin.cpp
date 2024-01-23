#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node *next;
        Node *prev;

        Node( int value ) : val(value), next(NULL), prev(NULL) {};
        Node(){};
};

// print

void print_obverse( Node *head ){
    Node *tmp = head;
    
    while ( tmp != NULL )
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;

}

void print_reverse( Node *tail ){
    
    Node *tmp = tail;
    while ( tmp != NULL )
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

// insert node at positioin
void insert_node_at_pos( Node *head, int pos, int val ){

    Node *newNode = new Node(val);
    Node *tmp = head;

    for( int i=1; i<=pos-1; i++ ){
        tmp = tmp->next;
    }

    newNode->next = tmp->next;
    tmp->next = newNode;
    
    newNode->prev = tmp;
    newNode->next->prev = newNode;
}

// fint node size;
void node_size( Node *head ){
    Node *tmp = head;
    int count = 0;
    
}
int main(void){
    
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *tail = c;

    // connection build
    head->next = a;
    a->prev = head;

    a->next = b;
    b->prev = a;

    b->next = c;
    c->prev = b;

    // Insert at any position
    insert_node_at_pos(head, 2, 100);
    // Print 
    print_obverse(head);
    print_reverse(tail);
    return 0;
}