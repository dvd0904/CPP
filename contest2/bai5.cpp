#include<bits/stdc++.h>

using namespace std;

int main(){
	int a[10000];
	int n,count=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(a[i]==2022){
			count++;
		}
	}
	if(count>0) cout<<"YES";
	else cout<<"NO";
	
	return 0;
}

