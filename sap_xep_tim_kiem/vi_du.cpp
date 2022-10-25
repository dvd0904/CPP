/* Cho 1 mảng có N phần tử, in các phân tử theo thứ tự tần suất xuất hiện giảm dần
nếu có cùng tần suất thì in số bé hơn 
1 <= N <= 10^6, 1 <= A[i] <= 10^9*/
#include<bits/stdc++.h>
using namespace std;
map < int , int > M;
bool cmp(pair < int, int > a, pair < int, int > b){
    if(a.second != b.second) return a.second > b.second;
    else return a.first < b.first;
}
int main(){
    int N; cin >> N;
    int A[N];
    for(int &x : A){
        cin >> x;
        M[x]++;
    }
    vector < pair < int, int > > V;
    for(auto it : M){
        V.push_back(it);
    }
    sort(V.begin(), V.end(), cmp);
    for(auto it : V){
        // it.first: gia tri
        // it.second: tan suat
        for(int j = 0; j < it.second; j++) cout << it.first << " ";
    }
}
