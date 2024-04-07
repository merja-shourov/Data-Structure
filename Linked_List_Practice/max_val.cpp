/**
 * 
 * ake a singly linked list as input and print the middle element. If there are multiple values in the middle print both.
*/
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node *next;

        Node( int value ) : val(value), next(NULL) {};
        Node(){};
};

    void input_node(Node *&head, Node *&tail, int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

// find max value
void max_val( Node *head ){
    int max = INT_MIN;
    for( Node *i = head; i != NULL; i = i->next ){
        if( i->val > max ){
            max = i->val;
        }
    }
    cout << max << endl;
}
int main(void){
    Node *head = NULL;
    Node *tail = NULL;

    while( true ){
        int x; cin >> x;
        if( x == -1 )
            break;
        input_node(head, tail, x);
    }

    max_val(head);
    return 0;
}