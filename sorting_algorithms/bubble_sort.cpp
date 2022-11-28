#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] <<" ";
    }
    cout<<endl;
}

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
            // printArray(arr,size);
        }
    }
}

int main()
{
    int arr[] = {3, 4, 5, 1, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, size);
    printArray(arr, size);

    return 0;
}