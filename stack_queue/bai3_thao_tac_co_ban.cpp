#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    deque < int > DQ;

    while(t--){
        string s; cin >> s;
        if(s == "PUSHFRONT"){
            int x; cin >> x;
            DQ.push_front(x);
        }
        else if(s == "PRINTFRONT"){
            if(DQ.empty()) cout << "NONE\n";
            else cout << DQ.front() << endl;
        }
        else if(s == "POPFRONT"){
            if(!DQ.empty()) DQ.pop_front();
        }
        else if(s == "PUSHBACK"){
            int x; cin >> x;
            DQ.push_back(x);
        }
        else if(s == "PRINTBACK"){
            if(DQ.empty()) cout << "NONE\n";
            else cout << DQ.back() << endl;
        }
        else{
            if(!DQ.empty()) DQ.pop_back();
        }
    }
}