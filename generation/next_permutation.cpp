#include<bits/stdc++.h>
using namespace std;
// next_permutatoin : sinh ra hoan vi ke tiep (co the dung cho mang, vector, string)
// neu da la cau hinh cuoi cung thi no se return false va ko in ra cau hinh tiep
int main(){
    int a[5] = {1, 2, 3, 4, 5};
    do{
        for(int i = 0; i < 5; i++) cout << a[i];
        cout << endl;
    }while(next_permutation(a, a + 5));
}