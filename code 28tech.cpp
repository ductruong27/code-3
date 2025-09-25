#include <iostream>
#include <math.h>
#include <bits/stdc++.h>

using namespace std;

//truy cap ki tu cua xau thong qua chi so
//length()
//size()
// cin, getline
// +
// a < b : -1
// a == b : 0
// a > b : 1
//substr
//stoi
//stoll
//to_string


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