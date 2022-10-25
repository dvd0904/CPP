#include<bits/stdc++.h>
using namespace std;
long long const mod = 1e9+7;
int Prime[100000+5];
// Eratosthenes
void SieveOfEra(){
	for(int i=2;i<=100000;i++) Prime[i]=1;
    Prime[0] = Prime[1] =0; 
    for(int i=2;i<=sqrt(100000);i++){
        if(Prime[i]){
            for(int j=i*i;j<=100000;j+=i)
                Prime[j]=0;  
        }
    }
}
// Legendree
int degree(int n, int p){
	int deg=0;
	for(int i=p;i<=n;i*=p){
		deg+=n/i;
	}
	return deg;
}
long long countingDivisor(int n){
	SieveOfEra();
	long long res=1;
	for(int i=1;i<=n;i++){
		if(Prime[i]){
			res = res*(degree(n,i)+1)%mod;
		}
	}
	return res%mod;
}
int main(){
	int n;
	cin>>n;
	cout<<countingDivisor(n);
	return 0;
}

