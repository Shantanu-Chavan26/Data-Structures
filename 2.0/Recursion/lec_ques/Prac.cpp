#include<iostream>
using namespace std;

void Seq(string original , string output , int index )
{
    // int mid=s+(e-s)/2;
    // if(s>e)
    // {
    //     return -1 ;

    // }
    // if(arr[mid]==target)
    // {
    //     return mid;
    // }
    // if(arr[mid] > target)
    // {
    //    return BinarySearch(arr , s,mid-1, target);
    // }
    // if(arr[mid] < target)
    // {
    //    return BinarySearch(arr , mid+1 , e,target);
    // }

    if(index>=original.length())
    {
        cout<<"->"<<output<<endl;
        return;
    }
    char ch = original[index];
    //exculde
     Seq(original  , output , index+1);

    //include
     output.push_back(ch);
     Seq(original  , output , index+1);
    
    


}
int main()
{

     string original="Shantanu";
     string output="";
     int index=0;


  Seq( original  , output , index);
  return 0 ;
    // int arr[]={1,2,3,4,5,6,7};
    // int size=7;
    // int index=0;

    // int s=0;
    // int e=size-1;
    // int target=4;
    // int ans=BinarySearch(arr , s,e, target);
      
    // if(BinarySearch(arr , s,e, target)!=-1)
    // {
    //     cout<<"Target Found!"<<ans;
    // }
    // else 
    // {
    //     cout<<"Target absent";
    // }
    // return 0 ;


}
