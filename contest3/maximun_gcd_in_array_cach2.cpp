// GCD luon luon nam trong khoang tu 1 den high => chi can xet tu high -> 1 de tim max cua GCD
/* o day: vi du: arr={ 3, 14, 15, 10, 9} khi i=5; while(j<=high) khi i=5 => j=5 count[5]=0, counter =0
j+=i= 10, count[10]=1 counter++ =1; j+=i=15<=high, count[15]=1, counter++=2 => return luon i
*/
#include <bits/stdc++.h>
using namespace std;
int arr[1000005];
int maxGCD(int arr[], int n){
    int high = 0;
    for (int i = 0; i < n; i++)
        high = max(high, arr[i]);
 
    int count[high + 1] = {0};
    for (int i = 0; i < n; i++)
        count[arr[i]]++;  // so uoc cua moi element duoc khoi tao la 1, vi no chia het cho chinh no
        					// sau chi can xet them 1 uoc chung nua de tim gcd
	// dem so uoc
    int counter = 0;
 	int res;
    for (int i = high; i >= 1; i--){		// duyet tu high ve 1 de tim gcd max
        int j = i;
       counter = 0;

        while (j <= high){					// cho 1 so X, tim cac element trong array xem co element nao la boi cua X ko
 											// neu so luong element do >1 => X co the la GCD
            if(count[j] >=2){				// day la truong hop co 2 so trong mang giong nhau
            	res=j;
            	goto label;
			}
 
           else if (count[j] == 1)        
                counter++;        
 
            j += i;
 
            if (counter == 2){				
            	res=i;
            	goto label;
			}
        }
    }
    label:
    	return res;
}
 
int main()
{
    int n; cin>>n;
    for(int i=0;i<n;i++)
    	cin>>arr[i];
    cout << maxGCD(arr, n);
 
    return 0;
}
