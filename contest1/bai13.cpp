#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	int year,week,day;
	year = n/365;
	week = (n%365)/7;
	day = (n%365)%7;
	cout<<year<<" "<<week<<" "<<day<<endl;
	return 0;
}

