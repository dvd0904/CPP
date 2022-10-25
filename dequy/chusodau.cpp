#include<bits/stdc++.h>

using namespace std;
int csd(int n){
	if(n<10 && n>0) return n;
	else return csd(n/10);
}
int main(){
	int n; cin>>n; cout<<csd(n);
	return 0;
}


