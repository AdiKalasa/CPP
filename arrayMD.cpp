#include <iostream>

using namespace std;

void gas(int *yanto, int baris, int kolom){

	int index = 0;
	for(int i = 0; i < baris;i++){
		for(int j = 0; j < kolom; j++){
			cout << *(yanto + index);
			index++;
		}
		cout << endl;
	}
}


int main(){
	const int baris = 2;
	const int kolom = 2;

	int a[baris][kolom] = {1,2,3,4};

	gas(*a, 2, 2);

	return 0;
}