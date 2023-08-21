/*
    program to reverse K nodes in linked list
    we use iterative method for first 2 node
    then call recursion for remaining node's
    time complexity: O(n)->we traverse the linked list exactly once....
*/

# include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        data = val;
        next = NULL;
    }
};
void insertAtTail(node* &head,  int val)
{
    node *n = new node(val);
    if(head == NULL){
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp= temp->next;
    }
        temp->next=n;

}
void display(node* head)
{
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
node* reverseK(node* &head, int k)
{
    node* preptr = NULL;
    node* currptr = head;
    node* nextptr;
    int count = 0;
    while (currptr!=NULL && count<k)
    {
        nextptr = currptr->next;
        currptr->next = preptr;
        preptr = currptr;
        currptr = nextptr;
        count++;
    }
    if(nextptr!=NULL)
    {
        head->next = reverseK(nextptr, k);
    }
    return preptr;
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
    display(head);
    int k =2;
    node* newhead = reverseK(head, k);
    display(newhead);
    return 0;
}
