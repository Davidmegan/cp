/*

*
**
***
**
*

*/

void nStarTriangle(int n) {
    // Write your code here.
    int i,j;
    for(i=1;i<=n;i++){
      for (j = 1; j <= i; j++) {
        cout << "*";
      }
      cout << "\n";
    }
    for(i=n-1; i>0;i--){
        for(j=1;j<=i;j++){
            cout << "*";
        }
        cout << "\n";
    }
}