#include <iostream>
#include <array>

using namespace std;
const int n = 5;
int op;
int arr[n] = {5,4,3,2,1};

int show(){
	for(int i :arr){
		cout<<i<<" ";
	}
	cout<<endl;
}

int main(){
	cout<<"		Nilai awal: ";
	show();
	for(int i = 0;i<n-1;i++){
		for(int j = i+1;j<n;j++){
			if(arr[i]>arr[j]){
				op = arr[i];
				arr[i] = arr[j];
				arr[j] = op;
			}
			cout<<"		Hasil banding loop i index ["<<i<<"] dengan loop j index ["<<j<<"]: ";
			show();
		}
	}
	cout<<"		Hasil Akhir: ";
	show();
	return 0;
}