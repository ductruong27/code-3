#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main (){
	string n;
	cin >> n;
	if (n.size() % 2 == 0){
		cout << "NOT FOUND" << endl;
	}
	else {
		cout << n[(n.size () - 1) / 2];
	}
	return 0;
}