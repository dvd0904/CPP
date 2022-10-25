#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
    string name, lop, dob;
    float gpa;
    friend istream& operator >> (istream &in, SinhVien &a){
        getline(in, a.name);
        cin >> a.lop >> a.dob >> a.gpa;
        return in;
    }
    friend ostream& operator << (ostream &out, SinhVien a){
        if(a.dob[2] != '/') a.dob = "0" + a.dob;
        if(a.dob[5] != '/') a.dob.insert(3, "0");
        out << "SV001 " << a.name << " " << a.lop << " " << a.dob << " " << fixed << setprecision(1) << a.gpa;
        return out;
    }
};
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
}