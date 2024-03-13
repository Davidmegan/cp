vector<long long> factorialNumbers(long long n) {
    // Write Your Code Here
    vector<long long> v;
    long long fac=1;
    long long num=1;
    while(fac<=n) {
        v.push_back(fac);
        fac*=++num;
    }
    return v;
}