#include<bits/stdc++.h>
using namespace std;

int n, a[100];

void Try(int i){
    for(int j = 0; j <= 1; j++){
        a[i] = j;
        if(i == n){
            for(int i = 1; i <= n; i++) cout << a[i];
            cout << endl;
        }
        else Try(i + 1);
    }
}
int main(){
    cin >> n;
    Try(1);
}