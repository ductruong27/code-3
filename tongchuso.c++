#include <iostream>
#include <math.h>
#include <iomanip>

#define ll long long
using namespace std;

int sum_digit(long long n){
	int sum = 0;
	while (n != 0){
		sum += n % 10;
		n /= 10;
	}
	return sum;
}
int main (){
	long long a; cin >> a;
	cout << sum_digit(a) << endl;

	return 0;
}
