#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *nxt;
    node *prev;
    node(int val)
    {
        data = val;
        nxt = NULL;
        prev = NULL;
    }
};
void insertAthead(node *&head, int val)
{
    node *n = new node(val);
    n->nxt = head;
    if (head != NULL)
    {
        head->prev = n;
    }
    head = n;
}
void InsertAttail(node *&head, int val)
{
    if (head == NULL)
    {
        insertAthead(head, val);
        return;
    }

    node *n = new node(val);
    node *temp = head;
    while (temp->nxt != NULL)
    {
        temp = temp->nxt;
    }
    temp->nxt = n;
    n->prev = temp;
}
void deleteAthead(node *&head)
{
    node *todelete = head;
    head = head->nxt;
    head->prev = NULL;
    delete todelete;
}
void deletion(node *&head, int pos)
{
    if (pos == 1)
    {
        deleteAthead(head);
        return;
    }
    node *temp = head;
    int count = 1;
    while (temp != NULL && count != pos)
    {
        temp = temp->nxt;
        count++;
    }
    temp->prev->nxt = temp->nxt;
    if (temp->nxt != NULL)
    {
        temp->nxt->prev = temp->prev;
    }

    delete temp;
}
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
    InsertAttail(head, 1);
    InsertAttail(head, 2);
    InsertAttail(head, 3);
    InsertAttail(head, 4);
    InsertAttail(head, 5);
    InsertAttail(head, 6);
    InsertAttail(head, 7);
    display(head);
    insertAthead(head, 9);
    display(head);
    deletion(head, 9);
    display(head);
    return 0;
}
