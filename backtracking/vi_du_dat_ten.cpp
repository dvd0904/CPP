#include<bits/stdc++.h>
using namespace std;

int n, m, k, a[100];
vector < string > VS;

void display(){
    for(int i = 1; i <= k; i++) cout << VS[a[i] - 1] << " ";
    cout << endl;
}

void Try(int i){
    for(int j = a[i - 1] + 1; j <= m - k + i; j++){
        a[i] = j;
        if(i == k) display();
        else Try(i + 1);
    }
}

int main(){
    cin >> n >> k;
    string s; 
    map < string, bool > M;
    for(int i = 0; i < n; i++){
        cin >> s;
        M[s] = 1;
    }
    for(auto &x : M) VS.push_back(x.first);
    m = VS.size();
    // for(string x : VS) cout << x << endl;
    Try(1);
}