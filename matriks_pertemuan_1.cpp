#include <iostream>
using namespace std;

int isi[9];

int tampil(){
	cout<<"    ";
	for(int i =0;i<9;i++){
		cout<<isi[i];
		if(i==2||i==5||i==8){
			cout<<"\n    ";
		}else{
			cout<<" ";
		}
	}
	cout<<endl;
}
int tampil2(){
	cout<<"    ";
	cout<<isi[0]<<" "<<isi[1]<<" "<<isi[2]<<endl;
	cout<<"    ";
	cout<<isi[3]<<"+(3."<<isi[6]<<") "<<isi[4]<<"+(3."<<isi[7]<<") "<<isi[5]<<"+(3."<<isi[8]<<")"<<endl;
	cout<<"    ";
	cout<<isi[6]<<" "<<isi[7]<<" "<<isi[8]<<endl;
	cout<<endl;
}
int main(){
	for(int i = 0;i<9;i++){
		cout<<"Masukkan Nilai ke-"<<i+1<<": ";cin>>isi[i];
	}
	cout<<"Mentah"<<endl;
	tampil();

	// 2R1
	for(int i=0;i<3;i++){
		isi[i]*=2;
	}
	cout<<"2.R1"<<endl;
	tampil();

	// R2<>R3
	int idxr2 = 3;
	int tumbal;
	for(int i=6;i<9;i++){
		tumbal = isi[i];
		isi[i] = isi[idxr2];
		isi[idxr2] = tumbal;
		idxr2+=1;
	}
	cout<<"R2<>R3"<<endl;
	tampil();

	// R2+(3.R3)
	cout<<"R2+(3.R3)"<<endl;
	tampil2();
	tumbal=6;
	for(int i=3;i<6;i++){
		isi[i] = isi[i]+(3*isi[tumbal]);
		tumbal+=1;
	}
	cout<<"Hasil Akhir"<<endl;
	tampil();

	return 0;
}
