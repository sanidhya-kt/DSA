#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void insertAtTail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
void makeACycle(node *&head, int pos)
{
    node *temp = head;
    node *startnode;
    int count = 1;
    while (temp->next != NULL)
    {
        if (count == pos)
        {
            startnode = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = startnode;
}
bool detectCycle(node *&head)
{
    node *slow = head;
    node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow)
        {
            return true;
        }
    }
    return false;
}
void removeACycle(node* &head)
{
  node *slow = head;
    node *fast = head;
    do
    {
        slow = slow->next;
        fast = fast->next->next;
    } while (slow!=fast);
    fast = head;
    while (slow->next != fast->next)
    {
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = NULL;
      
}

int32_t main()
{
    node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    insertAtTail(head, 7);
    insertAtTail(head, 8);
    insertAtTail(head, 9);
    makeACycle(head, 3);
    cout<<detectCycle(head)<<endl;
    removeACycle(head);
    cout<<detectCycle(head)<<endl;
    display(head);
    return 0;
}

