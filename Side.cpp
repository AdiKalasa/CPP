#include <iostream>
using namespace std;

int segitiga(int qty){
	//#
	//##
	//###

	for(int i = 0;i<qty;i++){
		for(int j = 0;j<=i;j++){
			cout<<"#";
		}
		cout<<endl;
	}
	cout<<"\n\n";

	//  #
	// ##
	//###
	for(int i = 0;i<qty;i++){
		for(int j = qty-1;j>i;j--){
			cout<<" ";
		}
		for(int k = 0;k<=i;k++){
			cout<<"#";
		}
		cout<<endl;
	}
	cout<<"\n\n";

	//###
	//##
	//#
	for(int i = 0;i<qty;i++){
		for(int j = qty;j>i;j--){
			cout<<"#";
		}
		cout<<endl;
	}
	cout<<"\n\n";

	//###
	// ##
	//  #
	for(int i = 0;i<qty;i++){
		for(int k = 0;k<i;k++){
			cout<<" ";
		}
		for(int j = qty; j>i;j--){
			cout<<"#";
		}
		cout<<endl;
	}
	cout<<"\n\n";

	//  #
	// ###
	//#####
	for(int i = 0;i<qty;i++){
		for(int j = qty-1;j>i;j--){
			cout<<" ";
		}
		for(int k = 0;k<=i;k++){
			cout<<"#";
		}
		for(int l = 0;l<i;l++){
			cout<<"#";
		}
		cout<<endl;
	}
	cout<<"\n\n";

	//#####
	// ###
	//  #
	for(int i = 0;i<qty;i++){
		for(int k = 0;k<i;k++){
			cout<<" ";
		}
		for(int j = qty; j>i;j--){
			cout<<"#";
		}
		for(int l = qty-1;l>i;l--){
			cout<<"#";
		}
		cout<<endl;
	}
	cout<<"\n\n";

	// #
	//##
	// #
	//(Unqty)
	int bwh = qty-1;
	for(int i = 0;i<qty;i++){
		for(int j = qty-1;j>i;j--){
			cout<<" ";
		}
		for(int k = 0;k<=i;k++){
			cout<<"#";
		}
		cout<<endl;
		if(i == qty-1){
			for(int l = 0;l<bwh;l++){
				for(int m = 0;m<=l;m++){
					cout<<" ";
				}
				for(int n =bwh;n>l;n--){
					cout<<"#";
				}
				cout<<endl;
			}
		}
	}
	cout<<"\n\n";

	//#
	//##
	//#
	//(Unqty)
	for(int i = 0;i<qty;i++){
		for(int j = 0;j<=i;j++){
			cout<<"#";
		}
		cout<<endl;
		if(i == qty-1){
			for(int k = 0;k<bwh;k++){
				for(int l = bwh;l>k;l--){
					cout<<"#";
				}
				cout<<endl;
			}
		}
	}
	cout<<"\n\n";

	// #
	//###
	// # 
	//(Unqty)
	for(int i = 0;i<qty;i++){
		for(int j = qty-1;j>i;j--){
			cout<<" ";
		}
		for(int k = 0;k<=i;k++){
			cout<<"#";
		}
		for(int o = 0;o<i;o++){
			cout<<"#";
		}
		cout<<endl;
		if(i == qty-1){
			for(int l = 0;l<bwh;l++){
				for(int m = 0;m<=l;m++){
					cout<<" ";
				}
				for(int n =bwh;n>l;n--){
					cout<<"#";
				}
				for(int p = bwh-1;p>l;p--){
					cout<<"#";
				}
				cout<<endl;
			}
		}
	}
	cout<<"\n\n";
	return 0;
}

int kotak(int qty){

}

int main(){
	int pilih;
	cout<<"		1) Segitiga\n";
	cout<<"		2) Segitiga\n";
	cout<<"		--->";cin>>pilih;
	int qty;
	if(pilih == 1){
		cout<<"\nTingginya: ";cin>>qty;
		segitiga(qty);
	}else if(pilih == 2){
		cout<<"\nTingginya: ";cin>>qty;
		kotak(qty);
	}
}
