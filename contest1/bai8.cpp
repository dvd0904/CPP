#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	if(n%2==0) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	if(n%3==0 && n%5==0) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	if(n%3==0 && n%7!=0) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	if(n%3==0 || n%7==0) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	if(n>30 && n<50) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	if(n>= 30 && (n%2==0 || n%3==0 || n%5==0)) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	if(n>=10 && n<=99){
		int du=n%10;
		if(du==2 || du==3 || du==5 || du==7) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
	if(n<=100 && n%23==0) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	if(n<10 || n>20) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	int phanDu=n%10;
	if(phanDu%3==0) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	
	
	return 0;
}

