#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<string, int> m;

    cout << "insertion function : " << endl;
    // insertion
    // 1
    pair<string, int> pair1 = make_pair("manish", 1);
    m.insert(pair1);

    // 2
    pair<string, int> pair2("barage", 2);
    m.insert(pair2);

    // 3
    m["man"] = 2;

    cout << "Searching for the key : " << endl;
    // Srarching
    cout << m["manish"] << endl;
    cout << m["man"] << endl;

    // cout<<m.at("unavailabe")<<endl; //this will show error cause their is no such entry
    cout << m["unavailabe"] << endl;    // their is no such entry , but it will create that entry and return 0;
    cout << m.at("unavailabe") << endl; // now this will not show the error;

    cout << "Size function : " << endl;
    // Size
    cout << m.size() << endl;

    cout << "Count Function to check key is present or not : " << endl;
    // check if key is present or not (if present return 1 else return 0
    cout << m.count("manis") << endl;

    cout << "Erase function : " << endl;
    m.erase("man");
    cout << "size after erase : " << m.size() << endl;

    cout << "traversing map : " << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    cout << "traversing map using iterator : " << endl;

    unordered_map<string, int>::iterator it = m.begin();
    while (it != m.end())
    {
        cout << it->first << " " << it->second << endl;
        it++;
    }

    return 0;
}
