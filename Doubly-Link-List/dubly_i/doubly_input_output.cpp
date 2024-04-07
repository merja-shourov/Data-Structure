#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node *next;
        Node *prev;
        Node( int value ) : val(value), next(NULL) , prev(NULL){};
        Node(){};
};

void input_at_tail( Node *&head, Node *&tail, int val){
    Node *newNode = new Node(val);

    if( head == NULL ){
        head = newNode;
        tail = newNode;
        return;
    }
    
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void print_obverse( Node *head ){
    Node *tmp = head;
    
    while ( tmp != NULL )
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;

}

int main(void){
    
        Node *head = NULL;
        Node *tail = NULL;
    // Node *head = new Node(10);
    // Node *a = new Node(20);

    // head->next = a;
    // a->prev = head;
    // Node *tail = a;

  
    while ( true )
    {
        int val;
        cin >> val;
        
        if( val == -1 ) break;
        input_at_tail(head, tail, val);
    }
    
    // input_at_tail(head, tail, 100);
    print_obverse(head);
    return 0;
}