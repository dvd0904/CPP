#include<bits/stdc++.h>

using namespace std;
void hinh1(int n){
	int cnt=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<cnt<<" ";
			cnt++;
		}
		cout<<endl;
	}
}
void hinh2(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<i+j-1<<" ";
		}
		cout<<endl;
	}
}
void hinh3(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(j<=n-i) cout<<"~";
			else cout<<i;
		}
		cout<<endl;
	}
}
void hinh4(int n){
	for(int i=1;i<=n;i++){
		int kc=i;
		int cnt=n-1;
		for(int j=1;j<=i;j++){
			cout<<kc<<" ";
			kc+=cnt;
			cnt--;
		
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

