#include <iostream>
#include <windows.h>
using namespace std;

int main();
#include "Fibonacci.cpp"
#include "fibonaccirekursif.cpp"


int main()
{
	int pilih;
	cout << "\n\n"\
		<< "	1. Fibonacci 			3.\n"\
		<< "	2. Fibonacci Rekursif   4.\n"\
		<< "	Pilih > ";cin >> pilih;

	if(pilih == 1) fibonacci();
	if(pilih == 2) fibonaccirekursif();
	return 0;
}
