#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // Initializing the vector v1
    vector<int> v1;

    // Methods to give values in vector
    v1.push_back(1); // push the value at the end of the vector
    v1.push_back(3);
    v1.push_back(1);

    // Modification of values same as array
    v1[1] = 2;

    // Vector iteration methods
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;

    vector<int>::iterator it;
    for (it = v1.begin(); it != v1.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    for (auto element : v1)
    {
        cout << element << " ";
    }
    cout << endl;

    // Deleting element
    v1.pop_back();

    // swapping two vectors
    vector<int> v2(3, 50); // vector is 50,50,50
    swap(v1, v2);

    for (auto element : v1)
    {
        cout << element << " ";
    }
    cout << endl;

    return 0;
}