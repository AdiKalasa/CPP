int fibonacci(){
	int n;
	cout << "Berapa: ";
	cin >> n;


	int a = 1;
	int b = 1;
	int c = 0;
	cout << a << " ";
	for(int i = 1; i < n; i++){
		a = b + c;
		c = b;
		b = a;
		cout << a << " ";
	}
	main();
}
