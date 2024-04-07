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

// insert at tail
void insert_tail(Node *&head, Node *&tail, int val)
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

// print
void print_list(Node *head)
{
    if (head == NULL)
        return;
    cout << head->val << " ";
    print_list(head->next);
}

// is same
int is_node_same(Node *head, Node *h)
{

    int flag = 1;
    while (head != NULL)
    {
        if (head->val != h->val)
        {
            flag = 0;
            break;
        }
        head = head->next;
        h = h->next;
    }
    return flag;
}

int main(void)
{
    Node *head = NULL;
    Node *tail = NULL;

    Node *h = NULL;
    Node *t = NULL;

    int cnt_a = 0, cnt_b = 0;

    for (int i = 0; i < 2; i++)
    {
        if (i == 0)
        {
            while (true)
            {
                int x;
                cin >> x;
                if (x == -1)
                    break;
                insert_tail(head, tail, x);
                cnt_a++;
            }
        }
        if (i == 1)
        {
            while (true)
            {
                int x;
                cin >> x;
                if (x == -1)
                    break;
                insert_tail(h, t, x);
                cnt_b++;
            }
        }
    }

    // print_list(head);
    // cout << endl;
    // print_list(h);
    if(cnt_a == cnt_b)
    {
        is_node_same(head, h) ? cout << "YES\n" : cout << "NO\n";
    }
    else{
        cout << "NO\n";
    }
    return 0;
}