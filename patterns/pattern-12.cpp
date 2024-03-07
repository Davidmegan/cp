/*
1         1
1 2     2 1
1 2 3 3 2 1
*/

void numberCrown(int n) {
    // Write your code here.
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout << j << " ";
        }
        for(j=1;j<=2*(n-i);j++){
            cout << " ";
        }
        for(j=i;j>=1;j--){
            cout << j << " ";
        }
        cout << "\n";
    }
}