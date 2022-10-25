#include<bits/stdc++.h>
using namespace std;
int main(){
    string S, T;
    getline(cin, S); getline(cin, T);
    if(S.find(T) != string :: npos){
        cout << "YES";
    }
    else cout << "NO";

}