// program to print ,search,delete,  and insert at head in a linked list.....

# include <iostream>
using namespace std;

class node{         // class define
    public:
    int data;
    node* next;

    node(int val){          //constructor
        data =  val;
        next = NULL;
    }
};

// insertion at head
void insertAthead(node* &head, int val){
    node* n = new node(val);
    n->next = head;
    head = n;
}
// insertion at tail
void insertAttail(node* &head, int val){
    node* n = new node(val);
    if(head == NULL){
        head = n;
        return;
    }
    node*temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp -> next = n;
}
//searching
bool search(node* head, int key){
    node* temp = head;
    while(temp != NULL){
        if(temp->data==key){
            return true;
        }
        temp = temp->next;
    }
    return false;
}
// deletetion
void Deleteathead(node* &head){
    node* todelete = head;
    head = head->next;
    delete todelete;
}
void deletation(node* &head, int val){
    if(head == NULL){
        return;
    }
    if(head->next == NULL){
        Deleteathead(head);
        return;
    }
    node* temp = head ;
    while (temp->next->data != val)
    {
        temp =temp->next;
    }
    node* todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}
void display(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp -> next;
    }
    cout << "NULL" << endl;
}

int32_t main()
{
    node* head = NULL;
    insertAttail(head, 1);
    insertAttail(head, 2);
    insertAttail(head, 3);
    display(head);
    insertAthead(head, 5);
    display(head);
    cout<<search(head, 4)<<endl;
    //deletation(head, 2);
    Deleteathead(head);
    display(head);

    return 0;
}
