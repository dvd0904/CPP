#include<bits/stdc++.h>

using namespace std;

int main(){
	char chuCai;
	cin>>chuCai;
	if(chuCai=='z' || chuCai=='Z') cout<<"a";
	if(chuCai>='a' && chuCai<'z'){
		int k = int(chuCai)+1 ;
		cout<<char(k);
	}
	if(chuCai>='A' && chuCai<'Z'){
		int k = int(chuCai) +33;
		cout<<char(k);
	}
	return 0;
}



