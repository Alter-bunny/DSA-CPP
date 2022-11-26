#include <iostream>
#include <vector>
using namespace std;
int is_even(int num)
{
    string s = to_string(num);
    // cout << s << endl;
    int length = s.length();
    // cout << length;
    if (length % 2 == 0)
    {
        return 1;
    }
    return 0;
}
int findNumbers(vector<int> &nums)
{
    int count = 0;
    for (auto x : nums)
    {
        if (is_even(x))
        {
            count++;
        }
    }
    return count;
}

int main()
{
    vector<int> v1{1, 2, 44, 567};
    // for (auto x : v1)
    // {
    //     cout << x << endl;
    // }
    // findNumbers(v1);
    cout << findNumbers(v1);
}

// Hello World
