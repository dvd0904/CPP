#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	int a[n];
	for(int i = 0; i <n ; i++){
		cin>>a[i];
	}
	int Min = INT_MAX, Max = INT_MIN, index_Min, index_Max;
	for(int i = 0; i < n; i++){
		if(a[i] <= Min){
			Min = a[i];
			index_Min = i;
		}
		if(a[i] > Max){
			Max = a[i];
			index_Max = i;
		}
	}
	cout<<index_Min<<" "<<index_Max;
	return 0;
}

