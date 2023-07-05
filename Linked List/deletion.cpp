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

    //Destructor
    ~Node()
    {
        int val = this->data;

        if(this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout<<"Memory is free for data : "<<val<<endl;
    }
};
void deleteNode(int position,Node *&head)
{
    if(position==1)
    {
        Node *temp =head;
        head =head->next;

        //Free memory space
        temp->next =NULL;
        delete temp;
    }
    else
    {
        //Deleting any middle or last position

        Node *curr = head;
        Node *prev = NULL;

        int cnt =1;
        while(cnt<position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        prev->next = curr->next;

        //Free Memory for current Node
        curr->next = NULL;
        delete curr;
    }
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
    Node *head = node1;

    Node *node2 = new Node(11);
    Node *second = node2;

    Node *node3 = new Node(12);
    Node *third = node3;

    head->next = second;
    second->next=third;
    third->next = NULL;

    printList(head);
    deleteNode(2,head);
    printList(head);


    return 0;



}