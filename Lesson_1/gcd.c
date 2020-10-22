int gcd(int m, int n ) {
	int r;

	do{
		r=m%n;
		if(r !=0 ){
			m=n;
			n=r;
		}
	}while(r !=0);

	return n;
}