#include <bits/stdc++.h>
using namespace std;
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
 
	int t;
	cin >> t;
 
	while (t--) {
		int n, m;
		cin >> n >> m;
 
		vector<string> words(n);
		bool available[26] = {};
 
		// Initial words
		for (int i = 0; i < n; i++) {
			cin >> words[i];
			available[words[i][0] - 'a'] = true;
		}
 
		vector<string> a(m);
		for (int i = 0; i < m; i++) {
			cin >> a[i];
		}
 
		vector<bool> used(m, false);
		int created = 0;
 
		while (true) {
			bool changed = false;
 
			for (int i = 0; i < m; i++) {
				if (used[i])
					continue;
 
				bool possible = true;
 
				for (char c : a[i]) {
					if (!available[c - 'A']) {
						possible = false;
						break;
					}
				}
 
				if (possible) {
					used[i] = true;
					created++;
					available[a[i][0] - 'A'] = true;
 
					changed = true;
				}
			}
 
			if (!changed)
				break;
		}
 
		cout << (created == m ? "YES\n" : "NO\n");
	}
 
	return 0;
}