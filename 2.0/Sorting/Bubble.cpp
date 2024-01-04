#include <iostream>
#include <vector>
using namespace std;
void bubblesort(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
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
    bubblesort(arr, n);
    Print(arr, n);

    return 0;
}

