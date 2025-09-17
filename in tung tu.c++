#include <iostream>
#include <math.h>
#include <bits/stdc++.h>

using namespace std;

int main (){
	string s = "java python   php lap trinh";
	stringstream ss(s);
	string tmp;
	int cnt = 0;
	while(ss >> tmp){
		cout << tmp << endl;
		++cnt;
	}
	cout << cnt << endl;
	return 0;
}
