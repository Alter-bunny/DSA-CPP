#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    while (end > start)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
         cout << "Element found at index " << mid << endl;
            return 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    cout << "Element not found" << endl;
    return -1;
}

int main()
{
    int arr[] = {1, 4, 6, 8, 10, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key=10;
    binarySearch(arr, size, key);

    return 0;
}