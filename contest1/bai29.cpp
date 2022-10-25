#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long a, b, c, d;
	cin >> a >> b >> c >> d;
	if (a > 0 && b > 0 && c > 0 && d > 0)
	{
		if (b % a == 0 && c % b == 0 && d % c == 0)
		{
			if (b / a == c / b && c / b == d / c)
				cout << "YES";
			else
				cout << "NO";
			return 0;
		}
		else
			cout << "NO";
	}
	else
	{
		cout << "NO";
	}
	return 0;
}
