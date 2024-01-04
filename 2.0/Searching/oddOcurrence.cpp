#include <iostream>
#include<vector>
using namespace std;

int FindOdd(vector<int>arr)
{
    int s = 0;
    int e = arr.size() - 1;
    int mid = s+(e - s) / 2;
    while (s <= e)
    {
        if (e == s)
        {
            return s;
        }
        if (mid & 1)
        {
            if (arr[mid - 1] == arr[mid])
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
        else
        {
            if (arr[mid] == arr[mid + 1])
            {
                s = mid + 2;
            }
            else
            {
                e = mid;
            }
        }
        mid=s+(e-s)/2;
    }
    return -1;
}
int main()
{
    vector<int>arr{10,10,2,2,3,3,4,4,6,5,5};
    int ansIndex=FindOdd(arr);

    cout<<"Final Ans"<<ansIndex;

}