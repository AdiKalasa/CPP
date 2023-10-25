#include <iostream>
using namespace std;


int hitung(int n, int p,int r){
	n = n*r;
	p-=1;
	if(p == 0) return n;
	hitung(n,p,r);

}


int main(){
	int n,p;
	cout<<"Masukkan Nilainya: ";cin>>n;
	cout<<"Masukkan Pangkatnya: ";cin>>p;
	cout <<hitung(n,p-1,n)<<endl;
	return 0;
}
