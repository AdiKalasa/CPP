#include <iostream>
using namespace std;
float vle[12];
float ksg,stu;
int tampil(){
	cout << endl;
	for(int i = 0;i<=2;i++){
		cout << vle[i] <<" ";
	}
	cout << "|"<< vle[3] << endl;

	for(int i = 4;i<=6;i++){
		cout << vle[i] <<" ";
	}
	cout << "|"<< vle[7] << endl;

	for(int i = 8;i<=10;i++){
		cout << vle[i] <<" ";
	}
	cout << "|"<< vle[11] << endl << endl;
}

int main(){
	/*
	0 1 2 | 3
	4 5 6 | 7
	8 9 10 | 11
	*/	
	int bos = 1;
	int anak = 1;
	for(int i = 0;i<=11;i++){
		if(i == 3||i==7||i==11){
			cout << "Masukkan Nilai X" << bos << ": ";cin>>vle[i];
			bos+=1;
		}else{
			cout << "Masukkan Nilai ke-" << anak << ": ";cin>>vle[i];
			anak+=1;
		}
		
	}
	cout << "\nAngka mentah:";
	tampil();

	//1 baris 1
	cout << "satu yg pertama: B1/"<<vle[0];
	stu = vle[0];
	for(int i = 0; i<=3;i++){
		vle[i]/=stu;
	}
	
	tampil();
	//kosong deret 1
	cout << "kosong yg pertama: B2-("<<vle[4]<<"*B1) dan B3-("<<vle[8]<<"*B1)";
	ksg = vle[4];
	int j = 4;
	for(int i = 0;i<=3;i++){
		vle[j]-=(ksg*vle[i]);
		j+=1;
	}
	ksg = vle[8];
	j = 8;
	for(int i = 0;i<=3;i++){
		vle[j]-=(ksg*vle[i]);
		j+=1;
	}
	tampil();

	//1 baris 2
	cout << "satu yg kedua: B2/"<<vle[5];
	stu = vle[5];
	for(int i = 5; i<=7;i++){
		vle[i]/=stu;
	}
	tampil();

	// kosong ke 2
	cout << "kosong yg kedua: B1-("<<vle[1]<<"*B2) dan B3-("<<vle[9]<<"*B2)";
	ksg = vle[1];
	j = 1;
	for(int i = 5;i<=7;i++){
		vle[j]-=(ksg*vle[i]);
		j+=1;
	}

	ksg = vle[9];
	j = 9;
	for(int i = 5;i<=7;i++){
		vle[j]-=(ksg*vle[i]);
		j+=1;
	}
	tampil();

	cout << "satu yg ketiga: B3/"<<vle[10];
	stu = vle[10];
	for(int i = 10; i<=11;i++){
		vle[i]/=stu;
	}
	tampil();

	cout << "kosong yg ketiga: B1-("<<vle[2]<<"*B3) dan B2-("<<vle[6]<<"*B3)";
	ksg = vle[2];
	j = 2;
	for(int i = 10;i<=11;i++){
		vle[j]-=(ksg*vle[i]);
		j+=1;
	}
	ksg = vle[6];
	j = 6;
	for(int i = 10;i<=11;i++){
		vle[j]-=(ksg*vle[i]);
		j+=1;
	}
	tampil();
	cout << "Hasil Akhir:\nX1 = " << vle[3] << endl;
	cout << "X2 = " << vle[7] << endl;
	cout << "X3 = " << vle[11] << endl;
	return 0;
}
