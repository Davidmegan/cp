void fn(vector<string> &v, int n) {
	if(n==0) return;
	v.push_back("Coding Ninjas");
	fn(v,n-1);
}

vector<string> printNTimes(int n) {
	// Write your code here.
	vector<string> v;
	fn(v,n);
	return v;
}