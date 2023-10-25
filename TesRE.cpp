#include <iostream>
#include <windows.h>
using namespace std;

int diluar = 2;
string pw = "Jahanam";
int main(){
	string psa;
	cout<<"Passwordnya apa?: ";cin>>psa;
	if(psa == "Jahanam"){
		cout<<"Benar"<<endl;
	}else{
		cout<<"Salah"<<endl;
	}
	Sleep(5000);
	return 0;
}
