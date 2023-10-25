#include <iostream>
using namespace std;

string sag(int a){
	if(a == 0){
		return "Hitam";
	}else{
		return "Putih";
	}
}

int gas(int a){
	if(a >= 2){
		cout<<sag(0);
	}else{
		cout<<sag(1);
	}
	cout<<" Warna Kesukaanku"<<endl;
}

int main(){
	gas(4);
	cout<<"Done"<<endl;
	return 0;
}
