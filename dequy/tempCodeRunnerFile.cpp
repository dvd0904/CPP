#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_set < int > s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(9);
    s.insert(4);
    s.insert(8);
    for(int x : s) cout << x << " ";
    cout << endl << s.size();
}