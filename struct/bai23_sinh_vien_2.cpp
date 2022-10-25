#include<bits/stdc++.h>
using namespace std;
int cnt = 1;
void chuanHoa(string &s){
    s[0] = toupper(s[0]);
    for(int i = 1; i < s.size(); i++){
        s[i] = tolower(s[i]);
    }
}
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
    friend ostream& operator << (ostream &out, SV a){
        if(a.dob[2] != '/') a.dob = "0" + a.dob;
        if(a.dob[5] != '/') a.dob.insert(3, "0");
        stringstream ss(a.ten);
        string word, ten = "";
        while(ss >> word){
            chuanHoa(word);
            ten += word + " ";
        }
        out << a.ma << " " << ten << a.lop << " " << a.dob << " " << fixed << setprecision(2) << a.gpa;
        return out;
    }
};

int main(){
    int n; cin >> n;
    SV a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cout << a[i] << endl;
}