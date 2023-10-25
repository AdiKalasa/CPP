#include <iostream>
#include <ctime>
using namespace std;


int a = 5;
int main()
{	
	srand(time(NULL));
	int b = rand() % 10 + 1;
	cout << "wow" << b;
	cout << "\n"<<(b+=11) << endl;
	return 0;
}
