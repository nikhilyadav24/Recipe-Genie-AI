// Count Digits

int countDigits(int n){
	int count = 0,m=n;
	while(m){
		int a = m%10;
		if(a!=0){
			if(n%a==0){
				count++;
			}
		}
		m=m/10;
	}
	return count;	
}