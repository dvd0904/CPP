#include <bits/stdc++.h>
using namespace std;
#define ll long long

// 1
bool ham1(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return n > 1;
}

// 2
int ham2(int n)
{
    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

// 3
int ham3(int n)
{
    int sum = 0;
    while (n)
    {
        int r = n % 10;
        if (r % 2 == 0)
        {
            sum += r;
        }
        n /= 10;
    }
    return sum;
}

// 4
int ham4(int n)
{
    ll sum = 0;
    while (n > 0)
    {
        int r = n % 10;
        if (r == 2 || r == 3 || r == 5 || r == 7)
        {
            sum += r;
        }
        n /= 10;
    }
    return sum;
}

// 5
int ham5(int n)
{
    int k, s = 0;
    while (n > 0)
    {
        k = n % 10;
        s = s * 10 + k;
        n /= 10;
    }
    return s;
}

// 6
int ham6(int n)
{
    int cnt = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cnt++;
            while (n % i == 0)
                n /= i;
        }
    }
    if (n != 1)
        cnt++;
    return cnt;
}

// 7
int ham7(int n)
{
    int temp;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
                n /= i;
            temp = i;
        }
    }
    if (n != 1)
        return n;
    return temp;
}
// 8
int ham8(int n)
{
    while (n != 0)
    {
        if (n % 10 == 6)
            return 1;
        n = n / 10;
    }
    return 0;
}

// 9
int ham9(int n)
{
    ll s = 0, k;
    while (n)
    {
        k = n % 10;
        s += k;
        n /= 10;
    }
    if (s % 8 == 0)
        return 1;
    return 0;
}

// 10

int gt(int n)
{
    int res = 1;
    for (int i = 1; i <= n; i++)
    {
        res *= i;
    }
    return res;
}

int ham10(int n)
{
    int sum = 0;
    while (n)
    {
        sum += gt(n % 10);
        n /= 10;
    }
    return sum;
}

// 11
int ham11(int n)
{
    int r = n % 10;
    n /= 10;
    while (n)
    {
        if (n % 10 != r)
        {
            return 0;
        }
        n /= 10;
    }
    return 1;
}

// 12
int ham12(int n)
{
    int r = n % 10;
    n /= 10;
    while (n != 0)
    {
        if (n % 10 > r)
        {
            return 0;
        }
        n /= 10;
    }
    return 1;
}

// 13
int demcs(int n)
{
    int cnt = 0;
    while (n)
    {
        ++cnt;
        n /= 10;
    }
    return cnt;
}

int ham13(int n)
{
    int sum = 0;
    int d = demcs(n);
    while (n)
    {
        sum += pow(n % 10, d);
        n /= 10;
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;
    cout << ham1(n) << endl;
    cout << ham2(n) << endl;
    cout << ham3(n) << endl;
    cout << ham4(n) << endl;
    cout << ham5(n) << endl;
    cout << ham6(n) << endl;
    cout << ham7(n) << endl;
    cout << ham8(n) << endl;
    cout << ham9(n) << endl;
    cout << ham10(n) << endl;
    cout << ham11(n) << endl;
    cout << ham12(n) << endl;
    cout << ham13(n) << endl;

    return 0;
}
