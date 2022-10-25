#include<bits/stdc++.h>
using namespace std;
void chuanHoa(string &s){
    s[0] = toupper(s[0]);
    for(int i = 1; i < s.size(); i++){
        s[i] = tolower(s[i]);
    }
}
void chuanHoaNgay(string &s){
    if(s[2] != '/') s = "0" + s;
    if(s[5] != '/') s.insert(3, "0");
}
struct NhanVien{
    string name, gender, dob, address, ma, hopDong;
    friend istream& operator >> (istream &in, NhanVien &a){
        getline(in, a.name);
        cin >> a.gender >> a.dob;
        cin.ignore(); getline(in, a.address);
        cin >> a.ma >> a.hopDong;
        return in;
    }
};
void in(NhanVien a){
    stringstream ss(a.name);
    string word, ten = "";
    while(ss >> word){
        chuanHoa(word);
        ten += word + " ";
    }
    chuanHoaNgay(a.dob);
    chuanHoaNgay(a.hopDong);
    cout << "00001 " << ten << a.gender << " " << a.dob << " " << a.address << ' ' << a.ma << " " << a.hopDong; 
}
int main(){
    NhanVien a;
    cin >> a;
    in(a);
}