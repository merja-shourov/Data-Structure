#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node *next;

        Node( int value ) : val(value), next(NULL) {};
        Node(){};
};

// sort list
void sort_list( Node *head ){

    Node *tmp = head;
    for( Node* i=tmp; i->next != NULL ; i = i->next ){
        for( Node* j= i->next; j != NULL; j = j->next ){
            if( i->val > j->val ){
                swap(i->val, j->val);
            }
        }
    }
}

// print by recursion
void print_list( Node *head ){
    
    if( head == NULL ) return;
    cout << head->val << " ";
    print_list( head->next );
}

// input 
void input_tail( Node *&head, Node *&tail, int val ){
    Node *newNode = new Node(val);
    if( head == NULL ){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
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

    int val; cin >> val;
    input_tail(head, tail, val);
    sort_list(head);    
    print_list(head);
    return 0;
}