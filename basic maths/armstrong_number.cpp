bool checkArmstrong(int n){
	//Write your code here
	int x=0, rem, num=n, digits=floor(log10(n)+1);
	while(num>0) {
		rem=num%10;
		x+=pow(rem,digits);
		num/=10;
	}
	return x==n;
}
