/*

* * * * * * 
* *     * * 
*         * 
*         * 
* *     * * 
* * * * * * 

*/

void symmetry(int n) {
    // Write your code here.
    int i,j;
    for(i=n; i>0; i--){
        for(j=1; j<=i; j++){
            cout << "*" << " " ;
        }
        for(j=1; j<=2*(n-i); j++){
            cout << " ";
        }
        for(j=1; j<=i; j++){
            cout << "*" << " ";
        }
        cout << "\n";
    }
    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            cout << "*" << " ";
        }
        for(j=1; j<=2*(n-i); j++){
            cout << " ";
        }
        for(j=1; j<=i; j++){
            cout << "*" << " ";
        }
        cout << "\n";
    }
}