/**
 * You will be given two singly linked list of integer values as input. You need to check if all the elements of both list are same which means both list are same. * If they are same print "YES" otherwise print "NO".
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

// is both list is same
void is_list_same( Node *head, Node *h )
{
    Node *tmp_1 = head;
    Node *tmp_2 = h;
    int flag = 1;
    while ( tmp_2->next != NULL )
    {
        tmp_1 = tmp_1->next;
        tmp_2 = tmp_2->next;
        if( tmp_1->val != tmp_2->val ){
            flag = 0;
            break;
        }
    }
    
    flag ? cout << "YES\n" : cout << "NO\n";
}
int main(void)
{
    Node *head = NULL;
    Node *tail = NULL;

    Node *h = NULL;
    Node *t = NULL;
    int count_1 = 0;
    int count_2 = 0;
    for (int i = 1; i <= 2; i++)
    {
        while (true)
        {
            int val;
            cin >> val;
            if (i == 1)
            {
                if (val == -1)
                    break;
                input_node(head, tail, val);
                count_1++;
            }
            else
            {
                if (val == -1)
                    break;
                input_node(h, t, val);
                count_2++;
            }
        }
    }

    if (count_1 == count_2 )
    {
        // print funcion
        is_list_same(head, h);
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}