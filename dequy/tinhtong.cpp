#include<bits/stdc++.h>

using namespace std;
int tong(int n){
	if(n==1) return 1;
	else return n + tong(n-1);
}
int main(){
	int n; cin>>n; cout<<tong(n);
	return 0;
}


