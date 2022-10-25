#include<bits/stdc++.h>
using namespace std;
// prev_permutatoin : sinh ra hoan vi truoc do (co the dung cho mang, vector, string)
// neu da la cau hinh cuoi cung thi no se return false va ko in ra cau hinh tiep
int main(){
    int a[5] = {5, 4, 3, 2, 1};
    do{
        for(int i = 0; i < 5; i++) cout << a[i];
        cout << endl;
    }while(prev_permutation(a, a + 5));
}