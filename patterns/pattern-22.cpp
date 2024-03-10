/*
4444444
4333334
4322234
4321234
4322234
4333334
4444444
*/

void getNumberPattern(int n) {
    // Write your code here.
    int i,j;
    for(i=n;i>0;i--){
        for(j=n;j>i;j--){
            cout << j;
        }
        for(j=1;j<=2*i-1;j++){
            cout << i;
        }
        for(j=i+1;j<=n;j++){
            cout << j;
        }
        cout << "\n";
    }
    for(i=2;i<=n;i++){
        for(j=n;j>i;j--){
            cout << j;
        }
        for(j=1;j<=2*i-1;j++){
            cout << i;
        }
        for(j=i+1;j<=n;j++){
            cout << j;
        }
        cout << "\n";
    }

}