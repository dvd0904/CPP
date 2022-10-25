#include<bits/stdc++.h>
using namespace std;
int cnt = 1;
struct MH{
    string ten, dvi, ma;
    int giaMua, giaBan, lai;

    friend istream& operator >> (istream &in, MH &a){
        string tmp = to_string(cnt);
        cnt++;
        a.ma = "MH" + string(4 - tmp.size(), '0') + tmp;
        in.ignore();
        getline(in, a.ten); in >> a.dvi >> a.giaMua >> a.giaBan;
        a.lai = a.giaBan - a.giaMua;
        return in;
    }
    friend bool operator < (MH a, MH b){
        if(a.lai != b.lai) return a.lai > b.lai;
        return a.ma < b.ma;
    } 
    friend ostream& operator << (ostream &out, MH a){
        out << a.ma << " " << a.ten << " " << a.dvi << " " << a.giaMua << " " << a.giaBan << " " << a.lai << endl;
        return out;
    }

};

int main(){
    int n; cin >> n;
    MH a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    for(int i = 0; i < n; i++) cout << a[i];
}