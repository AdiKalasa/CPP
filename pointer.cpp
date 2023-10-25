#include <iostream>
using namespace std;

int main(){

	int a = 6;

	cout << "Nilainya a " << a << " Alamatnya a " << &a << endl;

	int *b = &a;
	
 	cout << "Nilainya b " << *b << " Alamatnya b " << b << endl;

 	*b = 10;

 	cout << a;
	return 0;
}
