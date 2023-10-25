#include <iostream>
#include <array>
#include <algorithm>

#include <windows.h>

using namespace std;

int main(){

	array<int, 10>angka = {8,9,2,10,5,4,6,7,3,1};
	int a;
	int p;
	//sort(angka.begin(), angka.end());
	for(int h:angka){
		cout << h;
	}
	cin >> p;
	if(p == 1) return 0;
	for(int i = 0; i < 10; i++){
		if(angka[i] > angka[i+1]){
			a = angka[i];
			angka[i] = angka[i+1];
			angka[i+1] = a;
			cout << "masuk if" << endl;
		}

		// spesial deh buat array indeks 0 anjig
		if(angka[0] > angka[1]){
			a = angka[0];
			angka[0] = angka[1];
			angka[1] = a;
			cout << "masuk if" << endl;
		}
		// --
		if(i == 8) i = 0;
		if(angka[0] == 1 && angka[1] == 2 && angka[2] == 3) break;
		cout << "indeks " << i << " = " << angka[i] << " indeks "<< i <<"+1 = "<< angka[i+1] <<endl;
		for(int h:angka){
			cout << h;
		}
		cout << endl;
		Sleep(250);
	}
	for(int h:angka){
		cout << h;
	}

}