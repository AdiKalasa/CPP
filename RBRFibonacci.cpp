#include <iostream>
using namespace std;

int main(){
	int a,b,c,d,n;
	cout<<"Berapa:";cin>>n;
	a = 0;
	b = 1;
	cout<<a<<" "<<b<<" ";
	for(int i=0;i<n;i++){
		c = a+b;
		d = b;
		b = c;
		a = d;
		cout<<c<<" ";
	}
	return 0;
}
