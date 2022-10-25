#include<bits/stdc++.h>
using namespace std;

int cnt = 1;
void chuanHoa(string &s){
    if(s[2] != '/') s = "0" + s;
    if(s[5] != '/') s.insert(3, "0");
}
string check(string s){
    stringstream ss(s);
    string tmp, res = "";
    while(getline(ss, tmp, '/')){
        res = tmp + res;
    }
    return res;
}
struct NV{
    string ma, ten, gt, ns, dc, thue, hd;
    friend istream& operator >> (istream& in, NV &a){
        string tmp = to_string(cnt); cnt++;
        a.ma = string(5 - tmp.length(), '0') + tmp;
        in.ignore();
        getline(in, a.ten);
        in >> a.gt >> a.ns;
        in.ignore(); 
        getline(in, a.dc);
        in >> a.thue >> a.hd;
        chuanHoa(a.ns);
        chuanHoa(a.hd);
        return in;
    }
    friend ostream& operator << (ostream& out, NV a){
        out << a.ma << " " << a.ten << " " << a.gt << " "
        << a.ns << " " << a.dc << " " << a.thue << " " << a.hd << endl;
        return out;
    }
};

bool cmp(NV a, NV b){
    if(check(a.ns) != check(b.ns)) 
        return check(a.ns) < check(b.ns);
    return a.ma < b.ma;
}

int main(){
    int n; cin >> n;
    NV a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n, cmp);
    for(int i = 0; i < n; i++) cout << a[i];
}