/*
1
2 3
4 5 6
*/

void nNumberTriangle(int n) {
    // Write your code here.
    int i,j,c=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout << c++ << " ";
        }
        cout << "\n";
    }
}