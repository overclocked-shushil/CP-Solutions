#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
        vector <int> bills = {100,20,10,5,1};
        vector <int> ans;
        int largest = 0;
        while (n>0){
            if( n<bills[largest]) largest++;
            else{
                ans.push_back(bills[largest]);
                n -= bills[largest];
            }
        }  
        cout << ans.size() << endl;   
    
}