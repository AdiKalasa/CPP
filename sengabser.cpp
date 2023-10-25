#include <iostream>
using namespace std;

int main(){
	int tinggi,tibet;

	cout << "Masukkan tingginya: ";cin >> tinggi;
	for(int high = 0;high < tinggi;high++){
		for(int spes = tinggi;spes > high;spes--){
			cout << "-";
		}
		for(int bintang = 0;bintang <= high;bintang++){
			cout << "*";
		}
		for(int bintr = 0;bintr < high;bintr++){
			cout << "*";
		}
		cout << endl;
	}
	tibet = tinggi - 1;
	for(int high = 0;high < tibet;high++){
		cout << "-";
		for(int spes = 0;spes <= high;spes++){
			cout << "-";
		}
		for(int bintang = tibet;bintang > high;bintang--){
			cout << "*";
		}
		for(int bintr = tibet-1;bintr > high;bintr--){
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}
