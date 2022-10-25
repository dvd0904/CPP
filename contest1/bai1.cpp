#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int x;
	cin >> x;
	if (x >= -100000 && x <= 100000)
	{
		long long a = pow(x, 3) + 3 * pow(x, 2) + x + 1;
		cout << a;
	}
	return 0;
}
