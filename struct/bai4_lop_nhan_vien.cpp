#include<bits/stdc++.h>
using namespace std;

struct NhanVien{
    string name, gender, dob, address, ma, hopDong;
    friend istream& operator >> (istream &in, NhanVien &a){
        getline(in, a.name);
        cin >> a.gender >> a.dob;
        cin.ignore(); getline(in, a.address);
        cin >> a.ma >> a.hopDong;
        return in;
    }
    friend ostream& operator << (ostream &out, NhanVien a){
        out << "00001 " << a.name << " " << a.gender << " " << a.dob << " " << a.address << ' ' << a.ma << " " << a.hopDong; 
        return out;
    }
};

int main(){
    NhanVien a;
    cin >> a;
    cout << a;
}