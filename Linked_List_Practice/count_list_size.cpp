/**
 * Take two singly linked lists as input and check if their sizes are same or not.
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

// input 
void input_node( Node *&head, Node *&tail, int val ){
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

    int count_1 = 0;
    int count_2 = 0;
    int t=2;
    while (t--)
    {
        while (true)
        {
          int val;
          cin >> val;

          if( val == -1 ) break;
          input_node(head, tail, val);  
          (t==1) ?count_1++ : count_2++; 
        }
    }
    
    (count_1 == count_2 ) ? cout << "SAME   \n" : cout << "NO\n";
    return 0;
}