#include <iostream>
using namespace std;

int hitung(int nilai, int pangkat){
	cout<<nilai<<endl;
	if(pangkat == 1){
		return nilai;
	}else{
		return nilai*=hitung(nilai, pangkat-1);
	}
	
}


int main(){
	int nilai,pangkat;
	cout<<"Nilainya: ";cin>>nilai;
	cout<<"Pangkatnya: ";cin>>pangkat;

	cout<<"Hasilnya: "<<hitung(nilai, pangkat);


	return 0;
}
