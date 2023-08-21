# include <bits/stdc++.h>
using namespace std;

class Student {
    int rollNumber;

    public :

    int age;

    Student(int r) {
        rollNumber = r;
    }

    int getRollNumber() {
        return rollNumber;
    }

};


int main() {
    Student s1(101);
    s1.age = 20;

    Student const s2 = s1;
    cout << s2.getRollNumber();
}
/*
class student{

    private:
        int age;
        char *name;

    public:
        // parameterised constructor
        student(int age, char *name){
            this -> age = age;

            // shallow copy
            this -> name = name;

            // // deep copy
            // this -> name = new char[strlen(name)+1];
            // strcpy(this->name, name);
        }
        void display(){
            cout << name << " " <<age <<endl;
        }

};

int main(){

    char name[] = "abcde";
    student s1(20, name);
    s1.display();

    name[3] = 'x';
    student s2(24, name);
    s2.display();
    s1.display();
}*/

/*
function to take user input-optimized

node * takeInput(){
    int data;
    cin >> data;
    node * head = null;
    node * tail = NULL:

    while(data != -1){
        node* newnode = new node(data);
        if(head == NULL){
            head = newnode;
            tail = newnode;
        }else{
            tail -> next = newnode;
            tail = newnode;
        }
        cin >> data;
    }
    return head
}

*/