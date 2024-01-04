#include <iostream>
using namespace std;
int factorial(int n)
{
    // Base case
    if (n == 1)
    {
        return 1;
    }
    if (n == 0)
    {
        return 0;
    }

    // recursive relation
    int recursionCond = factorial(n - 1);
    // We can also say that int ans= n*factorial(n-1);
    // Processing
    int finalAns = n * recursionCond;
    return finalAns;
}
int main()
{
    cout << factorial(5) << endl;
    return 0;
}