#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m, a, res;
    cin >> n >> m;
    if (m > n)
        cout << -1;
    else
    {
        if (n % 2 == 0)
            a = n / 2;
        else
            a = n / 2 + 1;
        if (a % m == 0)
            cout << a;
        else
        {

            res = (a / m + 1) * m;
            if (res <= n)
                cout << res;
            else
                cout << -1;
        }
    }
    return 0;
}
