#include <iostream>
#include <vector>
#include <string>
#include <numeric>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

   int n;
cin >> n;
int count = 0;
for (int i = 0; i < n; i++) {
    int sum  = 0;
    for (int j = 0; j < 3; j++) {
        int x;
        cin >> x;
        sum+= x;
    }
    if (sum == 2 || sum == 3) count ++;
}
    cout << count << endl;
        }
