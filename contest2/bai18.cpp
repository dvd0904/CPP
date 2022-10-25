#include <bits/stdc++.h>

using namespace std;
int snt(long long n)
{
    if (n < 2)
    {
        return 0;
    }
    int count = 0;
    for (long long i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    return 0;
}
int main()
{
    long long n;
    int dem = 0;
    cin >> n;
    while (n > 0)
    {
        int a = n % 10;
        if (snt(a) == 1)
            dem++;
        n /= 10;
    }
    cout << dem;
    return 0;
}
