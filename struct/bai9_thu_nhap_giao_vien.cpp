#include<bits/stdc++.h>
using namespace std;

struct GiaoVien{
    string maGach, ten;
    int luongcb;
    
    friend istream& operator >> (istream &in, GiaoVien &a){
        in >> a.maGach;
        in.ignore();
        getline(in, a.ten);
        in >> a.luongcb;    
        return in;
    }

    friend ostream& operator << (ostream &out, GiaoVien a){
        string chuc = a.maGach.substr(0, 2);
        string bac = a.maGach.substr(2, 2);
        long long luong = 0;
        if(chuc == "HT") luong = a.luongcb * stoi(bac) + 2000000;
        else if(chuc == "HP") luong = a.luongcb * stoi(bac) + 900000;
        else luong = a.luongcb * stoi(bac) + 500000;
        out << a.maGach << " " << a.ten << " " << stoi(bac) << " " << luong;
        return out;
    }


};
int main(){
    GiaoVien a;
    cin >> a;
    cout << a;
}