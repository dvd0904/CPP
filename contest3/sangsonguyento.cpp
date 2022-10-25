#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
void Sovle(ll n){
    bool check[n+1];
    for(ll i=2;i<=n;i++) check[i]=true;
    for(ll i=2;i<=sqrt(n);i++){
        if(check[i]==true){
            for(ll j=i*i;j<=n;j+=i)
                check[j]=false;  // boi cua i khong phai so nguyen to neu i la so nguyen to
        }
    }
    for(ll i=2;i<=n;i++){
        if(check[i]==true) cout<<i<<" ";
    }
    
}
int main(){
    ll n; cin>>n;
    Sovle(n);
    
    return 0;
}

