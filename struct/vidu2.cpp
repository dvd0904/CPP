#include<bits/stdc++.h>
using namespace std;
struct phanSo{
    long long tu, mau;
};
long long gcd(long long a, long long b){
    if(b == 0) return a;
    return gcd(b, a % b);
}
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
phanSo tong(phanSo a, phanSo b){
    phanSo res;
    res.mau = 1ll * a.mau * b.mau;
    res.tu = 1ll * a.tu * b.mau + 1ll * a.mau * b.tu;
    rutgon(res);
    return res;
}
int main(){
    struct phanSo p, q; // neu trong C phai them struct vao truoc
    nhap(p); nhap(q);
    phanSo t = tong(p, q);
    in(t);
}