#include <iostream>
// rekursif pangkat
using namespace std;

int awok(int a, int b){
	cout<<a<<endl;
	if(b <=1){
		return a;
	}else{

		return a*awok(a,(b-1));
	}
}
int main(){
	int a,b;
	cin>>a;
	cin>>b;
	cout<<"hasil: "<<awok(a,b)<<endl;
	cin>>a;
	return 0;
}
