#include <iostream>

using namespace std;
string nama;
int nim;
string prodi;
string matkul;
int n1,n2,n3;
double avg;

void tampil(){
	cout<<"\n\n\t NIM\t\t:"<<nim<<endl;
	cout<<"\n\n\t Nama\t\t:"<<nama<<endl;
	cout<<"\n\n\t Prodi\t\t:"<<prodi<<endl;
	cout<<"\n\n\t Mata Kuliah\t:"<<matkul<<endl;
	cout<<"\n\n\t Nilai 1\t\t:"<<n1<<endl;
	cout<<"\n\n\t Nilai 2\t\t:"<<n2<<endl;
	cout<<"\n\n\t Nilai 3\t\t:"<<n3<<endl;
	cout<<"\n\n\t Nilai Rata-rata:\t:"<<avg<<endl;

	
}

int main(){
	
	while(true){
		cout<<"\n\t Masukan NIM\t: ";cin>>nim;
		cout<<"\t Masukan Nama\t: ";cin>>nama;
		cout<<"\t Masukan Prodi\t:";cin>>prodi;
		cout<<"\t Masukan Mata Kuliah\t: ";cin>>matkul;
		cout<<"\t Masukan Nilai ke-1\t: ";cin>>n1;
		cout<<"\t Masukan Nilai ke-2\t: ";cin>>n2;
		cout<<"\t Masukan Nilai ke-3\t: ";cin>>n3;
		avg = (n1+n2+n3)/3;
		tampil();
	}

	return 0;
}
