/*
1
0 1
1 0 1
*/

void nBinaryTriangle(int n) {
    // Write your code here.
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if((i+j)%2){
                cout << "0" << " ";
            }
            else{
                cout << "1" << " ";
            }
        }
        cout << "\n";
    }
}