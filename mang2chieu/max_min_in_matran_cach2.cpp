#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, m; cin >> n >> m;
	int a[n][m], min_val = INT_MAX, max_val = INT_MIN;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> a[i][j];
			min_val = min(min_val, a[ i][j]);
			max_val = max(max_val, a[i][j]);
		}
	}
	vector<pair<int, int>> v1, v2;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(a[i][j] == min_val) v1.push_back({i, j});
			if(a[i][j] == max_val) v2.push_back({i, j});
		}
	}
	cout << min_val << endl;
	for(auto it : v1) cout << it.first+1 << " " << it.second+1 << endl;
	cout << max_val << endl;
	for(auto it : v2) cout << it.first+1 << " " << it.second+1 << endl;
}
