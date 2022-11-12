#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cout << "Enter the number of rows:" << endl;
    cin >> row;

    cout << "Enter the number of columns:" << endl;
    cin >> col;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == 0 || i == row - 1 || j == 0 || j == col-1)
            {
                cout << "*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout << endl;
    }
}