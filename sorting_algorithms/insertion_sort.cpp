#include <iostream>
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

void insertionSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int j = i - 1, key = arr[i];
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int arr[] = {-34, 0, 5, 7, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, size);
    printArray(arr, size);
    return 0;
}
