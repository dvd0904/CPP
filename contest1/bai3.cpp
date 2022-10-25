#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
	long long a, b;
	cin >> a >> b;
	long long sum = a + b, sub = a - b, mul = a * b, div = a / (float)b;
	if (b == 0)
	{
		cout << sum << endl
			 << sub << endl
			 << mul << endl
			 << "INVALID";
	}
	else
	{
		cout << sum << endl
			 << sub << endl
			 << mul << endl;
		cout << fixed << setprecision(4) << static_cast<double>(a) / b << endl;
	}
	return 0;
}
