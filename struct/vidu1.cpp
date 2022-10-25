#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b){
    if(b == 0) return a;
    return gcd(b, a % b); 
}
struct phanSo{
    long long tu, mau;
};
void nhap(phanSo &p){
    cin >> p.tu >> p.mau;
}
void rutgon(phanSo &p){
    long long ucln = gcd(p.tu, p.mau);
    p.tu /= ucln;
    p.mau /= ucln;
}
void in(phanSo p){
    cout << p.tu << "/" << p.mau;
}
int main(){
    struct phanSo p; // neu trong C phai them struct vao truoc
    nhap(p);
    rutgon(p);
    in(p);
}