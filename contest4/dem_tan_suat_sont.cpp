#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return n > 1;
}
int main()
{
    int n;
    vector<int> V;
    map<int, int> M;
    while (cin >> n)
    {
        if (isPrime(n))
        {
            V.push_back(n);
            M[n]++;
        }
    }
    for (int x : V)
    {
        if (M[x])
        {
            cout << x << " " << M[x] << endl;
            M[x] = 0;
        }
    }
}
