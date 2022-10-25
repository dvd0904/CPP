#include<bits/stdc++.h>

using namespace std;
void hinh1(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<"*";
		}
		cout<<endl;
	}
}
void hinh2(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i==1 || j==1 || i==n || j==n) cout<<"*";
			else cout<<" ";
		}
		cout<<endl;
	}
}
void hinh3(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i==1 || j==1 || i==n || j==n) cout<<"*";
			else cout<<"#";
		}
		cout<<endl;
	}
}
void hinh4(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i==1 || j==1 || i==n || j==n) cout<<i<<" ";
			else cout<<" "<<" ";
		}
		cout<<endl;
	}
}
int main(){
	int n;
	cin>>n;
	hinh1(n);
	cout<<endl;
	hinh2(n);
	cout<<endl;
	hinh3(n);
	cout<<endl;
	hinh4(n);
	return 0;
}

