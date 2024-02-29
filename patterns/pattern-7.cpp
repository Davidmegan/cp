/*

   *
  ***
 *****

*/

void nStarTriangle(int n) {
    // Write your code here.
    int i,j;
    for(i=1; i<=n; i++){
        for(j=1; j<=n-i; j++){
            cout << " ";
        }
        for(j=1; j<=2*i-1; j++){
            cout << "*";
        }
        cout << "\n";
    }
}