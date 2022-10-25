#include<bits/stdc++.h>
using namespace std;

string s;
int used[100], a[100];
void Try(int i){
    for(int j = 1; j <= s.size(); j++){
        if(used[j] == 0){
            a[i] = j;
            used[j] = 1;
            if(i == s.size()){
                for(int i = 1; i <= s.size(); i++) cout << s[a[i] - 1];
                cout << endl;
            }
            else{
                Try(i + 1);
            }
            used[j] = 0;
        }
    }
}
int main(){
    cin >> s;

    Try(1);
}