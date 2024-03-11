int countDigits(int n){
	// Write your code here.	
	int c=0,rem,num=n;
	while(num>0){
		rem=num%10;
		if(rem!=0 && n%rem==0) c++;
		num/=10;
	}
	return c;
}