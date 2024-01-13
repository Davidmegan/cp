//first repeating element

#include <iostream>
#include <unordered_map>

using namespace std;

int firstRepeat(int a[], int n) {
    unordered_map<int,int> mp;
    int min_index = n;
    for(int i = 0; i < n; i++) {
        if(mp.count(a[i])) {
            if(mp[a[i]] < min_index) {
                min_index = mp[a[i]];
            }
        }
        else {
            mp[a[i]] = i;
        }
    }
    return min_index+1;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << firstRepeat(a, n);
}
