#include <iostream>
#include <fstream>
#include <ctime>
#include <climits>
#include <windows.h>
using namespace std;

int main(){

	// long long int vtr = LLONG_MAX;
	// cout<<vtr<<endl;
	// string file = "kdoak\\kala.txt";
	// ofstream bukaFile(file, ios_base::app);
	// if(bukaFile.is_open()){
	// 	bukaFile<<vtr<<endl;
	// 	bukaFile.close();
	// }else{
	// 	cout<<"gk buka"<<endl;
	// }
	int a;
	ShellExecute(NULL, "open", "jaka", NULL, NULL,SW_SHOWNORMAL);
	cout<<"haloo di luar jaka";cin>>a;


	return 0;
}
