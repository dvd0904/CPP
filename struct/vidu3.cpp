#include<bits/stdc++.h>
using namespace std;
struct soPhuc{
    int thuc, ao;
    // soPhuc operator + (soPhuc other){
    //     soPhuc res;
    //     res.thuc = thuc + other.thuc;
    //     res.ao = ao + other.ao;
    //     return res;
    // }
    friend soPhuc operator + (soPhuc a, soPhuc b){
        soPhuc res;
        res.thuc = a.thuc + b.thuc;
        res.ao = a.ao + b.ao;
        return res;
    }
    friend istream& operator >> (istream& in, soPhuc &x){
        in >> x.thuc >> x.ao;
        return in;
    }
    friend ostream& operator << (ostream& out, soPhuc &x){
        out << x.thuc << x.ao;
        return out;
    }
};
void in(soPhuc a){
    cout << a.thuc << " " << a.ao << "i";
}
int main(){
    soPhuc a{1, 2}, b{3, 4};
    soPhuc c = a + b;
    in(c);
}