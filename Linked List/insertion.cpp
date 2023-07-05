#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Creating a Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, int data)
{
    // Create a new Node
    Node *temp = new Node(data);

    temp->next = head;
    head = temp;
}

void insertAtTail(Node *tail, int data)
{
    Node *temp = new Node(data);

    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node* &tail,Node *&head, int position, int data)
{
    //insert at start
    if(position == 1)
    {
        insertAtHead(head,data);
        return;
    }

    //pointing temp at head first                                                              
    Node *temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    //Inserting at end
    if(temp->next == NULL)
    {
        insertAtTail(tail,data);
        return;
    }


    // creating a new Node for data
    Node *nodeToInsert = new Node(data);

    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void printList(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{

    Node *node1 = new Node(10);

    // Head Pointing to node1
    Node *head = node1;
    Node *tail = head;

    /* printList(head);

     cout<<"Inserting at Head"<<endl;
     insertAtHead(head, 9);
     printList(head);

     insertAtHead(head, 8);
     printList(head);

     */

    cout << "Inserting at end" << endl;
    insertAtTail(tail, 11);
    insertAtTail(tail, 13);
    printList(head);
    cout<<"Tail : "<<tail->data<<endl;


    cout << endl
    
    << "Inserting at 2nd Position" << endl;
    insertAtPosition(tail,head, 2, 12);
    printList(head);
    cout<<endl;

    cout<<"Head : "<<head->data<<endl;
    cout<<"Tail : "<<tail->data<<endl;

    return 0;
}
