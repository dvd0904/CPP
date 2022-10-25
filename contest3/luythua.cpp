#include<bits/stdc++.h>
using namespace std;
long long const mod = 1e9 + 7;
long long Pow(long long a, long long b){

    if (b == 0)
        return 1;
    int temp = Pow(a, b/2)%mod;
    if (b%2 == 0)
        return temp%mod*temp%mod;
    else
        return a%mod*temp%mod*temp%mod;

}
int main(){
    long long a,b;
    cin>>a>>b;
    cout<<Pow(a,b);
    return 0;
}
 
