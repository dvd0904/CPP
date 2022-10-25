#include <bits/stdc++.h>
using namespace std;

int n, a[100];
vector<string> VS;
vector<int> VI;

void res()
{
    string s = "";
    for (int x : VI)
        s += to_string(x) + " ";
    VS.push_back(s);
}

void Try(int i)
{
    for (int j = i + 1; j <= n; j++)
    {
        if (a[j] > a[i])
        {
            cout << "PUSH: " << a[j] << endl;
            VI.push_back(a[j]);
            if (VI.size() > 1)
                res();
            cout << "Goi ham Try " << j << endl;
            Try(j);
            cout << "Try " << j << " chay xong, POP: " << VI.back() << endl;
            VI.pop_back();
        }
    }
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    Try(0);
    sort(VS.begin(), VS.end());
    // for (string x : VS)
    //     cout << x << endl;
}