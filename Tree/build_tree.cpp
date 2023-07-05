#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildTree(node *root)
{
    cout << "Enter the data : " << endl;
    int data;
    cin >> data;
    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }
    cout << "Enter data for inserting in left of : " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right of : " << data << endl;
    root->right = buildTree(root->right);

    return root;
}

void levelOrdertraversal(node *root)
{
    queue<node *> q;
    q.push(root);

    while (!q.empty())
    {
        node *temp = q.front();
        cout << temp->data << " ";
        q.pop();

        if (temp->left != NULL)
        {
            q.push(temp->left);
        }

        if (temp->right != NULL)
        {
            q.push(temp->right);
        }
    }
}

void inOrderTraversal(node *root)
{
    if( root == NULL)
    {
        return;
    }

    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->right);
}

void preOrderTraversal(node *root)
{
    if(root == NULL)
    {
        return;
    }

    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void postOrderTraversal(node *root)
{
    if(root == NULL)
    {
        return;
    }

    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<" ";
}

int main()
{
    node *root = NULL;

    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    root = buildTree(root);

    cout <<endl<< "Printing the levelOrder traversal output : " << endl;
    levelOrdertraversal(root);

    cout <<endl<< "Printing the InOrder traversal output : " << endl;
    inOrderTraversal(root);

    cout <<endl<< "Printing the PreOrder traversal output : " << endl;
    preOrderTraversal(root);

    cout <<endl<< "Printing the PostOrder traversal output : " << endl;
    postOrderTraversal(root);
    return 0;
}
