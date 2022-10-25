#include<bits/stdc++.h>
using namespace std;
struct sinhVien{
    string ten, msv, ns, qq;
    float gpa;
    
    void print(){
        cout << ten << msv << ns << qq << gpa;
    }

    void nhap(){
        getline(cin, ten);
        cin >> msv >> ns;
        cin.ignore();
        getline(cin, qq);
        cin >> gpa;
    }
};
void in(sinhVien a){
    cout << a.ten << a.msv << a.ns << a.qq << a.gpa;
}
int main(){
    sinhVien x;
    getline(cin, x.ten);
    cin >> x.msv >> x.ns;
    cin.ignore();
    getline(cin, x.qq);
    cin >> x.gpa;
    x.nhap();
    x.print();
    in(x);

}