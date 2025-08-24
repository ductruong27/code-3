#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;
// a- z : 97 - 122
// A - Z : 65 - 90
// 0 - 9 : 48 - 57


int main (){
	char c; cin >> c;
	if ( (c>= ' a ' && c <= 'z') || ( c >= 'A' && c <= 'Z')){
		if (c == ' z' || c == 'Z'){
			cout << "a\n";
		}
		else {
			if ( c >= 'A' && c < 'Z'){
				c += 32;
			}
			++c;
			cout << c << endl;
		}
	}
	else {
		cout << "INVALID\n";
	}
	return 0;
}
