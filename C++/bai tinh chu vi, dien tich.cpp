#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
	int r;
	cin >> r;
	double chuvi = 2 * 3.14 * r;
	double dientich = 3.14 * r* 3.14;
	cout << fixed << setprecision (2) << chuvi << " " << dientich << endl;
	return 0;
}