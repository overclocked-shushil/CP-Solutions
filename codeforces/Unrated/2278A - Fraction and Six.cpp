#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        string p, q;
        cin >> p >> q;

        int freq[26] = {0};

        for (char c : p) {
            freq[c - 'a']++;
        }

        for (char c : q) {
            freq[c - 'a']--;
        }

        freq['s' - 'a']--;
        freq['i' - 'a']--;
        freq['x' - 'a']--;

        bool possible = true;

        for (int i = 0; i < 26; i++) {
            if (freq[i] != 0) {
                possible = false;
                break;
            }
        }

        cout << (possible ? "YES" : "NO") << '\n';
    }

    return 0;
}