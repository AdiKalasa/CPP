#include <iostream>
#include <array>

using namespace std;

int main(){
	
	array < int, 3 > papako;
	for(int i = 0; i < 3; i++){
		papako[i] = i+100;
		cout << "Nilai ke " << i << " Adalah " << papako[i] << endl;
	}

	for(int i=0;i<papako.size();i++){
		cout<<i<<endl;
	}

	cout << "" << papako.size() << endl;

	return 0;
}
