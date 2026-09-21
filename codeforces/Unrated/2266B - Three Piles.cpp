#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;
        long long diff = abs(a - b);
        long long ans;
        if (a >= b) {
            ans = diff + c;
        } else {
            ans = max(diff, c - diff);
        }
        cout << ans << '\n';
    }
    return 0;
}