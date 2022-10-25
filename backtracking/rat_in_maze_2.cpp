#include <bits/stdc++.h>
using namespace std;

int n;
bool a[100][100];
bool used[100][100];
vector<string> res;

void Try(int i, int j, string s = "")
{
    if (a[1][1] == 0 || a[n][n] == 0)
        return;
    if (i == n && j == n)
    {
        res.push_back(s);
        return;
    }
    if (a[i + 1][j] && i != n && !used[i + 1][j])
    {
        used[i][j] = 1;
        Try(i + 1, j, s + "D");
        used[i][j] = 0;
    }
    if (a[i][j + 1] && j != n && !used[i][j + 1])
    {
        used[i][j] = 1;
        Try(i, j + 1, s + "R");
        used[i][j] = 0;
    }
    if (a[i - 1][j] && i != 1 && !used[i - 1][j])
    {
        used[i][j] = 1;
        Try(i - 1, j, s + "U");
        used[i][j] = 0;
    }
    if (a[i][j - 1] && j != 1 && !used[i][j - 1])
    {
        used[i][j] = 1;
        Try(i, j - 1, s + "L");
        used[i][j] = 0;
    }
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            cin >> a[i][j];
            used[i][j] = 0;
        }
    }
    Try(1, 1);
    if (res.empty())
        cout << -1 << endl;
    else
    {
        sort(res.begin(), res.end());
        for (string &i : res)
            cout << i << ' ' << endl;
    }
}