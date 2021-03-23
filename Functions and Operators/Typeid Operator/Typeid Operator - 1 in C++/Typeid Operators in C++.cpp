#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");

	// Değişkenin hangi veri türünden olduğunu göseteren operatör --> 

	int sayi;

	short **p;

	long long const* p0;

	long  *p1;

	double sayi2;

	float a[5];

	const char* p2;

	cout << typeid(sayi).name() << endl;
	cout << typeid(*p).name() << endl;
	cout << typeid(*p0).name() << endl;
	cout << typeid(*p1).name() << endl;
	cout << typeid(sayi2).name() << endl;
	cout << typeid(a).name() << endl;
	cout << typeid(*p2).name() << endl;




}