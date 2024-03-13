void fn(vector<int> &v, int i, int n) {
    if(i>n) return;
    if(i==1) {
        v.push_back(0);
    }
    else if(i==2) v.push_back(1);
    else {
        int s = v.size()-1;
        v.push_back(v[s]+v[s-1]);
    }
    return fn(v,i+1,n);
}

vector<int> generateFibonacciNumbers(int n) {
    // Write your code here.
    vector<int> v;
    fn(v,1,n);
    return v;
}