#include<iostream>
#include<vector>
using namespace std;

bool Search(int arr[] , int index , int size ,int target)
{
   if(index>=size)
   {
    return false;
   }  

   if(arr[index]==target)
   {
    return true;
   } 

   return Search( arr ,  index+1,  size , target);

}

int main()
{
    int arr[]={1,2,3,4,5,6};
    vector<int>brr;
    int index;
    int target=6;
    int size=6;

    cout<<"The answer status is:"<<Search( arr ,  index , size , target);
    return 0;

}