#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int getLargestElementIndex(int arr[], int start, int end)
{
    int max = start;
    for (int i = start; i <= end; i++)
    {
        if (arr[i] > arr[max])
            max = i;
    }
    return max;
}

void selectionSort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int lastIndex = size - i - 1;
        int largestElementIndex = getLargestElementIndex(arr, 0, lastIndex);
        swap(&arr[lastIndex], &arr[largestElementIndex]);
    }
}

int main()
{
    int arr[] = {-34,0,5,7,1};
    int size = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, size);
    printArray(arr, size);
    return 0;
}