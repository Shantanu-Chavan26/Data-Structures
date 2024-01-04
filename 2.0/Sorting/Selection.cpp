#include <iostream>
using namespace std;
#include <vector>
using namespace std;
void SelectionSort(vector<int> &arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i; // compare with j[i]s to find out the minimum element index.
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

void Print(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    vector<int> arr{5, 4, 3, 2, 1};
    int n = arr.size();
    cout << "Sorted array is: ";
    SelectionSort(arr, n);
    Print(arr, n);

    return 0;
}