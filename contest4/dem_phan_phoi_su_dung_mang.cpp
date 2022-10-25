#include<bits/stdc++.h>
using namespace std;
int cnt[1001];
void solve1(int a[], int n){
	for(int i = 0; i < n ; i++){
    		cnt[a[i]]++;
	}
	for(int i = 0; i < n; i++){
		if(cnt[a[i]] != 0){
			cout << a[i] << " " << cnt[a[i]]<<endl;
			cnt[a[i]] = 0;
		}
	}
	cout<<endl;
}
void tang(int a[], int n){
	int tg;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;        
            }
        }
    }
}
void solve2(int a[], int n){
	for(int i = 0; i < n ; i++){
    		cnt[a[i]]++;
	}
    for(int i = 0; i < n; i++){
		if(cnt[a[i]] != 0){
			cout << a[i] << " " << cnt[a[i]]<<endl;
			cnt[a[i]] = 0;
		}
	}
	cout<<endl;
}
void solve3(int a[], int n){
	for(int i = 0; i < n ; i++){
    	cnt[a[i]]++;
	}
	int Max = INT_MIN, res;
	for(int i = 0; i < n; i++){
		if(cnt[a[i]] >= Max){
			Max = cnt[a[i]];
			res = a[i];
		}
	}
	cout<<res<<endl;
}
void solve4(int a[], int n){
	for(int i = 0; i < n ; i++){
   		cnt[a[i]]++;
	}
	int Min = INT_MAX, res;
	for(int i = 0; i < n; i++){
		if(cnt[a[i]] < Min){
			Min = cnt[a[i]];
			res = a[i];
		}
	}
	cout<<res;
}
int main(){
	int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    solve1(a,n);
    
    tang(a,n);
    solve2(a,n);
    
    solve3(a,n);
    
    solve4(a,n);
    
	return 0;
}

