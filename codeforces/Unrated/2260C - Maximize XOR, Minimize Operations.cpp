#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        long long x, y;
        cin >> x >> y;
 
        long long S = x + y;
        long long z = x;
 
        for (int bit = 29; bit >= 0; bit--) {
            if ((x & (1LL << bit)) && !(S & (1LL << bit))) {
                z = (x >> (bit + 1)) << (bit + 1);
                z |= S & ((1LL << (bit + 1)) - 1);
                break;
            }
        }
 
        cout << S << ' ' << x - z << '\n';
    }
 
    return 0;
}