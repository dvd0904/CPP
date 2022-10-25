#include<bits/stdc++.h>
using namespace std;
void chuanHoa(string &s){
    s[0] = toupper(s[0]);
    for(int i = 1; i < s.size(); i++) s[i] = tolower(s[i]);
}
void chuanHoaNgay(string &s){
    if(s[2] != '/') s = "0" + s;
    if(s[5] != '/') s.insert(3, "0");
}
int cnt = 1;
struct SV{
    string ten, lop, dob, ma;
    float gpa;

    friend istream& operator >> (istream &in, SV &a){
        string tmp = to_string(cnt);
        cnt++;
        a.ma = "SV" + string(3 - tmp.size(), '0') + tmp;
        in.ignore();
        getline(in, a.ten); in >> a.lop >> a.dob >> a.gpa;
        return in;
    }
    friend bool operator < (SV a, SV b){
        if(a.gpa != b.gpa) return a.gpa > b.gpa;
        return a.ma < b.ma; 
    }
    friend ostream& operator << (ostream &out, SV a){
        chuanHoaNgay(a.dob);
        stringstream ss(a.ten);
        string word, ten = "";
        while(ss >> word){
            chuanHoa(word);
            ten += word + " ";
        }
        out << a.ma << " " << ten << a.lop << " " << a.dob << " " << fixed << setprecision(2) << a.gpa << endl;
        return out;
    }
};

int main(){
    int n; cin >> n;
    SV a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    for(int i = 0; i < n; i++) cout << a[i];
}