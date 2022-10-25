#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
#define PI 3.14
using namespace std;

int main()
{
	int R;
	cin >> R;
	double chuVi, dienTich;
	if (R >= 1 && R <= 1000)
	{
		chuVi = 2 * PI * R;
		dienTich = PI * pow(R, 2);
		cout << fixed << setprecision(4) << chuVi << " " << dienTich << endl;
	}

	return 0;
}
