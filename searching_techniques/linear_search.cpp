#include <iostream>
using namespace std;

int linear_search(int arr[], int num, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            return 1;
        }
    }
    cout<<"Element isn't exist in the array";
    return -1;
}

int main()
{
    int size, num;
    cout << "Enter the size of array:- \n";
    cin >> size;
    int arr[size];
    cout << "Enter the elements of the array:- \n";
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element no. " + i <<endl;
        cin >> arr[i];
    }

    cout<<"Enter the number to found"<<endl;
    cin>>num;

    linear_search(arr,num,size);

    return 0;
}
