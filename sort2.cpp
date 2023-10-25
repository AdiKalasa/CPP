#include <iostream>
#include <array>

using namespace std;

int main(){

	int angka[10] = {5,7,8,1,4,3,2,6,9,10};
	int a;

	// reversed sorted
	for(int b = 0;b < 10; b++){
		for(int c = 0; c < 10; c++){
			if(angka[b] > angka[c]){
				a = angka[b];
				angka[b] = angka[c];
				angka[c] = a;
			}
		}
	}
	cout << "Reversed: ";
	for(int h : angka){
		cout << h;
	}
	cout << endl;

	// normal sorted
	for(int b = 0;b < 10; b++){
		for(int c = 0; c < 10; c++){
			if(angka[b] < angka[c]){
				a = angka[b];
				angka[b] = angka[c];
				angka[c] = a;
			}
		}
	}
	cout << "Normal  : ";
	for(int h : angka){
		cout << h;
	}	

	cout << endl;


	return 0;
}
