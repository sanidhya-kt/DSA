/*
program to reverse a linked list(whole)
method 1: iterative method
method 2 : recursive method
*/
#include <iostream>
using namespace std;
// class node
class node
{
public:
    int data;
    node *nxt;
    // constructor
    node(int val)
    {
        data = val;
        nxt = NULL;
    }
};
// inserting the node from tail in empty L. list
void Insertattail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->nxt != NULL)
    {
        temp = temp->nxt;
    }
    temp->nxt = n;
}
// iterative method to reverse a linked list
node *reverse(node *&head)
{
    node *preptr = NULL;
    node *currptr = head;
    node *nxtptr;
    while (currptr != NULL)
    {
        nxtptr = currptr->nxt;
        currptr->nxt = preptr;
        preptr = currptr;
        currptr = nxtptr;
    }
    return preptr;
}
//recursive method to reverse a linked list
node *reverserecursion(node *&head)
{
    //basecase
    if(head == NULL || head -> nxt == NULL)
    {
        return head;
    }
    
    node *newhead = reverserecursion(head->nxt);
    head -> nxt -> nxt=head;
    head->nxt=NULL;
    return newhead;
}
// display function to display the linked list.
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->nxt;
    }
    cout << "NULL" << endl;
}

int32_t main()
{
    node *head = NULL;
    Insertattail(head, 101);
    Insertattail(head, 102);
    Insertattail(head, 103);
    Insertattail(head, 104);
    Insertattail(head, 105);
    display(head);
    node *newhead = reverserecursion(head);
    display(newhead);
    return 0;
}