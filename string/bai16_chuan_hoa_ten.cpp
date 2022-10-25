#include<bits/stdc++.h>
using namespace std; 
void chuanHoa(string &s){
    s[0] = toupper(s[0]);
    for(int i = 1; i < s.size(); i++){
        s[i] = tolower(s[i]);
    }
}
int main(){
    string name, DOB; getline(cin, name); cin >> DOB;
    stringstream ss(name);
    string tmp;
    vector < string > Ten;
    while(ss >> tmp){
        chuanHoa(tmp);
        Ten.push_back(tmp);
    }
    // dấu / ở vị trí 2 và 5 trong ngày tháng năm sinh
    if(DOB[2] != '/') DOB = "0" + DOB;
    if(DOB[5] != '/') DOB.insert(3, "0");
    for(string x : Ten) cout << x << " ";
    cout << endl;
    cout << DOB;
}