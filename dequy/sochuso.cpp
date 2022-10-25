#include<bits/stdc++.h>

using namespace std;
int count=0;
int socs(int n){
	if(n<10 && n>=0) return 1;
	else{
		return 1+ socs(n/10);
	}
}
int main(){
	int n; cin>>n;
	cout<<socs(n);
	return 0;
}


