#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
set<ll>se;

int tong(string s){
  int sum = 0;
  for(char x : s){
    sum += x - '0';
  }
  return sum;
}
int sum(int n){
  int tong = 0;
  while(n != 0){
    tong += n % 10;
    n /= 10;
  }
  return tong;
}
void insert(){
  se.insert(9);
  for(int i = 10; i <= 9000; i++){
    if(se.count(sum(i))){
      se.insert(i);
    }
  }
}

int main(){
    string s; cin >> s;
    insert();
    ll res = tong(s);
    if(se.count(res)){
      cout << "YES" << endl;
  }
  else{
    cout << "NO" << endl;
  }
  return 0;
}