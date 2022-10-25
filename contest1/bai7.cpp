/* so thu 1 <= a va chia het cho b
so thu 2>=a va chia het cho b */
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	long long so1, so2;
	int thuong = a / b;
	so1 = thuong * b;
	so2 = (thuong + 1) * b;
	cout << so1 << endl
		 << so2;
	return 0;
}
