// Take a singly linked list as input and sort it in descending order. Then print the list.

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

// sort list

void print_list( Node *h ){

    if( h == NULL ) return;
    cout << h->val << " ";

    print_list( h->next );

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

    while (true)
    {
        int x;
        cin >> x;
        if (x == -1)
            break;
        input_node(head, tail, x);
    }

    sort_list(head);
    print_list(head);
    return 0;
}