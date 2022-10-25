#include<bits/stdc++.h>
using namespace std;

#define PI 3.14
struct point{
    double x, y;
    friend istream& operator >> (istream &in, point &a){
        in >> a.x >> a.y;
        return in;
    }
    double operator - (point other){
        point dis;
        dis.x = other.x - x;
        dis.y = other.y - y;
        return sqrt(pow(dis.x, 2) + pow(dis.y, 2));
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
            double p = (c1 + c2 +c3) / 2;
            double s = sqrt(p * (p - c1) *(p - c2) * (p - c3));
            double R = c1 * c2 * c3 / (4 * s);
            cout << fixed << setprecision(3) << R * R * PI << endl;
        } 
        else{
            cout << "INVALID" << endl;
        }
    }
}
