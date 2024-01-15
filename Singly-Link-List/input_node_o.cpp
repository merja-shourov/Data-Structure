#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node *next;

        Node( int value ) : val(value), next(NULL) {};
        Node(){};
};

// print list
void print_list( Node *head ){
    Node *tmp = head;
    while ( tmp != NULL )
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }    
}

void insert_tail( Node *&head, Node *&tail, int val ){
    
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
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        int val;
        cin >> val;

        if( val == -1 ) break;
        insert_tail(head, tail, val);
    }   
    
    print_list(head);
    return 0;
}