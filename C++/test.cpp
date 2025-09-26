#include <bits/stdc++.h>
#include <set>

using namespace std;

int main (){
	int n, k;
	cin >> n >> k;
	int a[n];
	for(int &x : a) cin >> x;
	for(int i = 0; i < n; i ++){
		cout << a[i] << endl;
	}
	return 0;
}