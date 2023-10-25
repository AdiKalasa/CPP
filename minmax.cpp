#include <iostream>
using namespace std;
int angka[3];


int main(){
	//cout << "Masukkan angka:";
	//cin >> a;cin >> b;cin >> c;
	for(int i = 0;i < 3;i++){
		cout << "Masukkan angka ke-" << i+1 << ": "; cin >> angka[i];
	}
	//cout << "\nSebelum diurutkan" << endl;
	//for(int i : angka){
	//	cout << i << endl;
	//}

	int wadah;
	for(int i = 0;i<=2;i++){
		for(int j = 0;j<=2;j++){
			if(angka[i] < angka[j]){
				wadah = angka[i];
				angka[i] = angka[j];
				angka[j] = wadah;
			}
		}
	}
	//cout << "\nSetelah diurutkan" << endl;
	//for(int i : angka){
	//	cout << i << endl;
	//}

	cout << "Nilai maximalnya adalah " << angka[2] << " sedangkan Nilai minimalnya adalah " << angka[0] << endl;
	return 0;
}
