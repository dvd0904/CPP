#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b){
    if(b == 0) return a;
    return gcd(b, a % b);
}
struct PhanSo{
    long long tu, mau;
};
void nhap(PhanSo &a){
    cin >> a.tu >> a.mau;
}
void rutGon(PhanSo &a){
    long long ucln = gcd(a.tu, a.mau);
    a.tu /= ucln;
    a.mau /= ucln;
}
void in(PhanSo a){
    cout << a.tu << "/" << a.mau;
}
int main(){
    PhanSo a;
    nhap(a);
    rutGon(a);
    in(a);
}