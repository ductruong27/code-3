#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main (){
	int a, b, c; cin >> a >> b >> c;
	if (a == 0) {
		if ( b == 0 && c == 0){
			cout << "INF";
		}
		else if ( b == 0 && c != 0){
			cout << "NO";
		}
		else if ( b != 0){
			cout << fixed << setprecision(2) << ( float )-c/b;
		}
	}
	else{
		int delta = b*b - 4*a*c;
		if ( delta < 0) {
			float realPart = -b / (2.0 * a);
            float imagPart = sqrt(-delta) / (2.0 * a);
            cout << fixed << setprecision(2);
            cout << realPart << " + " << imagPart << "i" << endl;
            cout << realPart << " - " << imagPart << "i" << endl;
	    }
		else if ( delta == 0){
			cout << fixed << setprecision(2)<< (float)-b/(2*a);
		}
		else {
			float x1 = (-b + sqrt (delta)) / (2*a);
			float x2 = (-b - sqrt (delta)) / (2*a);
			cout << fixed << setprecision (2) << x1 << " " << x2 << endl;
		}
	}	
	return 0;
}