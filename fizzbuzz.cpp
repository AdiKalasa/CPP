#include <iostream>
using namespace std;
int fizz = 3;
int buzz = 5;
int fizzbuzz = 15;

int main(){
	for(int i = 1;i<=100;i++){
		cout << i;
		fizz-=1;
		buzz-=1;
		fizzbuzz-=1;
		if(fizzbuzz == 0){
			cout<<" Fizzbuzz"<<endl;
			fizzbuzz = 15;
			fizz = 3;
			buzz = 5;
		}else if(buzz == 0){
			cout<<" Buzz"<<endl;
			buzz = 5;
		}else if(fizz == 0){
			cout<<" Fizz"<<endl;
			fizz = 3;
		}else{
			cout<<endl;
		}
	}
	return 0;
}
