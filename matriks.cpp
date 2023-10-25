#include <iostream>
#include <windows.h>
#include <ctime>
using namespace std;

string kegiatan[5] = {"Makan", "Tidur", "Ngocok arisan", "Mandi", "Salto"};
string orang[5] = {"Saipul jamil", "Ria ricis", "Aldi taher", "Sumanto", "Mia khalifa"};

int gas(){
	for(int i = 0;i<100;i++){
		int cak = rand()% 5;
		int cik = rand()% 5;

		cout << cak << "'" << cik << "--";
	}
	
	//cout << "Saya akan " << kegiatan[cak] << " bareng " << orang[cik] << endl << endl;
	//char a;
	//cout << "Lagi? ";cin >> a;
	//if(!(a == 'y' || a == 'Y')) return 0;
	//gas();
}

int main(){
	srand(time(NULL));
	gas();
}
