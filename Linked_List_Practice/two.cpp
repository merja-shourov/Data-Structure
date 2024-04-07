/**
 * TTake a singly linked list as input and print the reverse of the linked list.
 */
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int value) : val(value), next(NULL){};
    Node(){};
};

// input
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

// print reverse

void print_reverse( Node *h ){

    if( h == NULL ) return;
    print_reverse( h->next );
    cout << h->val << endl;

}

// print value by pos 
void print_by_pos( Node *head, int pos ){

    Node *tmp = head;
    for( int i=1; i<= pos; i++ ){
        tmp = tmp->next;
    }
    cout << tmp->val << " ";
}
void sort_list( Node *head ){

    for( Node *i = head; i->next != NULL; i = i->next ){
        for( Node *j=i->next; j != NULL; j = j->next ){
            if( i->val < j->val ){
                swap( i->val, j->val );
            }
        }
    }
}
int main(void)
{

    Node *head = NULL;
    Node *tail = NULL;


    int count = 0;
    while (true)
    {
        int val;
        cin >> val;

        if (val == -1)
            break;
        input_node(head, tail, val);
        count++;
    }

    sort_list(head);
    if( count%2 == 0 ){

        int middle = count/2;
        print_by_pos(head, middle-1);
        print_by_pos(head, middle);
        
    }else{
        print_by_pos(head, count/2);
    }
    return 0;
}