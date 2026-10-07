#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (auto &x : a) {
            cin >> x;
        }

        vector<long long> val(n - 4);

        for (int i = 0; i <= n - 5; i++) {
            val[i] = a[i] + a[i + 2] - a[i + 4];
        }

        unordered_map<long long, long long> freq;

        long long ans = 0;

        for (int i = 0; i < n - 4; i++) {
            ans += freq[val[i]];
            freq[val[i]]++;
        }
        for (int i = 0; i < n - 4; i++) {

            if (i + 2 < n - 4 && val[i] == val[i + 2]) {
                ans--;
            }

            if (i + 4 < n - 4 && val[i] == val[i + 4]) {
                ans--;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}