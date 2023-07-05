#include<iostream>
using namespace std;
#include<vector>
#include<string>

int compress(vector<char> &chars)
{
    int i=0;
    int ansIndex = 0;
    int n = chars.size();

    while(i<n)
    {
        int j = i+1;

        while(j<n && chars[i] == chars[j])
        {
            j++;
        }

        //Store older character
        chars[ansIndex++] = chars[i];

        int count = j-i;

        if(count>1)
        {
            //Converting count to string
            string cnt = to_string(count);
            for(char ch: cnt)                                                                    
            {
                chars[ansIndex++] = ch;
            }

        }
        i=j;
    }

    return ansIndex;
}

int main()
{
    char chars[20] = {"a","a","b","b","b","c","c","c"};

    return compress(chars);
}
