#include <iostream>
using namespace std;

int caritau(int inp){
	int a=0;int b =0;
	int x=inp;
	bool ad,bd;
	for(int i = 0;i<x;i++){
		if(ad == false){
			ad = true;
			bd = false;
			a+=1;
			inp-=1;
		}else{
			bd = true;
			ad = false;
			b+=1;
			inp-=1;	
		}
		if(inp == 1 && a == b){	
			return 1;
		}else if(inp == 0 && a == b){
			return 0;
		}
	}
}

int main(){
	int inp;
	cout<<"Berapa: ";cin>>inp;
	int hasil = caritau(inp);
	if(hasil == 1){
		cout<<"Ganjil"<<endl;
	}else{
		cout<<"Genap"<<endl;
	}
	return 0;
}