#include<iostream>
#include<vector>
using namespace std;
int insert(int arr[] , int size , int index , vector<int>&ans)
{
    if(index>=size)
    {
        return 0;
    }

    if(arr[index]%2==0)
    {
        ans.push_back(arr[index]);
    }
    
    return insert( arr ,  size , index+1 , ans);
}

int main()
{
   int arr[]={2,3,4,5,6};
   int index = 0;
   int size=5;

   vector<int>ans; //Saving answer in this array so we call by reference in the insertion function arguments.

   cout<<"Insertion operation vector is:"<<insert( arr ,  size , index , ans);
     for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
      return 0;
}








