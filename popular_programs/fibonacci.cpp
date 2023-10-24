#include <iostream>
using namespace std;

// Using for loop
int fib(int n)
{
    int a = 0, b = 1, c;
    if (n == 0)
        return a;
    for (int i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

// Recursive function to print fibonacci series
int fib_rec(int n)
{
    if (n == 0 || n == 1)
        return n;
    return fib_rec(n - 1) + fib_rec(n - 2);
}

int main()
{
    int n;
    cout << "Enter the number of terms for fibonacci series: ";
    cin >> n;
    cout << "Fibonacci series: ";
    for (int i = 0; i < n; i++)
        cout << fib(i) << " ";
    cout << endl;
    cout << "Fibonacci series using recursion: ";
    for (int i = 0; i < n; i++)
        cout << fib_rec(i) << " ";
    return 0;
}