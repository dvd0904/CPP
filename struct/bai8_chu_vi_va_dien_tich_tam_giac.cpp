#include<bits/stdc++.h>
using namespace std;

struct point{
    double x, y;

    friend istream& operator >> (istream &in, point &a){
        in >> a.x >> a.y;
        return in;
    }
    double operator - (point other){
        point kc;
        kc.x = other.x - x;
        kc.y = other.y - y;
        return sqrt(pow(kc.x, 2) + pow(kc.y, 2));
    }

};

int main(){
    int t; cin >> t;
    while(t--){
        point a, b, c;
        cin >> a >> b >> c;
        double c1 = a - b;
        double c2 = a - c;
        double c3 = b - c;
        if((c1 + c2 > c3) && (c1 + c3 > c2) && (c2 + c3 > c1) && c1 != 0 && c2 != 0 && c3 != 0){
            double chuVi = c1 + c2 + c3; cout  << fixed << setprecision(3) << chuVi << " ";
            double p = chuVi / 2;
            double s = sqrt(p * (p - c1) * (p - c2) * (p - c3));
            cout << fixed << setprecision(3) << s << endl;
        } 
        else{
            cout << "INVALID" << endl;
        }
    }

}