#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    int dem=0;
    while(n>=10){
        n/=10; 
        dem++;
    }
    cout<<dem+1;
    
}
