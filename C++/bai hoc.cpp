#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

struct SinhVien{
	char ma[20];
	char ten[50];
	double gpa;
	char lop[20];
};
typedef struct SinhVien SV;

int main (){
	SV a;
	cin >> a.ma;
	cin.ignore();
	cin >> a.ten;
	cin >> a.gpa; cin >>a.lop;
	cout << a.ma << " " << a.ten << " " << a.gpa << " " << a.lop;
	return 0;
}