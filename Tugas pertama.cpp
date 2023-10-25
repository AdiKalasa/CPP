#include <iostream>
#include <array>

using namespace std;


array<int, 5> nim;
array<string, 5> nama;
array<string, 5> prodi;
array<string, 5> matkul;
array<int, 5> n1;
array<int, 5> n2;
array<double, 5> n3;
array<double, 5> avg;


void show(){

	cout << "-----------------------------------------------------------------------"<< endl; 
	cout << " NIM | Nama | Prodi | Matkul | Nilai 1 | Nilai 2 | Nilai 3 | Rata-rata "<< endl;
	cout << "-----------------------------------------------------------------------"<< endl; 
	for(int i=0;i<5;i++){
		cout<<" "<<nim[i]<<" | "<<nama[i]<<" |   "<<prodi[i]<<"  | "<<matkul[i]<<" |    "<<n1[i]<<"   |    "<<n2[i]<<"   |    "<<n3[i]<<"   |   "<<avg[i]<<endl;
	}
	cout << "-----------------------------------------------------------------------"<<endl;
	int a;
	cout<<"Program selesai....";cin>>a;
}

int main(){


	int a;
	cout<<"\nNama: Adi Kalasa"<<endl;
	cout<<"NIM : 2255201002"<<endl;
	while(true){
		cout<<"\nKetik 1 untuk mengisi data otomatis\nKetik 2 untuk mengisi data manual\n==> ";cin>>a;
		if(a == 1){
			for(int i=0;i<5;i++){
				nim[i] = 123+i;
				nama[i] = "Test", i;
				prodi[i] = "TI";
				matkul[i] = "PETRUK";
				n1[i] = 78+(i*2);
				n3[i] = 71+(i*2);
				n2[i] = 74+(i*2);
				avg[i] = (n1[i]+n2[i]+n3[i])/3;
				
			}
			show();
			return 0;
		}else if(a == 2){
			cout<<"--NIM dan Nilai-nilai hanya bisa dimasukan angka!"<<endl;
			for(int i=0;i<5;i++){
				cout<<"\n  [$]Masukkan data Mahasiswa ke-"<<i+1<<endl;
				cout<<"   Masukan NIM\t\t: ";cin>>nim[i];
				cout<<"   Masukan Nama\t\t: ";cin>>nama[i];
				cout<<"   Masukan Prodi\t: ";cin>>prodi[i];
				cout<<"   Masukan Mata Kuliah\t: ";cin>>matkul[i];
				cout<<"   Masukan Nilai ke-1\t: ";cin>>n1[i];
				cout<<"   Masukan Nilai ke-2\t: ";cin>>n2[i];
				cout<<"   Masukan Nilai ke-3\t: ";cin>>n3[i];
				avg[i] = (n1[i]+n2[i]+n3[i])/3;
			}
			show();
			return 0;
		}else{
			//return while
		}
	}
	
	return 0;
}
