#include <iostream>
using namespace std;
int Fib(int n)
{   
    //base case
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    
    //processing Condn
    int ans=Fib(n-1)+Fib(n-2);
    return ans;
}
int main()
{
    cout<<Fib(7)<<endl;
    return 0;
}