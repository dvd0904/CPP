#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long a, b, k, x;
	cin >> a >> b >> k;
	if (k % 2 != 0)
	{
		x = (1 + k / 2) * a - (k / 2) * b;
	}
	else
	{
		x = (k / 2) * a - (k / 2) * b;
	}
	cout << x << endl;
	return 0;
}
