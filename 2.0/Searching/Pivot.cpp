#include<iostream>
#include<vector>
using namespace std;

int FindPivot(vector<int>arr)
{
    int s=0;
    int e=arr.size()-1;
    int mid=s+(e-s)/2;

    while(s<=e)
    {
        if(s==e)
        {
            return s;

        }
        else if(arr[mid]>arr[mid+1])
        {
            return mid;
        }
        else if(arr[mid]<arr[mid-1])
        {
            return mid-1;
        }
        else if(arr[s]>arr[mid])
        {
            e=mid+1;
        }
        else
        {
            s=mid+1;
        }
        

int mid=s+(e-s)/2;
    }
    
    return -1;
}



int main()
{
   vector<int>arr{12,14,16,2,4,6,8,10};
   cout<<"Pivot element is:"<<FindPivot;

   return 0;
}