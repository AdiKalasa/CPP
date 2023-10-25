#include <iostream>
#include <windows.h>

bool menang, ogo, xgo = true;
using namespace std;
string go = "";
string nanya;
string angka = {"X", "O"};
string ttt[3][3] = {"1","2","3","4","5","6","7","8","9"};
int tampil(string *, int baris, int kolom);


void xwin(){
	cout << endl;
	tampil(*ttt, 3, 3);
	cout << "\nX Menang" << endl;
	menang = true;
}

void owin(){
	cout << endl;
	tampil(*ttt, 3, 3);
	cout << "\nO Menang" << endl;
	menang = true;
}

int cekmenang(){
	// X
	// 123
	if(ttt[0][0] == "X" && ttt[0][1] == "X" && ttt[0][2] == "X") xwin();
	// 456
	if(ttt[1][0] == "X" && ttt[1][1] == "X" && ttt[1][2] == "X") xwin();
	// 789
	if(ttt[2][0] == "X" && ttt[2][1] == "X" && ttt[2][2] == "X") xwin();
	// 147
	if(ttt[0][0] == "X" && ttt[1][0] == "X" && ttt[2][0] == "X") xwin();
	// 258
	if(ttt[0][1] == "X" && ttt[1][1] == "X" && ttt[2][1] == "X") xwin();
	// 369
	if(ttt[0][2] == "X" && ttt[1][2] == "X" && ttt[2][2] == "X") xwin();
	// 159
	if(ttt[0][0] == "X" && ttt[1][1] == "X" && ttt[2][2] == "X") xwin();
	// 357
	if(ttt[0][2] == "X" && ttt[1][1] == "X" && ttt[2][0] == "X") xwin();
	// O
	// 123
	if(ttt[0][0] == "O" && ttt[0][1] == "O" && ttt[0][2] == "O") owin();
	// 456
	if(ttt[1][0] == "O" && ttt[1][1] == "O" && ttt[1][2] == "O") owin();
	// 789
	if(ttt[2][0] == "O" && ttt[2][1] == "O" && ttt[2][2] == "O") owin();
	// 147
	if(ttt[0][0] == "O" && ttt[1][0] == "O" && ttt[2][0] == "O") owin();
	// 258
	if(ttt[0][1] == "O" && ttt[1][1] == "O" && ttt[2][1] == "O") owin();
	// 369
	if(ttt[0][2] == "O" && ttt[1][2] == "O" && ttt[2][2] == "O") owin();
	// 159
	if(ttt[0][0] == "O" && ttt[1][1] == "O" && ttt[2][2] == "O") owin();
	// 357
	if(ttt[0][2] == "O" && ttt[1][1] == "O" && ttt[2][0] == "O") owin();
}

int tampil(string *yo, int baris, int kolom){
	int index = 0;
	cout << endl;
	for(int i = 0;i < baris;i++){
		for(int j = 0;j < kolom;j++){
			cout << *(yo + index) << " ";
			index++;
		}
		cout << endl;
	}
}

int ganti(){
	if(xgo == true) {
		xgo = false;
		ogo = true;
	}else{
		xgo = true;
		ogo = false;
	}
}

int main(){

	for(int jalan = 0; jalan < 9; jalan++){
		bool salah = true;
		while(salah == true){
			try{
				system("cls");
				tampil(*ttt, 3, 3);
				if(xgo == true) {
					cout << "\nX go ";
					go = "X";
				}else{
					cout << "\nO go ";
					go = "O";
				}
				cin >> nanya;


				if(nanya == "1" && ttt[0][0] == "1"){
					ttt[0][0] = go;

				}else if(nanya == "2" && ttt[0][1] == "2"){ 
					ttt[0][1] = go;
					
				}else if(nanya == "3" && ttt[0][2] == "3"){
					ttt[0][2] = go;
					
				}else if(nanya == "4" && ttt[1][0] == "4"){
				 	ttt[1][0] = go;
				 	
				}else if(nanya == "5" && ttt[1][1] == "5"){
				 	ttt[1][1] = go;
				 	
				}else if(nanya == "6" && ttt[1][2] == "6"){
					ttt[1][2] = go;
					
				}else if(nanya == "7" && ttt[2][0] == "7"){
				 	ttt[2][0] = go;
				 	
				}else if(nanya == "8" && ttt[2][1] == "8"){
				 	ttt[2][1] = go;
				 	
				}else if(nanya == "9" && ttt[2][2] == "9"){
				 	ttt[2][2] = go;
				 	
				}else{
					throw "udah diisi";
				}
				ganti();
				salah = false;
			}
			catch(const char* error_mesage){
				cerr << "Yg bener " << error_mesage << endl;
			}
		}
		cekmenang();
		if(menang == true) return 0;
	}
}
