#include<bits/stdc++.h>

using namespace std;

int main(){
	char chuCai;
	cin>>chuCai;
	if(chuCai>='a' && chuCai<='z') cout<<"LOWER";
	else if(chuCai>='A' && chuCai<='Z') cout<<"UPPER";
	else if(chuCai>='0' && chuCai<='9') cout<<"DIGIT";
	else cout<<"SPECIAL";
	return 0;
}

