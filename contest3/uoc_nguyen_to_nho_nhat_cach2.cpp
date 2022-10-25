// int nt[100001];

// //nt[i] : luu uoc so nguyen to nho nhat cua i
// void sang(){
// 	for(int i = 1; i <= 100000; i++) nt[i] = i;
// 	for(int i = 2; i <= sqrt(100000); i++){
// 		//neu i la so nguyen to
// 		if(nt[i] == i){
// 			for(int j = i * i; j <= 100000; j += i){
// 				if(nt[j] == j)
// 					nt[j] = i; // uoc nt nho nhat cua j se la i
// 			}
// 		}
// 	}
// }

