#include<bits/stdc++.h>
using namespace std;

struct dis{
    double x, y;

    friend istream& operator >> (istream &in, dis &a){
        in >> a.x >> a.y;
        return in;
    }

    double operator - (dis other){
        dis kc;
        kc.x = other.x - x;
        kc.y = other.y - y;
        return sqrt(pow(kc.x, 2) + pow(kc.y, 2));
    }
};
int main(){
    int t; cin >> t;
    while(t--){
        dis a, b;
        cin >> a >> b;
        cout << fixed << setprecision(4) << a - b << endl;
    }
}