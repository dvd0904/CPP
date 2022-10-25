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
    string ten, gender, dob, addr, mst, ma, hopDong;

    friend istream& operator >> (istream &in, NV &a){
        string tmp = to_string(cnt); cnt++;
        a.ma = string(5 - tmp.size(), '0') + tmp;
        in.ignore();
        getline(in, a.ten);
        in >> a.gender >> a.dob;
        in.ignore();
        getline(in, a.addr);
        in >> a.mst >> a.hopDong;
        chuanHoa(a.dob);
        chuanHoa(a.hopDong);
        return in;
    }
    friend bool operator < (NV a, NV b){
        if(check(a.dob) != check(b.dob)) return check(a.dob) < check(b.dob);
        return a.ma < b.ma;
    }
    friend ostream& operator << (ostream &out, NV a){
        out << a.ma << " " << a.ten << " " << a.gender << " ";
        out << a.dob << " " << a.addr << " " << a.mst << " " << a.hopDong << endl;
        return out;
    }
};

// bool cmp(NV a, NV b){
//     if(check(a.dob) != check(b.dob)) return a.dob < b.dob;
//     return a.ma < b.ma;
// }

int main(){
    int n; cin >> n;
    NV a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    for(int i = 0; i < n; i++) cout << a[i];
}