/*

    A
  A B A
A B C B A

*/

void alphaHill(int n) {
    // Write your code here.
    int i,j;
    char ch;
    for(i=0; i<n; i++){
        for(j=0; j<n-i-1; j++){
            cout << " ";
        }
        for(ch='A'; ch<='A'+i; ch++){
            cout << ch << " ";
        }
        for(ch='A'+i-1; ch>='A'; ch--){
            cout << ch << " ";
        }
        cout << "\n";
    }
}