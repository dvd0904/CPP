#include<bits/stdc++.h>
using namespace std;

struct SinhVien{
    string name, dob;
    float diem1, diem2, diem3;

    friend istream& operator >> (istream &in, SinhVien &a){
        getline(in, a.name);
        cin >> a.dob >> a.diem1 >> a.diem2 >> a.diem3;
        return in;
    }
    friend ostream& operator << (ostream &out, SinhVien a){
        out << a.name << " " << a.dob << " " << fixed << setprecision(1) << a.diem1 + a.diem2 + a.diem3;
        return out;
    }
};

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
}