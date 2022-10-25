#include<bits/stdc++.h>
using namespace std;

int kiemTraCP(long long n){
    if(n<1)
        return 0;
    long long i = sqrt(n);
    if(i*i==n)
        return 1;
    return 0;
}

void lietKe(long long n){
    long long a = sqrt(n);
    for(long long i=1;i<=a;i++){
    	cout<<i*i<<" ";
	}
}
int main(){
    long long n;
    do{
        cin>>n;
    }
    while(n<=0);
	lietKe(n);

    return 0;
}
