#include <iostream>
using namespace std;

string hitung(int nilai){
	if(nilai >= 0){
		while(1){
			if(nilai == 0){
				return "Genap";
			}else if(nilai == 1){
				return "Ganjil";
			}
			nilai-=2;
		}
	}else{
		while(1){
			if(nilai == 0){
				return "Genap";
			}else if(nilai == -1){
				return "Ganjil";
			}
			nilai+=2;
		}
	}
}

int main(){
	int nilai;
	cout<<"Masukkan Nilainya: ";cin>>nilai;
	cout<<nilai<<" adalah angka "<<hitung(nilai)<<endl;
	return 0;
}
