#include<iostream>
using namespace std;
bool checkSorted(int arr[] , int size , int index)
{   

    if(index>=size)
    {
        return true;
    }
    if(arr[index] > arr[index - 1])
    {
      bool ans= checkSorted(arr , size , index+1);
      return ans;
    }
    else 
    {
        return false;
    }
}
int main()
{
    int arr[]={1,2,3,8,5};
    int size=5;
    int index=1;

    if(checkSorted(arr , size , index))
    {
        cout<<"Array Sorted";
    }
    else 
    {
        cout<<"Not Sorted";
    }
    return  0 ;

}