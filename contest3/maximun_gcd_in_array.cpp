#include <bits/stdc++.h>
 
using namespace std;
int arr[1000005];
int maxGCD(int arr[], int n){
    
    int high = 0;
    for (int i = 0; i < n; i++)
        high = max(high, arr[i]);

    int divisors[high + 1] = { 0 };
    for (int i = 0; i < n; i++){
        for (int j = 1; j <= sqrt(arr[i]); j++){
            if (arr[i] % j == 0){
                divisors[j]++;
                if (j != arr[i] / j)
                    divisors[arr[i] / j]++;
            }
        }
    }
    // tim uoc cua tung element, kiem tra xem trong so uoc do co nhung uoc nao la uoc chung cua it nhat 2 so
    // xet tu uoc lon nhat den uoc be nhat, neu so luong uoc do >=2 => return uoc do luon
    int res;
    for (int i = high; i >= 1; i--){
        if (divisors[i] > 1){
        	res=i;
        	break;
		}   
	}			
	return res;			
}

int main(){
    int n; cin>>n;
    for(int i=0;i<n;i++)
    	cin>>arr[i];
    cout << maxGCD(arr,n);
    return 0;
}
