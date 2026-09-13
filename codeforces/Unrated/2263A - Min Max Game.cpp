#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int sum = 0;
        vector <int> a(n);
        for (int i = 0;i<n;i++){
            cin >> a[i];
            sum+= a[i];     
                }
        if (sum >= (n + 1) / 2 ) cout << "Bessie" << endl;
        else cout << "Elsie" << endl;
    }
   
    
    return 0;
}