#include<bits/stdc++.h>
using namespace std;
void chuanHoa(string &s){
    s[0] = toupper(s[0]);
    for(int i = 1; i < s.size(); i++){
        s[i] = tolower(s[i]);
    }
}
struct HCN{
    int chieuDai, chieuRong;
    string color;

    friend istream& operator >> (istream &in, HCN &a){
        in >> a.chieuDai >> a.chieuRong >> a.color;
        return in;
    }

    friend ostream& operator << (ostream &out, HCN a){
        if(a.chieuDai <= 0 || a.chieuRong <= 0){
            out << "INVALID";
        }
        else{
            chuanHoa(a.color);
            out << (a.chieuDai + a.chieuRong) * 2 << " " << a.chieuDai * a.chieuRong << " " << a.color;
        }
        return out;
    }

};

int main(){
    HCN a;
    cin >> a;
    cout << a;
}