#include<iostream>
using namespace std;
int pow(int n)
{    
    //Base Case
    if(n==0)
    {
        return 1;
    }
    //Processing
    int ans= 2*pow(n-1);
    return ans;

}
int main()
{  

cout<<pow(3);
return 0;

}