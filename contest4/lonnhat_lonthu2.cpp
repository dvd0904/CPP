#include<bits/stdc++.h>
using namespace std;
int a[1000001];
int main(){
    int n; cin>>n;
    int firstMax = INT_MIN, secondMax = INT_MIN;
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    for(int i = 0; i < n; i++){
        if(a[i] > firstMax){
            secondMax = firstMax;
            firstMax = a[i];
        }else if(a[i] > secondMax){
        	secondMax = a[i];
		}
    }
    cout<<firstMax<<" "<<secondMax;
    return 0;
}

