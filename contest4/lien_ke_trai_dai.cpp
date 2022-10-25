#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    for(int i = 0; i < n; i++){
        if(i == 0){
			if( 1ll * a[0] * a[1] < 0)
				cout<<a[0]<<" ";
		}
		
        else if(i == n - 1 ){
		if( 1ll * a[n-1] * a[n-2] < 0)
			cout<<a[n-1]<<" ";
		}
		
        else{
		if(1ll * a[i] * a[i-1]< 0 || 1ll * a[i] * a[i+1] < 0)
			cout<<a[i]<<" ";
		}	
    }
    return 0;
}

