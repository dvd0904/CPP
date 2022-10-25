#include<bits/stdc++.h>
using namespace std;
int cnt=0;

int daoNguoc(int n, int sdn){
	if(n==0) return sdn;
	else{
		sdn=sdn*10 + n%10;
		return daoNguoc(n/10,sdn);
	}
}
int main(){
	int n; cin>>n; cout<<daoNguoc(n,0);
	return 0;
}


