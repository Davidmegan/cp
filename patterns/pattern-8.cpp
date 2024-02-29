/*

*****
 ***
  *

*/

void nStarTriangle(int n) {
    // Write your code here.
    int i,j;
    for(i=n; i>0; i--){
        for(j=1; j<=n-i; j++){
            cout << " ";
        }
        for(j=1; j<=2*i-1; j++){
            cout << "*";
        }
        cout << "\n";
    }
}