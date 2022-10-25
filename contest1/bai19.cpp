#include<bits/stdc++.h>
using namespace std;
int main(){
    long long m, n, a, num1, num2;
    cin>>n>>m>>a;
    if (m%a== 0)
		num1 = m/a;
    else
        num1 = m/a+1;
    if (n%a == 0)
        num2 = n/a;
    else
        num2 = n/a+1;
	cout<<num1*num2;

}
