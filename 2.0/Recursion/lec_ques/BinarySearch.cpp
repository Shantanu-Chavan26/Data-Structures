#include<iostream>
using namespace std;
int Binary(int arr[] , int s , int e, int target )
{   
   //base case
   if(s>e)
   {
    return -1;
   }
   //Processing
   int mid= s+ (e-s)/2;
   
   //Recusrive relation
   if(arr[mid] == target)
   {
      return mid;
   }
   else if(arr[mid] < target )
   {
     return Binary(arr , mid+1 , e , target );
   }
   else if(arr[mid] > target)
   {
    return Binary(arr , s , mid-1 , target);
   }



}



int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    int size=7;
    int s=0;
    int e=size-1;
    int target=6;

  int FoundIndex = Binary(arr ,  s, e ,target );
   
   if(FoundIndex != -1)
   {
    cout<<"Answer found at="<<FoundIndex;
   }

   else 
   {
     cout<<"Target not found";
   }
   return 0 ;


}