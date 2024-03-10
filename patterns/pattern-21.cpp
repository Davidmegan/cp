/*

****
*  *
*  *
****

*/

void getStarPattern(int n) {
    // Write your code here.
    int i,j;
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            if(j==1||j==n||i==1||i==n){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << "\n";
    }
}
