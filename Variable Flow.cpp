#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>


using namespace std;

int a = 0;
int ahb();


int main()
{
	cout << a << endl;
	a = 2;
	ahb();
}

int ahb(){

	cout << "ini ahb " << a << endl;
}