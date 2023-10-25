#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstring>
#include <string>
using namespace std;


struct siswa{
	char nim[10];
	char nama[20];
	float teori,praktek;
} dsiswa;

fstream fsource;
void bukafile(char namafile[]);
void bacadata();
void cetakdata();
void tutupfile();

int main(){
	bukafile("namafile");
	bacadata();
	cetakdata();
	tutupfile();
	return 0;
}
void bukafile(char namafile[]){
	fsource.open(namafile,ios::in | ios::out | ios::binary);
}
void bacadata(){
	float recno;
	char nim[10];
	fsource.seekg(0,ios::end);
	do {
		recno = fsource.tellg()/sizeof(dsiswa);
		cout << "Record ke -" << recno+1 << endl;
		cout << "Nim : "; cin.getline(nim,10); 
		if (nim[0] != 0) {
			strcpy(dsiswa.nim, nim);
			cout << "Nama : "; cin >> dsiswa.nama;
			cout << "Teori :"; cin >> dsiswa.teori;
			cout << "Praktek: "; cin >> dsiswa.praktek;
			cin.ignore();
			fsource.write((char*) &dsiswa,sizeof(dsiswa));
		}
	} while (nim[0] != 0);
}
void cetakdata(){
	fsource.seekg(0,ios::beg);
	cout << "--------------------------------"<< endl; 
	cout << " Nim Nama Teori Praktek "<< endl;
	cout << "--------------------------------"<< endl; 
	while (!fsource.eof()) {
		fsource.read((char *) &dsiswa,sizeof(dsiswa));
		if (fsource.gcount() == 0) break; 
		cout << setw(10) << dsiswa.nim;
		cout << setw(20) << dsiswa.nama;
		cout << setw(5) << setprecision(2) << dsiswa.teori;
		cout << setw(5) << setprecision(2) << dsiswa.praktek<<endl;
	}
}
void tutupfile(){
	fsource.close();
}
