#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
        vector<int> freq(101, 0);
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            freq[x]++;
        }
        int maxFreq = 0;
        for (int x = 1; x <= 100; x++) {
            maxFreq = max(maxFreq, freq[x]);
        }
        for (int k = 1; k <= maxFreq; k++) {
            for (int x = 100; x >= 1; x--) {
                if (freq[x] >= k) {
                    cout << x << " ";
                }
            }
        }
        cout << '\n';
    }
    return 0;
}