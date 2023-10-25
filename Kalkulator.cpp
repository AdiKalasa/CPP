#include <iostream>
#include <cstdlib>

using namespace std;

int main();

void kelar()
{
	int ask;
	cout << "\n\nType 1 for restart or 2 for exit: ";
	cin >> ask;

	if (ask == 1){
		system("cls");
		main();	
	}
	else{
		exit(0);
	}
}


int main()
{

	int askcom;
	cout << "1. Tambah		3. Kali" << endl;
    cout << "2. Kurang		4. Bagi" << endl;
    cout << "Pilih Instruksi: ";
    cin >> askcom;

	int val1;
	float val2,reslt;

	cout << "\nValue 1: ";
	cin >> val1;

	cout << "Value 2: ";
	cin >> val2;

	switch(askcom){
		case 1:
			reslt = val1 + val2;
			cout << val1 << "+" << val2 << "=" << reslt << endl;
			kelar();
		case 2:
			reslt = val1 - val2;
			cout << val1 << "-" << val2 << "=" << reslt << endl;
			kelar();
		case 3:
			reslt = val1 * val2;
			cout << val1 << "x" << val2 << "=" << reslt << endl;
			kelar();
		case 4:
			reslt = val1 / val2;
			cout << val1 << "/" << val2 << "=" << reslt << endl;
			kelar();
	}

	
	kelar();

	cin.get();
	return 0;
}