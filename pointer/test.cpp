#include<bits/stdc++.h>
using namespace std;
void incr(int *n){
    (*n)++;
}

int main(){
    int n = 100;
    incr(&n);
    cout << n;
}