#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long n, u1, d;
	cin >> n >> u1 >> d;
	long long s;
	s = n * u1 + (double)(n * (n - 1) * d) / 2;
	cout << s;
	return 0;
}
