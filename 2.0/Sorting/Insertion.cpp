// Insertion sort implimentation
#include<iostream>
#include<vector>
using namespace std;

int Print(vector<int> &arr)
{   

    for(int i=0;i<arr.size();i++)
    {
      cout<<arr[i];
    }
  cout<<endl;
}

void InsertionSort(vector<int> &arr) {
  int n = arr.size();
  // i = 0, chhod deta hu
  for (int i = 1; i < n; ++i) {
    int key = arr[i];
    int j = i - 1;

    // Move elements of arr[0..i-1] that are greater than
    // key to one position ahead of theri current position
    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = key; // insertion
  }
}

int main()
{
    vector<int>arr{22,33,44,55,11};
    
     
    InsertionSort(arr);
    cout<<"The sorted array using insertion Sort is:";
    Print(arr);
    


}