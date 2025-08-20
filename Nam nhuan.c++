#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main (){
	long long n;
	cin >> n;
	if ( n > 0){
		if ( n % 400 == 0){
		cout << "YES" << endl;
	    }
    	else if ( (n % 4 == 0) && (n % 100 != 0)){
		cout << "YES" << endl;
	    }
	    else { 
		cout << "NO" << endl;
     	}
	}
	else {
		cout << "INVALID" << endl;
	}	
	return 0;
}
