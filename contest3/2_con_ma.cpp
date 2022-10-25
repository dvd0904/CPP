/* 2 con ma: lay so cach sap xep 2 con ma vao ban co [k][k] tru di so cach sap xep de 2 con ma an nhau
so cach sap xep 2 con ma vao ban co [k][k] la to hop chap 2 cua k*k
ta thay, cu moi o^ 2*3 se co 2 cach sap xep an nhau => can tiep so o 2*3 trong k*k = (k-1)(k-2)
tuong tu, tim so o 3*2 = (k-1)(k-2)
=> dap an = k*k C 2 - 4*(k-1)(k-2)
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n; cin>>n;
	for(long long i=1;i<=n;i++){
		long long cx1 = i*i * (i*i-1)/2;
		long long cx2 = 4*(i-1)*(i-2); 
		cout<<cx1-cx2<<endl;
	}
	return 0;
}

