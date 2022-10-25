#include <bits/stdc++.h>
using namespace std;
void inthuong(string &s)
{
    for (int i = 0; i < s.size(); i++)
    {
        s[i] = tolower(s[i]);
    }
}
char tach(string c)
{
    return c[0];
}
int check(string c)
{
    if (isalpha(c[0]))
        return 1;
    return 0;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    cin.ignore();
    map<string, int> mp;
    while (t--)
    {
        string s;
        getline(cin, s);
        inthuong(s);
        string tk = "", mk = "";
        for (int i = 0; i < s.size(); i++)
        {
            if (isdigit(s[i]))
                mk += s[i];
        }
        if (mk[2] == '0')
            mk.erase(2, 1);
        if (mk[0] == '0')
            mk.erase(0, 1);
        stringstream ss(s);
        string word;
        vector<string> v;
        while (ss >> word)
        {
            // cout << word << endl;
            if (check(word))
                v.push_back(word);
        }
        tk += v[v.size() - 1];
        for (int i = 0; i < v.size() - 1; i++)
        {
            tk += tach(v[i]);
        }
        mp[tk]++;
        if (mp[tk] > 1)
            tk += to_string(mp[tk]);
        tk += "@xyz.edu.vn";
        cout << tk << endl;
        cout << mk << endl;
    }
}