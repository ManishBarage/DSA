#include <iostream>
using namespace std;

class TrieNode
{
public:
    char data;
    TrieNode *childeren[26];
    bool isTerminal;

    TrieNode(char ch)
    {
        data = ch;

        for (int i = 0; i < 26; i++)
        {
            childeren[i] = NULL;
        }

        isTerminal = false;
    }
};

class Trie
{
public:
    TrieNode *root;

    Trie()
    {
        root = new TrieNode('\0');
    }

    void insert(TrieNode *root, string word)
    {
        if (word.length() == 0)
        {
            root->isTerminal = true;
            return;
        }

        TrieNode *curr;
        int index = word[0] - 'a';

        if (root->childeren[index] != NULL)
        {
            // Char is present . Move to next
            curr = root->childeren[index];
        }
        else
        {
            // Char is absent . create new Node
            curr = new TrieNode(word[0]);
            root->childeren[index] = curr;
        }

        // recursion
        insert(curr, word.substr(1));
    }

    void insertWord(string word)
    {
        insert(root, word);
    }

    

    bool search(TrieNode *root, string word)
    {
        if (word.length() == 0)
        {
            return root->isTerminal;
        }

        int index = word[0] - 'a';
        TrieNode *curr;
        if (root->childeren[index] != NULL)
        {
            curr = root->childeren[index];
        }
        else
        {
            return false;
        }

        // Recursion
        return search(curr, word.substr(1));
    }

    bool searchWord(string word)
    {
        return search(root, word);
    }
};

int main()
{

    Trie *t = new Trie();
    t->insertWord("abcd");

    cout << "Found or Not : " << t->searchWord("abc");
    return 0;
}
