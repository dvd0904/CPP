#include<bits/stdc++.h>
using namespace std;

struct SV{
    string msv, ten;
    double toan, ly, hoa;

    friend istream& operator >> (istream &in, SV &a){
        in >> a.msv;
        in.ignore();
        getline(in, a.ten);
        in >> a.toan >> a.ly >> a.hoa;
        return in;
    }

    friend ostream& operator << (ostream &out, SV a){
        string kv = a.msv.substr(0, 3);
        double ut = 0;
        if(kv == "KV1") ut = 0.5;
        else if(kv == "KV2") ut = 1.0;
        else ut = 2.5;
        double tong = a.toan + a.ly + a.hoa + ut;
        string res = "";
        if(tong >= 24) res = "TRUNG TUYEN";
        else res = "TRUOT";
        out << a.msv << " " << a.ten << " " << a.msv.substr(2, 1) << " " << tong << " " << res;
        return out;
    }
};

int main(){
    SV a;
    cin >> a;
    cout << a;
}