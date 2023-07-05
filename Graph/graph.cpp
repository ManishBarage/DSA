#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;

class graph
{
public:
    unordered_map<int, list<int>> adj;

    void insert(int u, int v, bool direction)
    {
        // direction = 0 -> undirected
        // direction = 1 -> directed

        // create edge from u to v
        adj[u].push_back(v);

        if (direction == 0)
        {
            adj[v].push_back(u);
        }
    }

    void print()
    {
        for (auto i : adj)
        {
            cout << i.first << " -> ";

            for (auto j : i.second)
            {
                cout << j << " , ";
            }
            cout << endl;
        }
    }
};
int main()
{
    int n, m;
    cout << "Enter the number of Nodes : ";
    cin >> n;
    cout << "Enter the number of edges : ";
    cin >> m;

    graph g;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;

        // creating undirected graph
        g.insert(u, v, 0);
    }

    g.print();
    return 0;
}
