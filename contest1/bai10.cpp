#include<bits/stdc++.h>

using namespace std;

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	if(a>0 && b>0 && c>0){
		if((a+b)>c && (a+c)>b && (b+c)>a) cout<<"YES";
		else cout<<"NO";
	}
	else{
		cout<<"NO";
	}
		return 0;
}

