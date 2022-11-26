#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int linear_search_string(string s, char key)
{
    if (s.length() == 0)
    {
        cout << "Empty String" << endl;
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == key)
        {
            cout<<i;
            return i;
        }
    }
    cout << "Element isn't exist in the array";
    return -1;
}

int main()
{

    string s = "ayan";
    linear_search_string(s,'a');
    return 0;
}
