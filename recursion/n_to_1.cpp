void fn(vector<int> &v, int x) {
    if(x==0) {
        return;
    }
    v.push_back(x);
    fn(v,x-1);
}

vector<int> printNos(int x) {
    // Write Your Code Here
    vector<int> v;
    fn(v,x);
    return v;
}