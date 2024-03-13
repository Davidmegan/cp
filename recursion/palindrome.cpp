bool fn(int l, int r, string &str) {
    if(l>=r) return true;
    else{
        if(str[l]!=str[r]) return false;
        else return fn(l+1,r-1,str);
    }    
}

bool isPalindrome(string& str) {
    // Write your code here.
    return fn(0,str.length()-1, str);
}
