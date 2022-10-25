#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long d1, d2, d3;
	cin >> d1 >> d2 >> d3;
	long long c1, c2, c3, c4;
	c1 = 2 * d1 + 2 * d2;
	c2 = d1 + d3 + d2;
	c3 = 2 * (d1 + d3);
	c4 = 2 * (d2 + d3);
	long long min = c1;
	if (c2 < min)
		min = c2;
	if (c3 < min)
		min = c3;
	if (c4 < min)
		min = c4;
	cout << min;

	return 0;
}
