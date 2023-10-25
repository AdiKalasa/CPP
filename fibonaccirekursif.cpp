int proses_fibonaccirekursif(int a, int b, int c, int d){
	if(d>=1){
		a = b + c;
		b = c;
		c = a;
		if(d>1) cout << a << " ";

		return proses_fibonaccirekursif(a,b,c,d-1);
	}
}

int fibonaccirekursif(){

	int a = 1;
	int b = 1;
	int c = 0;
	int d;

	cout << "Berapa: "; cin >> d;
	cout << proses_fibonaccirekursif(a,b,c,d) << endl; 
	main();
}
