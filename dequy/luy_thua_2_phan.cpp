#include <bits/stdc++.h>
using namespace std;
long long const mod = 1e9 + 7;
long long Pow(int a, int b)
{

    if (b == 0)
        return 1;
    long long temp = Pow(a, b / 2) % mod;
    if (b % 2 == 0)
        return (temp * temp) % mod;
    else
        return a % mod * (temp * temp) % mod;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << Pow(a, b);
    return 0;
}
