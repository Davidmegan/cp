void fn(vector<int> &v, int x){
    if(x==0){
        return;
    }
    fn(v,x-1);
    v.push_back(x);
}

vector<int> printNos(int x) {
    // Write Your Code Here
    vector<int> v;
    fn(v,x);
    return v;
}
