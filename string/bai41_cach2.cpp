#include <bits/stdc++.h>
using namespace std;

bool check(string s , int x)
{
	int cnt = 0;
	for(int i = s.length() - 1 ; i >= 0 ; i--)
	{
		if(s[i] == '0')
		{
			++cnt;
		}
		else 
		{
			break;
		}
		if(cnt >= x)
		{
			break;
		}
	}
	return cnt >= x;
}

int main()
{
	string s ; int x; cin >> s >> x;
	if(check(s , x)) cout << "YES";
	else cout<< "NO";
    return 0;
}
