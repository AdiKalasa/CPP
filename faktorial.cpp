#include <iostream>
using namespace std;


int faktorial(int a){
	if(a <= 1 ){
		return a;
	}else{
		return a * faktorial(a - 1);
	}
}

int faktorial2(int a){
	if(a <= 1 ){
		cout << a;
		return a;
	}else{
		cout << a << "*";
		return a * faktorial2(a - 1);
	}
}


int main(){
	
	// 5! = 5*4*3*2*1
	int input;
	cout << "Masukkan angka: "; cin >> input;


	// mine
	cout << "Hasil dari faktorial ";
	int msg = input;
	while(msg >= 1){
		cout << msg;
		if(msg > 1) cout << "*";
		msg--;
	}
	cout << " adalah: " << faktorial(input) << endl;

	// om fuqiz
	int hasil = faktorial2(input);
	cout << "\nHasilnya adalah: " << hasil << endl;
	return 0;
}
