#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

//Kieu_Dulieu tenmang [So luong phan tu cua mang];
// ten mang[index]
//Chi so bat dau tu 0

//1->10000
//7
//1 2 3 4 5 6 7

bool nt(int n){
	for (int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return false;
		}
	}
	return n > 1;
}
//For each

int main (){
	int n; cin >> n;
	int a[n];
	for (int i = 0; i<n; i ++){
		cin >> a[i];
	}
	for (int i = 0; i< n; i++){
		if(nt(a[i])){
			cout << a[i] << " ";
		}
	}
	return 0;
}