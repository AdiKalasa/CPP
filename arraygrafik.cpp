#include <iostream>
#include <array>

using namespace std;


// BUg
// fix, harus di refresh pake loop, see dibawah
// 10/10/2023 23:24 mencuba ngefix bugnya alias jadiin normal aja tanpa
// di refresh segala, tapi masih gagal, keknya fix bahasanya yg rusak
int main(){
	array <int, 10>nilai;

	for(int i = 0; i<=nilai.size();i++){
		if(i == 0){
			cout << "Nilai 0-9  : ";
		}else if(i == 10){
			cout << "Nilai 100  : ";
		}else{
			cout << "Nilai " << i*10 << "-" << i*10+9 << ": ";
		}
		nilai[i] = i+1;
		// cin >> nilai[i];
	}
	cout<<"Keluaran: "<<nilai[10]<<endl;
	// for(int  i = 0;i <= nilai.size();i++){
	// 	cout << nilai[i] << endl;
	// }

	// cout << "yanto" << nilai[10] << endl;
	for(int  i = 0;i <= nilai.size();i++){
		
		if(i == 0){
			cout << "\nNilai 0-9"<<"["<<nilai[i]<<"]\t: ";
		}else if(i == 10){
			cout << "Nilai 100"<<"["<<nilai[10]<<"]\t: ";
		}else{
			cout << "Nilai " << i*10 << "-" << i*10+9 <<"["<<nilai[i]<<"]\t: ";
		}
		//cout << i << endl;
		for(int bintang = 0;bintang < nilai[i]; bintang++){
			//if(bintang == 0) cout << "Muncul !!";
			cout << "*";
		}
		cout << endl;
	}

	cout << "yanto" << nilai[10] << endl << endl;

	// for(int  i = 0;i <= nilai.size();i++){
	// 	// ini maksudnya,,, diisi kosoong pun aman yg pntg ke refresh mungkin....
	// }

	return 0;
}
