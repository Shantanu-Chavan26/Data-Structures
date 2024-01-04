//Find the peak element in a mountain array.
#include<iostream>
#include<vector>
using namespace std;

int FindPeak(vector<int>arr)
{     int n=arr.size();
      int s=0;
      int e=n-1;
      int mid=s+(e-s)/2;
      while(s<e)
      {
          if(arr[mid]<arr[mid+1])
          {
            s=mid+1;
          }
          else
          {
            e=mid;
          }
          mid=s+(e-s)/2;
        
      }
      return s;
}

int main()
{
    vector<int>arr{1,2,3,4,5,8,7,6,5};
    int ans=FindPeak(arr);

  cout<<"The peak element index is ="<<ans;

  return 0;
}