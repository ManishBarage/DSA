#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev = NULL;
    Node *next = NULL;

    // Constructor
    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};
void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);

    temp->next = head;
    head->prev = temp;
    // Update head
    head = temp;
}


void insertAtTail(Node* &tail,int data)
{
    Node *temp = new Node(data);

    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void insertAtPosition(Node* &head,Node* &tail,int position,int data)
{
    if(position==1)
    {
        insertAtHead(head,data);
        return;
    }

    Node *temp = head;
    int cnt = 1;
    while (cnt < position-1)
    {
        temp = temp->next;
        cnt++;
    }

    if(temp->next == NULL)
    {
        insertAtTail(tail,data);
        return;
    }

    Node* nodeToInsert =new Node(data);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
    
}


void print(Node *head)
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
    Node *head = node1;
    Node* tail = node1;

    print(head);

    cout<<"Inserting at Head : "<<endl;
    insertAtHead(head, 9);
    print(head);
    insertAtHead(head, 8);
    print(head);
    insertAtHead(head, 7);
    print(head);

    cout<<endl<<"Inserting at Tail : "<<endl;
    insertAtTail(tail,11);
    print(head);

    cout<<endl<< "Inserting at position 3 : "<<endl;
    insertAtPosition(head,tail,3,15);
    print(head);


    return 0;
}
