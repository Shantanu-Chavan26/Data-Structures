#include<iostream>
#include<vector>
using namespace std;
int FirstOccurence(vector<int>arr,int target)
{
    int s=0;
    int e=arr.size()-1;
    int mid=s+(e-s)/2;
    int ans=-1;

    while(s<=e)
    {
        if(arr[mid]==target)
        {
            ans=mid;
            e=mid-1;
        }
        else if(target>arr[mid])
        {
            s=mid+1;
        }
        else if (target<arr[mid])
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int LastOcc(vector<int>arr,int target)
{
    int s=0;
    int e=arr.size()-1;
    int mid=s+(e-s)/2;
    int ans=-1;

    while(s<=e)
    {
        if(arr[mid]==target)
        {
            ans=mid;
            s=mid+1;
        }
        else if(target>arr[mid])
        {
            s=mid+1;
        }
        else if (target<arr[mid])
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
// int TotalOccurence(vector<int>arr,int target)
// {
//     int s=0;
//     int e=arr.size()-1;
//     int ans=0;
//     while(s<=e)
//     {
//         ans=FirstOccurence-LastOcc+1;
//     }
//     return ans;

// }

int main()
{
    vector<int>arr{1, 1, 2, 2, 2, 2, 3};
    int target=10;
    

    int First=FirstOccurence(arr,target);
    cout<<"The First occurence is="<<First<<endl;
    
    int Last=LastOcc(arr,target);
    cout<<"The Last occurence is="<<Last<<endl;

    int Total=(Last-First)+1;
    cout<<"The Total occurence is="<<Total<<endl;

    return 0;
}



