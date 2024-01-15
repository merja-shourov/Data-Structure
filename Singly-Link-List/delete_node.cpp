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

// del value
void delete_note(Node *head, int pos)
{

    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
        if( tmp->next == NULL ){
            cout << "invalid adress\n"; 
            return;
        }
    }

    Node *delNode = tmp->next;

    tmp->next = tmp->next->next;
    delete delNode;
}

void del_head( Node *&head ){
    Node *delNode = head;
    head = head->next;
    delete delNode;
}
void print_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

int size( Node *head ){
    Node *tmp = head;
    int cnt = 0;
    while ( tmp != NULL )
    {
        tmp = tmp->next;
        cnt++;
    }
    return cnt;   
}
int main(void)
{
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

    print_list(head);
    cout << endl;
    int pos;
    cin >> pos;

    // if( pos == 0 ){
    //     del_head(head);
    // }else if( pos < size(head) ){
    //     delete_note(head, pos);
    // }else{
    //     cout << "invalid position\n";
    // }
    
    delete_note(head, pos);
    print_list(head);

    return 0;
}