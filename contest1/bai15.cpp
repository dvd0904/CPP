#include<bits/stdc++.h>

using namespace std;

int main(){
	char chuCai;
	cin>>chuCai;
	if(chuCai>='a' && chuCai<='z'){
		int k = int(chuCai) -32;
		cout<<char(k);
	}
	else if(chuCai>='A' && chuCai<='Z'){
		int k = int(chuCai) +32;
		cout<<char(k);
	}
	else cout<<chuCai;
	return 0;
}

