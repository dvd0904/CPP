#include <bits/stdc++.h>
using namespace std;
long long const mod = 1e9 + 7;
long long powMod(long long a, long long b, long long m)
{
    long long res = 1;
    a %= m;
    while (b)
    {
        if (b & 1)
            res = res * a % m;
    
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

long long Solve(long long a, long long b, long long c, long long m)
{
    long long res, ans;
    if (a == 0 && b == 0 && c == 0)
        return 1;
    res = powMod(b, c, m - 1); // fermat's little theorem
    ans = powMod(a, res, m);
    return ans;
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        long long a, b, c;
        cin >> a >> b >> c;
        cout << Solve(a, b, c, mod) << endl;
    }
    cout << endl;
    return 0;
}
