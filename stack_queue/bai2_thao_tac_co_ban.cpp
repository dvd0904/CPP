#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    queue < int > Q;
    while(t--){
        string s;
        cin >> s;
        if(s == "PUSH"){
            int x; cin >> x;
            Q.push(x);
        }
        else if(s == "POP"){
            if(!Q.empty()) Q.pop();
        }
        else if(s == "PRINTFRONT"){
            if(Q.empty()){
                cout << "NONE\n";
            }
            else cout << Q.front() << endl;
        }
    }

}