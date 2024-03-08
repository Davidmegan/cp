/*

A
B B
C C C
D D D D

*/

void alphaRamp(int n) {
    // Write your code here.
    char ch;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            ch = 'A'+i;
            cout << ch << " ";
        }
        cout << "\n";
    }
}
