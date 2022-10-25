#include<bits/stdc++.h>

using namespace std;

string daoNguoc(string s){
	string t;
	for(int i = s.length()-1; i >= 0; i--)
		t += s[i];
	return t;
}
string tong(string a, string b){
	a = daoNguoc(a); b = daoNguoc(b);
	int da = a.length(), db = b.length();
	string c = string(da, '0');
	for(int i = db; i < da; i++) b += "0";
	cout << a << " " << b << " " << c <<  endl;
	int t, muon = 0;
	for(int i = 0; i < da; i++){
		t = a[i] - b[i] - muon;
		if(t < 0){
			t += 10;
			muon = 1;
		}
		else muon = 0;
		c[i] += t; // c[i] = t + '0'
	}
	int k = c.length()-1;
	while(k >= 0 && c[k] == '0') k--;
	if(k == -1) c = "0";
	else{
		c.erase(k+1);
	}
	return c;
}
int main(){
	string a, b;
	cin >> a >> b;
	if(a.length() > b.length() || a.length() == b.length() && a > b)
		cout << tong(a, b);
	else cout << tong(b, a);
}

