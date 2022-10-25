#include<bits/stdc++.h>
using namespace std;
int N, A[100];
void display(){
    for(int i = 1; i <= N; i++){
        cout << A[i] << " " ;
    }
    cout << endl;
}
void Try(int i){
    for(int j  = 0; j <= 1; j++){
        A[i] = j;
        if(i == N){
            display();
        }
        else{
            Try(i + 1);
        }
    }
}
int main(){
    cin >> N;
    Try(1);
}