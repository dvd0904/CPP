#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}
//	 cach 1
//	for(int i = 0; i < n; i++){
//		int ok =1;
//		for(int j = 0; j < i; j++){
//			if(a[i] <= a[j]){
//				ok = 0;
//				break;
//			}
//		}
//		if(ok) cout<<a[i]<<" ";
//	}
//	 cach 2: tim so lon nhat trong cac so dung truoc no
	int Max = INT_MIN;
	for(int i = 0; i < n; i++){
		if(a[i] > Max) cout<<a[i]<<" ";
		if(a[i] > Max) Max = a[i];
	}
	return 0;
}

