#include <iostream>
using namespace std;
float nilaia[9];
float nilaib[9];
char opr;int pkt;
bool tpl;

int tampil(){

	if(!tpl == true){
		cout<<pkt<<"|";
		for(int i = 0;i<3;i++){
			cout << nilaia[i];
			if(i == 2){
				cout << "| ";
			}else{
				cout << " ";
			}
		}
		cout << "|";
		for(int i = 0;i<3;i++){
			cout << nilaib[i];
			if(i == 2){
				cout << "|" << endl;
			}else{
				cout << " ";
			}
		}
		cout << " |";
		for(int j = 3;j<6;j++){
			cout<<nilaia[j];
			if(j == 5){
				cout << "|" << opr;
			}else{
				cout << " ";
			}
		}
		cout << "|";
		for(int j = 3;j<6;j++){
			cout<<nilaib[j];
			if(j == 5){
				cout << "|" << endl;
			}else{
				cout << " ";
			}
		}

		cout << " |";
		for(int j = 6;j<9;j++){
			cout<<nilaia[j];
			if(j == 8){
				cout << "| ";
			}else{
				cout << " ";
			}
		}
		cout << "|";
		for(int j = 6;j<9;j++){
			cout<<nilaib[j];
			if(j == 8){
				cout << "|" << endl;
			}else{
				cout << " ";
			}
		}
	}else{
		cout << "Dikali " << pkt << ": " << endl;
		cout << pkt << "|";
		for(int i=0;i<3;i++){
			cout << nilaia[i];
			if(i == 2){
				cout <<"|"<<endl;
			}else{
				cout <<" ";
			}
		}
		cout <<" |";
		for(int i=3;i<6;i++){
			cout << nilaia[i];
			if(i == 5){
				cout << "|"<<endl;
			}else{
				cout << " ";
			}
		}
		cout <<" |";
		for(int i=6;i<9;i++){
			cout << nilaia[i];
			if(i == 8){
				cout << "|"<<endl;
			}else{
				cout << " ";
			}
		}
	
	}
}

int main(){
	for(int i = 0;i<9;i++){
		cout << "Masukkan nilai A-" << i+1 << ": ";cin>>nilaia[i];
	}
	
	for(int i = 0;i<9;i++){
		cout << "Masukkan nilai B-" << i+1 << ": ";cin>>nilaib[i];
	}
	cout << "Masukkan operator Numerical(+-): ";cin>>opr;
	cout << "Masukkan kalinya: ";cin>>pkt;
	tampil();
	tpl = true;
	if(opr == '+'){
		for(int i = 0;i<9;i++){
			nilaia[i]+=nilaib[i];
		}
	}else{
		for(int i = 0;i<9;i++){
			nilaia[i]-=nilaib[i];
		}
	}
	
	tampil();
	for(int i =0;i<9;i++){
		nilaia[i]*=pkt;
	}

	cout << "Hasil:" << endl;
	cout <<"|";
	for(int i = 0;i<9;i++){
		cout << nilaia[i];
		if(i == 2||i == 5){
			cout << "|\n|";
		}else if(i == 8){
			cout << "|"<<endl;
		}else{
			cout << " ";
		}
	}
	return 0;
}
