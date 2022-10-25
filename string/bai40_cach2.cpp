#include <bits/stdc++.h>
using namespace std;

bool check(string s)
{
	int res = (s[s.length() - 1] - '0') % 5;
	int lt = 1;
	for(int i = s.length() - 2 ; i >= 0 ; i--)
	{
		lt *= 2;
		lt %= 5;
		res = res + (s[i] - '0') * lt;
		res %= 5;
	}
	if(res == 0)
	{
		return true;
	}
	else return false;
}

int main()
{
	string s ; cin >> s;
	if(check(s)) cout << "YES";
	else cout<< "NO";
    return 0;
}
