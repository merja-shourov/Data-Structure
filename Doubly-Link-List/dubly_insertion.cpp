#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        Node *next;
        Node *prev;
        int val;
        
        Node( int val ) : val(val) , next(NULL) , prev(NULL) {};

};

// Print start
void print_normal( Node *head ){

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
// print end

// Insert start
void insert_at_head(Node *&head, Node *&tail , int val ){
    Node *newNode = new Node(val);

    if( head == NULL ){
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insert_at_any_position( Node *head, int pos, int value ){
    Node *newNode = new Node(value);
    
    Node *tmp = head;
    for( int i=0; i<pos-1; i++ ){
        tmp = tmp->next;
    }

    newNode->next = tmp->next;
    tmp->next = newNode;
    newNode->prev = tmp;
    newNode->next->prev = newNode;

}

void insert_at_tail( Node *&tail , int val ){
    Node *newNode = new Node(val);
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
// insert end


// find size
int node_size( Node *head ){
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL )
    {
        tmp = tmp->next;
        cnt++;
    }
    return cnt;   
}

int main(void){
    
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *tail = c;
    
    head->next = a;
    a->next = b;
    a->prev = head;
    b->next = c;
    b->prev = a;
    c->prev = b;
    
    int pos, val;
    cin >> pos >> val;

    if( pos == 0 ){
        insert_at_head(head, tail, val);
    }else if( pos < node_size(head) ){
        insert_at_any_position(head, pos, val);
    }else if( pos == node_size(head) ){
        insert_at_tail(tail, val);
    }else{
        cout << "Invalid\n";
    }

    print_normal(head);
    return 0;
}