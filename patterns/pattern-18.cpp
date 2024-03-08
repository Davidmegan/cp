/*

C
C B 
C B A

*/

void alphaTriangle(int n) {
    // Write your code here.
    int i;
    char ch;
    for(i=n-1; i>=0; i--){
        for(ch='A'+n-1; ch>='A'+i; ch--){
            cout << ch << " ";
        }
        cout << "\n";
    }
}