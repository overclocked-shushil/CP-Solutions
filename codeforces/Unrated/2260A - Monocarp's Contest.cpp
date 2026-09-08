#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> a(n);
        int zeros = 0;
 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == 0)
                zeros++;
        }
 
        if (a[0] == 0 && a[n - 1] == 0) {
            cout << 0 << endl;
        }
        else if (zeros < 2) {
            cout << -1 << endl;
        }
        else if (a[0] == 1 && a[n - 1] == 1) {
            cout << 2 << endl;
        }
        else {
            cout << 1 << endl;
        }
    }
 
    return 0;
}