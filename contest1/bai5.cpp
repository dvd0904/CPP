#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
	long long x1, x2, y1, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	float distance;
	distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	cout << fixed << setprecision(2) << distance;
	return 0;
}
