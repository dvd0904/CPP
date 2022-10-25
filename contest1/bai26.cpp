#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long a, b, c, d, min, max;
	cin >> a >> b >> c >> d;
	min = a;
	if (min >= b)
		min = b;
	if (min >= c)
		min = c;
	if (min >= d)
		min = d;
	max = a;
	if (max < b)
		max = b;
	if (max < c)
		max = c;
	if (max < d)
		max = d;
	cout << max << " " << min << endl;
}
