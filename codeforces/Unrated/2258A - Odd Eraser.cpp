#include <iostream>
#include <vector>
#include <string>
#include <numeric>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
   int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
 
        }
        cout << gcd(a[0], a[n - 1]) << '\n';  
}
}