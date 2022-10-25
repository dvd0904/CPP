#include <bits/stdc++.h>
using namespace std;
int lastPos(int a[], int l, int r, int x)
{
    int res = -1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m] <= x)
        {
            res = m;
            l = m + 1;
        }
        else
            r = m - 1;
    }
    return res;
}
int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int &x : a)
    {
        cin >> x;
    }
    sort(a, a + n);

    int cnt = 0, c2 = 0;
    int temp = n;
    for (int i = 0; i < n; i++)
    {
        int r = lastPos(a, i + 1, temp - 1, k - a[i]);
        temp = r;
        if (r != -1)
            c2++;
    }
    int c1 = n - c2 * 2;
    cout << c1 + c2;
    return 0;
}