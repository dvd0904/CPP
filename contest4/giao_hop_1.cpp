#include<bits/stdc++.h>
using namespace std;
vector < int > mark_a(10000001), mark_b(10000001);
vector < int > hop, giao;
int main(){
	int n, m; cin >> n >> m;
	vector < int > a(n), b(m), c, d;
	for(int i = 0; i < n; i++)
		cin >> a[i];
	for(int j = 0; j < m; j++)
		cin >> b[j];
	// phan tu khac nhau cua a
	for(int i = 0; i < n; i++){
		if(mark_a[ a[i] ] == 0){
			c.push_back(a[i]);
			mark_a[ a[i] ] = 1;
		}
	}
	// phan tu khac nhau cua b
	for(int i = 0; i < m; i++){
		if(mark_b[ b[i] ] == 0){
			d.push_back(b[i]);
			mark_b[ b[i] ] = 1;
		}
	}
	int i = 0, j = 0;
	int size_c = c.size(), size_d = d.size();
	// sap xep tang dan cho c va d
	sort(c.begin(), c.end()); sort(d.begin(), d.end());
	// solve
	while(i < size_c && j < size_d){
		if(c[i] == d[j]){
			giao.push_back(c[i]);
			hop.push_back(c[i]);
			++i; ++j;
		}
		else if(c[i] < d[j]){
			hop.push_back(c[i]);
			++i;
		}
		else{
			hop.push_back(d[j]);
			++j;
		}
	}
	while(i < size_c){
		hop.push_back(c[i]);
		++i;
	}
	while(j < size_d){
		hop.push_back(d[j]);
		++j;
	}
	for(int y : giao) cout << y << " ";
	cout << endl;
	for(int x : hop) cout << x << " ";
	return 0;
}

