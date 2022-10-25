/* gcd(a, b) = gcd(a - b, b)
*/
#include<bits/stdc++.h>
using namespace std;
// string gcd(string a, string b){
//     if(a.length() < b.length()) return gcd(b, a);
//     if(b == "") return a;
//     else return gcd(a.substr(b.length()), b);
// }
long long gcd(long long b, long long c){
    if(c == 0) return b;
    else return gcd(c, b % c);
}
int main(){
    long long a, b, c; cin >> a >> b >> c;
    // string P = "", Q = "";
    // for(int i = 0; i < b; i++) P += to_string(a);
    // for(int i = 0; i < c; i++) Q += to_string(a);
    // cout << gcd(P, Q);
    long long res =  gcd(b, c);
    for(int i = 0; i < res; i++) cout << a;
}