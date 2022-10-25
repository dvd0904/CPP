#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c;
    cin>>a>>b>>c;
    if( a<b+c && b<a+c && c<a+b ){
        if( a*a==b*b+c*c || b*b==a*a+c*c || c*c== a*a+b*b)
            cout<<"3";
        else if(a==b && b==c)
            cout<<"1";
        else if(a==b || a==c || b==c)
            cout<<"2";
        else cout<<"4";
    }
    else
        cout<<"INVALID";
    return 0;
}
 
