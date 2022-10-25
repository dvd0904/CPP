#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	long long a, b, c;
	cin >> a >> b >> c;
	if (abs(a) <= pow(10, 8) && abs(b) <= pow(10, 8) && abs(c) <= pow(10, 8))
	{
		long long s = a * (b + c) + b * (a + c);
		cout << s;
	}
	return 0;
}
