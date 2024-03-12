#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int value) : val(value), next(NULL), prev(NULL){};
    // Node(){};
};

void print_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
        
    }
    cout << endl;
}

// insert at any position
void insert_at_any_position( Node *head, int pos, int val ){
    Node *newNode = new Node( val );

    Node *tmp = head;
    for( int i=1; i<=pos-1; i++ ){
        tmp = tmp->next;
    }

    newNode->next = tmp->next;
    tmp->next = newNode;

    newNode->prev = tmp;
    tmp->next->prev = newNode;
}

// insert at head
void insert_at_head( Node *&head , int val ){
    Node *newNode = new Node(val);

    newNode->next = head;
    head->prev = newNode;

    head = newNode;
}

// Insert at tail 
void insert_at_tail( Node *&tail, int val ){
    Node *newNode = new Node(val);

    tail->next = newNode;
    newNode->prev = tail;

    tail = newNode;
}
int main(void)
{

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *tail = b;

    head->next = a;
    a->next = b;
    a->prev = head;
    b->prev = a;

    print_list(head);

    insert_at_any_position( head, 2, 100);
    insert_at_head( head, 99 );
    insert_at_tail(tail, 88);
    
    print_list(head);
    return 0;
}