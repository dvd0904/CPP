#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        for(char &x : s) x = tolower(x);
        vector<string> res;
        stringstream ss(s);
        string tmp;
        while(ss >> tmp){
            res.push_back(tmp);
        }
        string ns = res.back();
        int n = res.size() - 1;
        string email = "";
        email += res[n - 1];
        for(int i = 0; i < n - 1; i++){
            email += res[i][0];
        }
        email += "@xyz.edu.vn";
        cout << email << endl;
        stringstream ss2(ns);
        string num;
        while(getline(ss2, num, '/')){
            int x = stoi(num);
            cout << x;
        }
        cout << endl;
    }
}