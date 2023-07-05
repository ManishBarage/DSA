#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Constructor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }

    // Destructor to free memory
    ~Node()
    {
        int val = this->data;

        while (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory is free for data : " << val << endl;
    }
};
void insertNode(Node *&tail, int element, int d)
{
    // When list is empty
    if (tail == NULL)
    {
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        // Non-empty list
        // assuming element is present
        Node *curr = tail;

        while (element != curr->data)
        {
            curr = curr->next;
        }

        // When element found
        Node *temp = new Node(d);

        temp->next = curr->next;
        curr->next = temp;
    }
}
void deleteNode(Node *&tail, int element)
{
    // List is empty
    if (tail == NULL)
    {
        cout << "List is empty , please check again" << endl;
        return;
    }
    else
    {
        // Non-empty
        // assuming element is present
        Node *prev = tail;
        Node *curr = prev->next;

        while (curr->data != element)
        {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;

        //when only 1 Node is present
        if(curr == prev)
        {
            tail = NULL;
        }
        // when 2 or more than 2 nodes are present
        else if(tail == curr)
        {
            tail = prev;
        }
        curr->next = NULL;
        // Free Memory
        delete curr;
    }
}

void print(Node *tail)
{
    Node *temp = tail;
    if(tail == NULL)
        {
            cout<<"List is empty now"<<endl;
        }
    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}

int main()
{
    Node *tail = NULL;

    insertNode(tail, 5, 3);
    print(tail);
    insertNode(tail, 3, 5);
    print(tail);
    insertNode(tail, 5, 7);
    print(tail);
    insertNode(tail, 3, 4);
    print(tail);

    cout<<"Deletion Operation : "<<endl;
    deleteNode(tail,3);
    print(tail);
    return 0;
}
