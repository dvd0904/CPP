#include<bits/stdc++.h>
using namespace std;

int MAX(long long n, int Max){
    if(n != 0){
        if(n % 10 > Max){
        Max = n % 10;
        return MAX(n / 10, Max);
        }
        return MAX(n / 10, Max);
    }
    return Max;
}
int MIN(long long n, int Min){
    int x = n % 10;
    if(n != 0){
        if(x < Min){
        Min = x;
        return MIN(n / 10, Min);
        }
        return MIN(n / 10, Min);
    }
    return Min;
}
int main(){
    long long n; cin >> n;
    cout << MAX(n, -1) << " " << MIN(n, 10);
}