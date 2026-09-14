#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int p[n];
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }
        vector<int> wrong;
        for (int i = 0; i < n; i++) {
            if (p[i] != i + 1) {
                wrong.push_back(p[i]);
            }
        }
        vector<int> sorted = wrong;
        sort(sorted.begin(), sorted.end());
        reverse(wrong.begin(), wrong.end());
        if (wrong == sorted)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}