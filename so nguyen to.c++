#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main () {
	int dem = 0;
	int n; cin >> n;
	for(int i = 1; i <= n; i++){
		if ( n % i == 0){
			dem ++;
		}
	}
	if (dem == 2){
		cout << "La so nguyen to\n" << endl;
	}
	else cout << "Khong la so nguyen to\n" << endl;
	return 0;
}
