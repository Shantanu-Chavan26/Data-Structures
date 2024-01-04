#include<iostream>
using namespace std;
int minimum(int arr[] , int index , int size)
{
     if(index>=size)
     {
        return arr[index]; //Entire array is traversed.
     }

     //processing
     int mini = min(mini, arr[index]);

     //Recursive relation
     minimum(arr,size,index+1);

}
int main()
{
    int arr[]={11,2,34 , 55,66,6};
    int size=6;
    int index=0;
    minimum(arr,size,index);
    return 0;

}