#include <iostream>
#include<vector>
#include <limits.h>
using namespace std;



void Print(int arr[], int size, int index)
{
    if (index >= size)
    {
        return;
    }

    Print(arr, size, index + 1);

    cout << arr[index] << " ";
}


bool Search(int arr[], int size, int index, int target)
{
    if (index >= size)
    {
        return false;
    }

    if (arr[index] == target)
    {
        return true;
    }

    bool ans = Search(arr, size, index + 1, target);
    return ans;
}


void findmin(int arr[], int size, int index, int &mini)
{
    if (index >= size)
    {
        return; // EXIT STATEMENT
    }

    mini = min(mini, arr[index]);

    findmin(arr, size, index + 1, mini);
};


void Double(int arr[],int size,int index)
{
    if(index>=size)
    {
        return;
    }
   arr[index]= 2*arr[index];

   Double(arr,size,index+1);
}


void Max(int arr[], int size, int index, int &maxi)
{
     if (index >= size)
    {
        return; // EXIT STATEMENT
    }

    maxi = max(maxi, arr[index]);

    findmin(arr, size, index + 1, maxi);
}


void PrintDigit(int num,vector<int>&dig)
{
    if(num==0)
    {
        return;
    }
    int digit = num%10;

 
    PrintDigit(num/10,dig);

    dig.push_back(digit);
}

int main()
{
    int arr[5] = {0, 1, 2, 3, 4};
    int size = 5;
    int index = 5;
    int target = 6;
    int mini = INT_MAX; // most possible minimum value.
    int maxi=INT_MIN;
    int num=2345;
    vector<int>dig;

    Print(arr, size, index);
    Double(arr,size,index);
    PrintDigit( num ,dig);
    for(int num:dig)
    {
        cout<<"THe indiviula digits are:"<<num;
    }


    cout << "Search array using recursion is=" << Search(arr, size, target, index);

    findmin(arr, size, index, mini);
    Max(arr,size,index,maxi);

    return 0;
}