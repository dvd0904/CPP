#include<bits/stdc++.h>

using namespace std;

int main(){
	float a,b,c,d;
	cin>>a>>b>>c>>d;
	double tb;
		tb=(a+b+c*2+d*3)/7;
		if(tb>=8) cout<<"GIOI";
		if(tb>=6.5 && tb<8) cout<<"KHA";
		if(tb>=5 && tb<6.5) cout<<"TRUNG BINH";
		if(tb<5) cout<<"YEU";
	return 0;
}

