#include <iostream>
#include <array>
#include <windows.h>

using namespace std;

int main(){

	int angka[10] = {2,3,8,10,5,4,6,7,9,1};
	int a;
	//

	for(int i = 0; i <= 10;i++){
		for(int b = 0;b < 9; b++){
			if(angka[b] > angka[b+1]){

				a = angka[b];
				angka[b] = angka[b+1];
				angka[b+1] = a;
			}
			for(int h : angka){
				cout << h;
			}
			cout << endl;
			Sleep(500);
		}
	}
	for(int h : angka){
		cout << h;
	}
	


	return 0;
}
