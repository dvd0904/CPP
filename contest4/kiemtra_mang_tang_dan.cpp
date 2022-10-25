#include<bits/stdc++.h>
using namespace std;
int check(int a[], int n){
	for(int i = 0; i < n -1 ; i++){
    	if(a[i] >= a[i+1]) return 0;
	}
	return 1;
}
int main(){
	int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    if(check(a,n)) cout<<"YES";
    else cout<<"NO";
    
	return 0;
}

