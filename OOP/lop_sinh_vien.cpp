#include<bits/stdc++.h>
using namespace std;

class SinhVien{
    private:
        string name, DOB;
        double d1, d2, d3;
        static string nameOfUniversity;
    public:
        void Input();
        void Output();
        void setNameOfUniversity(string nameOfUni);
        string getNameOfUniversity();

};

string SinhVien::nameOfUniversity = "PTIT";

void SinhVien::Input(){
    getline(cin, name);
    cin >> DOB >> d1 >> d2 >> d3;
}

void SinhVien::Output(){
    cout << name << " " << DOB << " " << fixed << setprecision(1) << d1 + d2 + d3;
}

string SinhVien::getNameOfUniversity(){
    return nameOfUniversity;
}

void SinhVien::setNameOfUniversity(string newName){
    newName = nameOfUniversity;
}

int main(){
    SinhVien a;
    a.Input();
    a.Output();
}