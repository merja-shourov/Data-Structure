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

// print list
void print_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
//  size of node
int size(Node *head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        tmp = tmp->next;
        cnt++;
    }
    return cnt;
}

// insert Node
void insert_node(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;

    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}

// Insert at head
void insert_head(Node *&head, int val)
{
    Node *newNode = new Node(val);

    newNode->next = head;
    head = newNode;
}

// insert at tail
void insert_tail(Node *head, Node *tail, int val)
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

    int pos, val;
    cin >> pos >> val;

    if (pos == 0)
    {
        insert_head(head, val);
    }
    else if (pos > size(head))
    {
        cout << "Invald index\n";
    }
    else if (pos < size(head))
    {
        insert_node(head, pos, val);
    }
    else if (pos == size(head))
    {
        insert_tail(head, tail, val);
    }

    print_list(head);
    return 0;
}