#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node *next;
        Node *prev;

        Node( int val ){
            this->val = val;
            next = NULL;
            prev = NULL;
        }
};


void del_node_any_pos( Node *&head, Node *&tail, int size, int pos ){
    Node *tmp = head;
    if( pos == 0 ){
        Node *delNode = head;
        head = tmp->next;
        head->prev = NULL;
        delete delNode;
    }else if( pos < size-1){
        
        for( int i=0; i<pos-1; i++ ){
            tmp = tmp->next;
        }
        
        Node *delNode = tmp->next;
        tmp->next = tmp->next->next;
        tmp->next->prev = tmp;
        delete delNode;
    }else if( pos == size-1 ){
        Node *delNode = tail;
        tail = tail->prev;
        tail->next = NULL;
        delete delNode;
    }else{
        cout << "Please input valid position for delete\n";
    }
}
void print_node(Node *head ){
    Node *tmp = head;

    while (tmp != NULL )
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    
    cout << endl;
}

int node_size( Node *head ){
    int cnt = 0;
    Node *tmp = head;
    while (tmp != NULL )
    {
        /* code */
        cnt++;
        tmp = tmp->next;
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
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;

    int size = node_size(head);

    del_node_any_pos(head, tail,size, 10);
    print_node(head);
    return 0;
}