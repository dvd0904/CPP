
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a1, a2, a3, b1, b2, b3, n;
	cin >> a1 >> a2 >> a3;
	cin >> b1 >> b2 >> b3;
	cin >> n;
	int cup, huyChuong;
	if ((a1 + a2 + a3) % 5 == 0)
		cup = (a1 + a2 + a3) / 5;
	else
		cup = (a1 + a2 + a3) / 5 + 1;
	if ((b1 + b2 + b3) % 10 == 0)
		huyChuong = (b1 + b2 + b3) / 10;
	else
		huyChuong = (b1 + b2 + b3) / 10 + 1;
	if (cup + huyChuong <= n)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}
