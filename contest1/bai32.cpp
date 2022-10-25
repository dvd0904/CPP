#include<bits/stdc++.h>

using namespace std;

int main(){
	long long k2,k3,k5,k6;
	cin>>k2>>k3>>k5>>k6;
	long long min256=k2;
	if(k5<min256) min256 =k5;
	if(k6<min256) min256 =k6;
	long long min32=k3;
	if((k2-min256)<min32) min32=k2-min256;
	cout<<min256*256+min32*32;
	return 0;
}

