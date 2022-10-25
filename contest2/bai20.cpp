#include<bits/stdc++.h>

using namespace std;

void hinh1(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
}
void hinh2(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i+1;j++){
			cout<<"*";
		}
		cout<<endl;
	}
}
void hinh3(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(j<=n-i) cout<<" ";
			else cout<<"*";	
		}
		cout<<endl;
	}
}
void hinh4(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(j<i) cout<<" ";
			else cout<<"*";	
		}
		cout<<endl;
	}
}
void hinh5(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			if(i==1 || j==1 || i==n || j==i) cout<<"*";
			else cout<<" ";
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
	cout<<endl;
	hinh5(n);
	return 0;
}

