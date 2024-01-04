#include<iostream>
using namespace std;

void Count(int n)
{     
    if(n==0 && n==1)
    {
    cout<<1<<endl;
    return;
    }
  
    cout<<n;
    Count(n-1);
     
}
int main()
{  
  Count(5);
  return 0;
   
}