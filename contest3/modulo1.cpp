#include<bits/stdc++.h>
using namespace std;
long long x,y,p;
void extended(long long a, long long b){
    if(b==0){
        x=1;
        y=0;
        p=a;
    }else{
        extended(b,a%b);
        long long temp = x;
        x = y;
        y = temp - (a/b) * y;
    }
}
void inverse(long long a, long long m){
    extended(a,m);
    if(p!=1){
        cout<<"-1";
    }else{
        x = (x%m + m) % m; 
        cout<<x<<endl;
    }
}
int main(){
    long long a,b;
    cin>>a>>b;
    inverse(a,b);
    return 0;
}
