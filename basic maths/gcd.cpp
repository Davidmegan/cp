int calcGCD(int n, int m){
    // Write your code here
    while(m!=0 && n!=0){
        if(m>n) m%=n;
        else n%=m;
    }
    if(m==0) return n;
    else return m;
}