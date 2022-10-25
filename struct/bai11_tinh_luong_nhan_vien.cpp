#include<bits/stdc++.h>
using namespace std;

struct NV{
    string ten, cvu;
    int ngayCong, lcb;

    friend istream& operator >> (istream &in, NV &a){
        getline(in, a.ten);
        in >> a.lcb >> a.ngayCong >> a.cvu;
        return in;
    }

    friend ostream& operator << (ostream &out, NV a){
        double luongThuong = 0;
        int phuCap  = 0;
        long long luongThang = 0;
        if(a.ngayCong >= 25){
            luongThuong = (a.lcb * a.ngayCong) * 0.2;
            luongThang = a.lcb * a.ngayCong;
        }
        else if(a.ngayCong >= 22 && a.ngayCong < 25){
            luongThuong = (a.lcb * a.ngayCong) * 0.1;
            luongThang = a.lcb * a.ngayCong;
        }
        else{
            luongThang = a.lcb * a.ngayCong;
            luongThuong = 0;
        }

        if(a.cvu == "GD") phuCap = 250000;
        else if(a.cvu == "PGD") phuCap = 200000;
        else if(a.cvu == "TP") phuCap = 180000;
        else phuCap = 150000;

        long long thuNhap = luongThang + luongThuong + phuCap;
        
        out << "NV01 " << a.ten << " " << luongThang << " " << luongThuong << " " << phuCap << " " << thuNhap << endl;
        return out;
    }
    
};

int main(){
    NV a;
    cin >> a;
    cout << a;
}