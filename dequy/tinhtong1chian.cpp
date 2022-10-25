#include <bits/stdc++.h>

using namespace std;
double tong(int n)
{
	if (n == 1)
		return 1;
	else
		return 1.00 / n + tong(n - 1);
}
int main()
{
	int n;
	cin >> n;
	cout << fixed << setprecision(2) << tong(n);
	return 0;
}
