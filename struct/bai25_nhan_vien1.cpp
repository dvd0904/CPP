#include<bits/stdc++.h>
using namespace std;
int cnt = 1;
void chuanHoa(string &s){
    if(s[2] != '/') s = "0" + s;
    if(s[5] != '/') s.insert(3, "0");
}
struct NV{
    string ten, gender, dob, addr, mst, ma, hopDong;

    friend istream& operator >> (istream &in, NV &a){
        string tmp = to_string(cnt);
        cnt++;
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
    friend ostream& operator << (ostream &out, NV a){
        out << a.ma << " " << a.ten << " " << a.gender << " " << a.dob << " " << a.addr << " " << a.mst << " " << a.hopDong;
        return out;
    }
};

int main(){
    int n; cin >> n;
    NV a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cout << a[i] << endl;
}