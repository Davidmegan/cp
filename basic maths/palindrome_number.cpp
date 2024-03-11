bool palindrome(int n)
{
    // Write your code here
    int num=n, rev=0, rem;
    while(num>0){
        rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }
    return (rev==n)?true:false;
}