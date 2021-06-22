#include <iostream>
using namespace std;

int common(int n, int k)
{
    if(k > n)
        return 0;
    else if(n == k || k == 0)
        return 1;
    else
        return common(n-1, k) + common(n, k-1);
}


int main()
{
    int n, k;
    cout << "Please enter two integers n and k:";
    cin >> n >> k;
    cout << "C(n,k) = " << common(n, k) << endl;
}