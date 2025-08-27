#include <iostream>
#include <math.h>
#include <iomanip>

#define ll long long

using namespace std;

bool check ( long long n){
	int tong = 0;
	while (n != 0){
		tong += n % 10;
		n /= 10;
	}
	if (tong % 10 == 8){
		return true;
	}
	else return false;
}
	

int main (){
	long long x; cin >> x;
	if (check (x) ){
		cout << "28tech\n";
	}
	else {
		cout << "29tech\n";
	}
	return 0;
}