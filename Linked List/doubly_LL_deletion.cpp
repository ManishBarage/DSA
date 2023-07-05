#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
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

void deleteNode(Node *&head, int position)
{
    // Deleting at first position
    if (position == 1)
    {
        Node *temp = head;

        head = temp->next;
        temp->next->prev = NULL;
        temp->next = NULL;

        delete temp;
    }
    else
    {
        // deleting at end or at any middle position

        Node *curr = head;
        Node *prev = NULL;
        int cnt = 1;

        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;

        delete curr;
    }
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
    Node *node2 = new Node(11);
    Node *node3 = new Node(12);
    Node *node4 = new Node(13);
    Node *head = node1;

    head->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = NULL;

    print(head);

    cout << "Deletion Operation : " << endl;
    deleteNode(head, 4);

    print(head);

    return 0;
}
